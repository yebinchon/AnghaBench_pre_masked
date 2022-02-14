
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uniphier_u3hsphy_trim_param {int dummy; } ;
struct uniphier_u3hsphy_priv {int dev; TYPE_1__* data; } ;
struct TYPE_2__ {int (* trim_func ) (struct uniphier_u3hsphy_priv*,int *,struct uniphier_u3hsphy_trim_param*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct uniphier_u3hsphy_priv*,int *,struct uniphier_u3hsphy_trim_param*) ;
 scalar_t__ FUNC_3 (struct uniphier_u3hsphy_trim_param*) ;
 int FUNC_4 (struct uniphier_u3hsphy_priv*,struct uniphier_u3hsphy_trim_param*) ;

__attribute__((used)) static int FUNC_5(struct uniphier_u3hsphy_priv *VAR_2,
       u32 *VAR_3)
{
 struct uniphier_u3hsphy_trim_param VAR_4;
 int VAR_5, VAR_6 = 0;

 if (VAR_2->data->trim_func) {
  VAR_5 = FUNC_4(VAR_2, &VAR_4);
  if (VAR_5 == -VAR_0)
   return VAR_5;






  if (!VAR_5 && FUNC_3(&VAR_4)) {
   VAR_2->data->trim_func(VAR_2, VAR_3, &VAR_4);
   VAR_6 = 1;
  } else {
   FUNC_1(VAR_2->dev, "can't get parameter from nvmem\n");
  }
 }


 if (!VAR_6) {
  *VAR_3 &= ~VAR_1;
  *VAR_3 |= FUNC_0(VAR_1, 3);
 }

 return 0;
}

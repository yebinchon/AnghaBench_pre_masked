
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsens_sensor {int id; struct tsens_priv* priv; } ;
struct tsens_priv {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_temp ) (struct tsens_priv*,int ,int*) ;} ;


 int FUNC_0 (struct tsens_priv*,int ,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, int *VAR_1)
{
 const struct tsens_sensor *VAR_2 = VAR_0;
 struct tsens_priv *VAR_3 = VAR_2->priv;

 return VAR_3->ops->get_temp(VAR_3, VAR_2->id, VAR_1);
}

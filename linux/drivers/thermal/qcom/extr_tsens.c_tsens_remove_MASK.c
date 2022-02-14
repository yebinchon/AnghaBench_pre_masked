
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsens_priv {TYPE_1__* ops; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct tsens_priv*) ;} ;


 struct tsens_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct tsens_priv*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct tsens_priv *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->ops->disable)
  VAR_1->ops->disable(VAR_1);

 return 0;
}

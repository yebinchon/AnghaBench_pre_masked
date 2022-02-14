
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* serdes_an_restart ) (struct b53_device*,int) ;} ;


 int FUNC_0 (struct b53_device*,int) ;

void FUNC_1(struct dsa_switch *VAR_0, int VAR_1)
{
 struct b53_device *VAR_2 = VAR_0->priv;

 if (VAR_2->ops->serdes_an_restart)
  VAR_2->ops->serdes_an_restart(VAR_2, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ax_device {TYPE_2__* plat; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* check_irq ) (struct platform_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (struct platform_device*) ;
 struct ax_device* FUNC_2 (struct net_device*) ;
 struct platform_device* FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = VAR_2;
 struct ax_device *VAR_4 = FUNC_2(VAR_3);
 struct platform_device *VAR_5 = FUNC_3(VAR_3->dev.parent);

 if (!VAR_4->plat->check_irq(VAR_5))
  return VAR_0;

 return FUNC_0(VAR_1, VAR_2);
}

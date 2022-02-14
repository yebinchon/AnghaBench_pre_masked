
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_4__ {scalar_t__ amplifier; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_2)
{
 if (VAR_1->amplifier > 0)
  FUNC_0(&VAR_2->dev.kobj, &VAR_0);
}

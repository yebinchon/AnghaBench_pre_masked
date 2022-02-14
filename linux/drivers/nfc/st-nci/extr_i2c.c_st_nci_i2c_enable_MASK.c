
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_nci_i2c_phy {int irq_active; TYPE_1__* i2c_dev; TYPE_2__* ndlc; int gpiod_reset; } ;
struct TYPE_4__ {scalar_t__ powered; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct st_nci_i2c_phy *VAR_1 = VAR_0;

 FUNC_1(VAR_1->gpiod_reset, 0);
 FUNC_2(10000, 15000);
 FUNC_1(VAR_1->gpiod_reset, 1);
 FUNC_2(80000, 85000);

 if (VAR_1->ndlc->powered == 0 && VAR_1->irq_active == 0) {
  FUNC_0(VAR_1->i2c_dev->irq);
  VAR_1->irq_active = 1;
 }

 return 0;
}

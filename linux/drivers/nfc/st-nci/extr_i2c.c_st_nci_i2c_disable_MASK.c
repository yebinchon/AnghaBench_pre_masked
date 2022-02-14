
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_nci_i2c_phy {int irq_active; TYPE_1__* i2c_dev; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct st_nci_i2c_phy *VAR_1 = VAR_0;

 FUNC_0(VAR_1->i2c_dev->irq);
 VAR_1->irq_active = 0;
}

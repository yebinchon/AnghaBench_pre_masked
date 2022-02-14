
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb347_charger {int mains; TYPE_1__* pdata; int usb; int battery; } ;
struct i2c_client {scalar_t__ irq; } ;
struct TYPE_2__ {scalar_t__ use_mains; scalar_t__ use_usb; int irq_gpio; } ;


 int FUNC_0 (scalar_t__,struct smb347_charger*) ;
 int FUNC_1 (int ) ;
 struct smb347_charger* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct smb347_charger*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct smb347_charger *VAR_1 = FUNC_2(VAR_0);

 if (VAR_0->irq) {
  FUNC_4(VAR_1);
  FUNC_0(VAR_0->irq, VAR_1);
  FUNC_1(VAR_1->pdata->irq_gpio);
 }

 FUNC_3(VAR_1->battery);
 if (VAR_1->pdata->use_usb)
  FUNC_3(VAR_1->usb);
 if (VAR_1->pdata->use_mains)
  FUNC_3(VAR_1->mains);
 return 0;
}

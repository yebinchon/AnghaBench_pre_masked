
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct iTCO_wdt_private {int iTCO_version; int io_lock; int no_reboot_priv; scalar_t__ (* update_no_reboot_bit ) (int ,int) ;int smi_res; } ;


 int VAR_0 ;
 int FUNC_0 (struct iTCO_wdt_private*) ;
 int FUNC_1 (struct iTCO_wdt_private*) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int) ;
 struct iTCO_wdt_private* FUNC_10 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_11(struct watchdog_device *VAR_1)
{
 struct iTCO_wdt_private *VAR_2 = FUNC_10(VAR_1);
 unsigned int VAR_3;

 FUNC_7(&VAR_2->io_lock);

 FUNC_2(VAR_2->smi_res, VAR_1->timeout);


 if (VAR_2->update_no_reboot_bit(VAR_2->no_reboot_priv, 0)) {
  FUNC_8(&VAR_2->io_lock);
  FUNC_6("failed to reset NO_REBOOT flag, reboot disabled by hardware/BIOS\n");
  return -VAR_0;
 }



 if (VAR_2->iTCO_version >= 2)
  FUNC_5(0x01, FUNC_1(VAR_2));
 else if (VAR_2->iTCO_version == 1)
  FUNC_4(0x01, FUNC_1(VAR_2));


 VAR_3 = FUNC_3(FUNC_0(VAR_2));
 VAR_3 &= 0xf7ff;
 FUNC_5(VAR_3, FUNC_0(VAR_2));
 VAR_3 = FUNC_3(FUNC_0(VAR_2));
 FUNC_8(&VAR_2->io_lock);

 if (VAR_3 & 0x0800)
  return -1;
 return 0;
}

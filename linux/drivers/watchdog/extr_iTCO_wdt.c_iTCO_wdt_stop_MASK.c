
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct iTCO_wdt_private {int io_lock; int no_reboot_priv; int (* update_no_reboot_bit ) (int ,int) ;int smi_res; } ;


 int FUNC_0 (struct iTCO_wdt_private*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 struct iTCO_wdt_private* FUNC_7 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_0)
{
 struct iTCO_wdt_private *VAR_1 = FUNC_7(VAR_0);
 unsigned int VAR_2;

 FUNC_4(&VAR_1->io_lock);

 FUNC_1(VAR_1->smi_res);


 VAR_2 = FUNC_2(FUNC_0(VAR_1));
 VAR_2 |= 0x0800;
 FUNC_3(VAR_2, FUNC_0(VAR_1));
 VAR_2 = FUNC_2(FUNC_0(VAR_1));


 VAR_1->update_no_reboot_bit(VAR_1->no_reboot_priv, 1);

 FUNC_5(&VAR_1->io_lock);

 if ((VAR_2 & 0x0800) == 0)
  return -1;
 return 0;
}

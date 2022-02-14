
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct iTCO_wdt_private {int iTCO_version; int io_lock; } ;


 int FUNC_0 (struct iTCO_wdt_private*) ;
 int FUNC_1 (struct iTCO_wdt_private*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct iTCO_wdt_private* FUNC_6 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_0)
{
 struct iTCO_wdt_private *VAR_1 = FUNC_6(VAR_0);

 FUNC_4(&VAR_1->io_lock);


 if (VAR_1->iTCO_version >= 2) {
  FUNC_3(0x01, FUNC_1(VAR_1));
 } else if (VAR_1->iTCO_version == 1) {


  FUNC_3(0x0008, FUNC_0(VAR_1));

  FUNC_2(0x01, FUNC_1(VAR_1));
 }

 FUNC_5(&VAR_1->io_lock);
 return 0;
}

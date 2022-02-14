
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct iTCO_wdt_private {int iTCO_version; int io_lock; } ;


 int FUNC_0 (struct iTCO_wdt_private*) ;
 int FUNC_1 (struct iTCO_wdt_private*) ;
 int FUNC_2 (struct iTCO_wdt_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (struct iTCO_wdt_private*,unsigned char) ;
 struct iTCO_wdt_private* FUNC_8 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_9(struct watchdog_device *VAR_0)
{
 struct iTCO_wdt_private *VAR_1 = FUNC_8(VAR_0);
 unsigned int VAR_2;
 unsigned char VAR_3;
 unsigned int VAR_4 = 0;


 if (VAR_1->iTCO_version >= 2) {
  FUNC_5(&VAR_1->io_lock);
  VAR_2 = FUNC_4(FUNC_1(VAR_1));
  VAR_2 &= 0x3ff;
  FUNC_6(&VAR_1->io_lock);

  VAR_4 = FUNC_7(VAR_1, VAR_2);
 } else if (VAR_1->iTCO_version == 1) {
  FUNC_5(&VAR_1->io_lock);
  VAR_3 = FUNC_3(FUNC_1(VAR_1));
  VAR_3 &= 0x3f;
  if (!(FUNC_4(FUNC_0(VAR_1)) & 0x0008))
   VAR_3 += (FUNC_3(FUNC_2(VAR_1)) & 0x3f);
  FUNC_6(&VAR_1->io_lock);

  VAR_4 = FUNC_7(VAR_1, VAR_3);
 }
 return VAR_4;
}

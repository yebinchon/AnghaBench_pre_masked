
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct iTCO_wdt_private {int iTCO_version; int io_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct iTCO_wdt_private*) ;
 int FUNC_1 (struct iTCO_wdt_private*) ;
 unsigned char FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 unsigned int FUNC_6 (struct iTCO_wdt_private*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct iTCO_wdt_private* FUNC_9 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_10(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 struct iTCO_wdt_private *VAR_3 = FUNC_9(VAR_1);
 unsigned int VAR_4;
 unsigned char VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_6(VAR_3, VAR_2);


 if (VAR_3->iTCO_version == 1)
  VAR_6 /= 2;



 if (VAR_6 < 0x04)
  return -VAR_0;
 if ((VAR_3->iTCO_version >= 2 && VAR_6 > 0x3ff) ||
     (VAR_3->iTCO_version == 1 && VAR_6 > 0x03f))
  return -VAR_0;


 if (VAR_3->iTCO_version >= 2) {
  FUNC_7(&VAR_3->io_lock);
  VAR_4 = FUNC_3(FUNC_1(VAR_3));
  VAR_4 &= 0xfc00;
  VAR_4 |= VAR_6;
  FUNC_5(VAR_4, FUNC_1(VAR_3));
  VAR_4 = FUNC_3(FUNC_1(VAR_3));
  FUNC_8(&VAR_3->io_lock);

  if ((VAR_4 & 0x3ff) != VAR_6)
   return -VAR_0;
 } else if (VAR_3->iTCO_version == 1) {
  FUNC_7(&VAR_3->io_lock);
  VAR_5 = FUNC_2(FUNC_0(VAR_3));
  VAR_5 &= 0xc0;
  VAR_5 |= (VAR_6 & 0xff);
  FUNC_4(VAR_5, FUNC_0(VAR_3));
  VAR_5 = FUNC_2(FUNC_0(VAR_3));
  FUNC_8(&VAR_3->io_lock);

  if ((VAR_5 & 0x3f) != VAR_6)
   return -VAR_0;
 }

 VAR_1->timeout = VAR_2;
 return 0;
}

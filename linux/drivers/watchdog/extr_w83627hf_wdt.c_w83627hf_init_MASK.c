
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned char timeout; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,unsigned char) ;
 int FUNC_6 (int ) ;
__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_5, enum chips VAR_6)
{
 int VAR_7;
 unsigned char VAR_8;

 VAR_7 = FUNC_2();
 if (VAR_7)
  return VAR_7;

 FUNC_6(VAR_0);


 VAR_8 = FUNC_4(0x30);
 if (!(VAR_8 & 0x01))
  FUNC_5(0x30, VAR_8 | 0x01);

 switch (VAR_6) {
 case 137:
 case 136:
  VAR_8 = FUNC_4(0x2B) & ~0x10;
  FUNC_5(0x2B, VAR_8);
  break;
 case 129:

  VAR_8 = FUNC_4(0x29) & ~0x60;
  VAR_8 |= 0x20;
  FUNC_5(0x29, VAR_8);
  break;
 case 128:

  VAR_8 = FUNC_4(0x2b) & ~0x04;
  FUNC_5(0x2b, VAR_8);
  break;
 case 135:
  VAR_8 = (FUNC_4(0x2B) & ~0x08) | 0x04;
  FUNC_5(0x2B, VAR_8);
  break;
 case 140:
 case 139:
  VAR_8 = FUNC_4(0x2D) & ~0x01;
  FUNC_5(0x2D, VAR_8);
  VAR_8 = FUNC_4(VAR_1);
  VAR_8 |= 0x02;

  FUNC_5(VAR_1, VAR_8);
  break;
 case 133:
  break;
 case 130:
  VAR_8 = FUNC_4(0x2C) & ~0x80;
  FUNC_5(0x2C, VAR_8);
  break;
 case 138:
 case 134:
 case 132:
 case 131:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 149:






  VAR_8 = FUNC_4(VAR_1);
  VAR_8 |= 0x02;

  FUNC_5(VAR_1, VAR_8);
  break;
 default:
  break;
 }

 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8 != 0) {
  if (VAR_4) {
   FUNC_1("Stopping previously enabled watchdog until userland kicks in\n");
   FUNC_5(VAR_3, 0);
  } else {
   FUNC_0("Watchdog already running. Resetting timeout to %d sec\n",
    VAR_5->timeout);
   FUNC_5(VAR_3, VAR_5->timeout);
  }
 }


 VAR_8 = FUNC_4(VAR_1) & ~0x0C;
 FUNC_5(VAR_1, VAR_8);


 VAR_8 = FUNC_4(VAR_2) & ~0xD0;
 FUNC_5(VAR_2, VAR_8);

 FUNC_3();

 return 0;
}

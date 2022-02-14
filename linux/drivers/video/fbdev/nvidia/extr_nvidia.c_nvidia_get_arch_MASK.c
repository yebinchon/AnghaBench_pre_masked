
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvidia_par {int Chipset; } ;
struct fb_info {struct nvidia_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct fb_info *VAR_5)
{
 struct nvidia_par *VAR_6 = VAR_5->par;
 u32 VAR_7 = 0;

 switch (VAR_6->Chipset & 0x0ff0) {
 case 0x0100:
 case 0x0110:
 case 0x0150:
 case 0x0170:
 case 0x0180:
 case 0x01A0:
 case 0x01F0:
  VAR_7 = VAR_1;
  break;
 case 0x0200:
 case 0x0250:
 case 0x0280:
  VAR_7 = VAR_2;
  break;
 case 0x0300:
 case 0x0310:
 case 0x0320:
 case 0x0330:
 case 0x0340:
  VAR_7 = VAR_3;
  break;
 case 0x0040:
 case 0x00C0:
 case 0x0120:
 case 0x0140:
 case 0x0160:
 case 0x01D0:
 case 0x0090:
 case 0x0210:
 case 0x0220:
 case 0x0240:
 case 0x0290:
 case 0x0390:
 case 0x03D0:
  VAR_7 = VAR_4;
  break;
 case 0x0020:
  VAR_7 = VAR_0;
  break;
 default:
  break;
 }

 return VAR_7;
}

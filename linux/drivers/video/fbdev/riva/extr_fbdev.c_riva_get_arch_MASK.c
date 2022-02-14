
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct pci_dev *VAR_5)
{
     u32 VAR_6 = 0;

 switch (VAR_5->device & 0x0ff0) {
  case 0x0100:
  case 0x0110:
  case 0x0150:
  case 0x0170:
  case 0x0180:
  case 0x01A0:
  case 0x01F0:
       VAR_6 = VAR_2;
       break;
  case 0x0200:
  case 0x0250:
  case 0x0280:
       VAR_6 = VAR_3;
       break;
  case 0x0300:
  case 0x0310:
  case 0x0320:
  case 0x0330:
  case 0x0340:
       VAR_6 = VAR_4;
       break;
  case 0x0020:
       VAR_6 = VAR_1;
       break;
  case 0x0010:
       VAR_6 = VAR_0;
       break;
  default:
       break;
 }
 return VAR_6;
}

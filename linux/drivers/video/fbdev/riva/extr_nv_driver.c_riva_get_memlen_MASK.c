
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int Architecture; int PFB; int PMC; } ;
struct riva_par {unsigned int Chipset; TYPE_1__* pdev; TYPE_2__ riva; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int bus; } ;
typedef TYPE_2__ RIVA_HW_INST ;







 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ) ;
 struct pci_dev* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;

unsigned long FUNC_5(struct riva_par *VAR_2)
{
 RIVA_HW_INST *VAR_3 = &VAR_2->riva;
 unsigned long VAR_4 = 0;
 unsigned int VAR_5 = VAR_2->Chipset;
 struct pci_dev* VAR_6;
 u32 VAR_7;
 int VAR_8 = FUNC_2(VAR_2->pdev->bus);

 switch (VAR_3->Architecture) {
 case 132:
  if (FUNC_0(VAR_3->PFB, 0x00000000) & 0x00000020) {
   if (((FUNC_0(VAR_3->PMC, 0x00000000) & 0xF0) == 0x20)
       && ((FUNC_0(VAR_3->PMC, 0x00000000)&0x0F)>=0x02)) {



    switch (FUNC_0(VAR_3->PFB,0x00000000) & 0x03) {
    case 2:
     VAR_4 = 1024 * 4;
     break;
    case 1:
     VAR_4 = 1024 * 2;
     break;
    default:
     VAR_4 = 1024 * 8;
     break;
    }
   } else {
    VAR_4 = 1024 * 8;
   }
  } else {



   switch (FUNC_0(VAR_3->PFB, 0x00000000) & 0x00000003) {
   case 0:
    VAR_4 = 1024 * 8;
    break;
   case 2:
    VAR_4 = 1024 * 4;
    break;
   default:
    VAR_4 = 1024 * 2;
    break;
   }
  }
  break;
 case 131:
  if (FUNC_0(VAR_3->PFB, 0x00000000) & 0x00000100) {
   VAR_4 = ((FUNC_0(VAR_3->PFB, 0x00000000)>>12)&0x0F) *
    1024 * 2 + 1024 * 2;
  } else {
   switch (FUNC_0(VAR_3->PFB, 0x00000000) & 0x00000003) {
   case 0:
    VAR_4 = 1024 * 32;
    break;
   case 1:
    VAR_4 = 1024 * 4;
    break;
   case 2:
    VAR_4 = 1024 * 8;
    break;
   case 3:
   default:
    VAR_4 = 1024 * 16;
    break;
   }
  }
  break;
 case 130:
 case 129:
 case 128:
  if(VAR_5 == VAR_1) {

   VAR_6 = FUNC_3(VAR_8, 0, 1);
   FUNC_4(VAR_6, 0x7C, &VAR_7);
   FUNC_1(VAR_6);
   VAR_4 = (((VAR_7 >> 6) & 31) + 1) * 1024;
  } else if (VAR_5 == VAR_0) {
   VAR_6 = FUNC_3(VAR_8, 0, 1);
   FUNC_4(VAR_6, 0x84, &VAR_7);
   FUNC_1(VAR_6);
   VAR_4 = (((VAR_7 >> 4) & 127) + 1) * 1024;
  } else {
   switch ((FUNC_0(VAR_3->PFB, 0x0000020C) >> 20) &
    0x000000FF){
   case 0x02:
    VAR_4 = 1024 * 2;
    break;
   case 0x04:
    VAR_4 = 1024 * 4;
    break;
   case 0x08:
    VAR_4 = 1024 * 8;
    break;
   case 0x10:
    VAR_4 = 1024 * 16;
    break;
   case 0x20:
    VAR_4 = 1024 * 32;
    break;
   case 0x40:
    VAR_4 = 1024 * 64;
    break;
   case 0x80:
    VAR_4 = 1024 * 128;
    break;
   default:
    VAR_4 = 1024 * 16;
    break;
   }
  }
  break;
 }
 return VAR_4;
}

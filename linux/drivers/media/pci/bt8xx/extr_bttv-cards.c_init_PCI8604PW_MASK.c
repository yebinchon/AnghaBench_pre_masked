
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* pci; } ;
struct bttv {TYPE_1__ c; } ;
struct TYPE_4__ {int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct bttv *VAR_2)
{
 int VAR_3;

 if ((FUNC_0(VAR_2->c.pci->devfn) & ~3) != 0xC) {
  FUNC_7("This is not a PCI-8604PW\n");
  return;
 }

 if (FUNC_0(VAR_2->c.pci->devfn) != 0xD)
  return;

 FUNC_2(0x080002, VAR_1);

 VAR_3 = (FUNC_1(VAR_0) >> 21) & 7;

 for (;;) {
  switch (VAR_3) {
  case 1:
  case 5:
  case 6:
  case 4:
   FUNC_4("PCI-8604PW in state %i, toggling pin\n",
     VAR_3);
   FUNC_2(0x080000, VAR_0);
   FUNC_3(1);
   FUNC_2(0x000000, VAR_0);
   FUNC_3(1);
   break;
  case 7:
   FUNC_6("PCI-8604PW unlocked\n");
   return;
  case 0:





   FUNC_5("PCI-8604PW locked until reset\n");
   return;
  default:
   FUNC_5("PCI-8604PW in unknown state %i\n", VAR_3);
   return;
  }

  VAR_3 = (VAR_3 << 4) | ((FUNC_1(VAR_0) >> 21) & 7);

  switch (VAR_3) {
  case 0x15:
  case 0x56:
  case 0x64:
  case 0x47:




   break;
  default:
   FUNC_5("PCI-8604PW invalid transition %i -> %i\n",
          VAR_3 >> 4, VAR_3 & 7);
   return;
  }
  VAR_3 &= 7;
 }
}

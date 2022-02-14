
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int device; int class; int subsystem_vendor; } ;


 int VAR_0 ;





 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,char*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 unsigned int VAR_3 = (VAR_2->subsystem_device & 0xf0) >> 4;
 unsigned int VAR_4 = VAR_2->subsystem_device & 0xf;
 switch (VAR_2->device) {
 case 130:

  if (VAR_2->subsystem_vendor == VAR_1 &&
    VAR_2->subsystem_device == 0x0299)
   return;

 case 132:
 case 131:
 case 129:
 case 128:
  if (VAR_3) {
   FUNC_0(VAR_2, "Netmos %04x (%u parallel, %u serial); changing class SERIAL to OTHER (use parport_serial)\n",
    VAR_2->device, VAR_3, VAR_4);
   VAR_2->class = (VAR_0 << 8) |
       (VAR_2->class & 0xff);
  }
 }
}

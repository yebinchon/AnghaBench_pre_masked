
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subsystem_vendor; int subsystem_device; int d3_delay; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_1->subsystem_vendor == VAR_0 &&
     VAR_1->subsystem_device == 0x00e2) {
  if (VAR_1->d3_delay < 20) {
   VAR_1->d3_delay = 20;
   FUNC_0(VAR_1, "extending delay after power-on from D3 to %d msec\n",
     VAR_1->d3_delay);
  }
 }
}

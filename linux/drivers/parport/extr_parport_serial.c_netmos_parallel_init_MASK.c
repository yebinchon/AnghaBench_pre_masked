
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; int subsystem_device; } ;
struct parport_pc_pci {int numports; int addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_4, struct parport_pc_pci *VAR_5,
    int VAR_6, int VAR_7)
{

 if (VAR_4->device == VAR_1 &&
   VAR_4->subsystem_vendor == VAR_3 &&
   VAR_4->subsystem_device == 0x0299)
  return -VAR_0;

 if (VAR_4->device == VAR_2) {
  VAR_5->numports = 1;
 } else {





  VAR_5->numports = (VAR_4->subsystem_device & 0xf0) >> 4;
  if (VAR_5->numports > FUNC_0(VAR_5->addr))
   VAR_5->numports = FUNC_0(VAR_5->addr);
 }

 return 0;
}

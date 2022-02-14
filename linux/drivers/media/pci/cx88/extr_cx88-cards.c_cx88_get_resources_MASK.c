
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_device; int subsystem_vendor; int devfn; } ;
struct cx88_core {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (char*,int ,unsigned long long,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;

int FUNC_5(const struct cx88_core *VAR_1, struct pci_dev *VAR_2)
{
 if (FUNC_4(FUNC_2(VAR_2, 0),
          FUNC_1(VAR_2, 0),
          VAR_1->name))
  return 0;
 FUNC_3("func %d: Can't get MMIO memory @ 0x%llx, subsystem: %04x:%04x\n",
        FUNC_0(VAR_2->devfn),
        (unsigned long long)FUNC_2(VAR_2, 0),
        VAR_2->subsystem_vendor, VAR_2->subsystem_device);
 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pm8001_hba_info {TYPE_1__* io_mem; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ memvirtaddr; scalar_t__ memsize; scalar_t__ membase; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct pci_dev*,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (char*,int,int,...) ;

__attribute__((used)) static int FUNC_6(struct pm8001_hba_info *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3 = 0;
 struct pci_dev *VAR_4;

 VAR_4 = VAR_1->pdev;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  if ((VAR_2 == 1) || (VAR_2 == 3))
   continue;
  if (FUNC_2(VAR_4, VAR_2) & VAR_0) {
   VAR_1->io_mem[VAR_3].membase =
    FUNC_4(VAR_4, VAR_2);
   VAR_1->io_mem[VAR_3].memsize =
    FUNC_3(VAR_4, VAR_2);
   VAR_1->io_mem[VAR_3].memvirtaddr =
    FUNC_1(VAR_1->io_mem[VAR_3].membase,
    VAR_1->io_mem[VAR_3].memsize);
   FUNC_0(VAR_1,
    FUNC_5("PCI: bar %d, logicalBar %d ",
    VAR_2, VAR_3));
   FUNC_0(VAR_1, FUNC_5(
    "base addr %llx virt_addr=%llx len=%d\n",
    (u64)VAR_1->io_mem[VAR_3].membase,
    (u64)(unsigned long)
    VAR_1->io_mem[VAR_3].memvirtaddr,
    VAR_1->io_mem[VAR_3].memsize));
  } else {
   VAR_1->io_mem[VAR_3].membase = 0;
   VAR_1->io_mem[VAR_3].memsize = 0;
   VAR_1->io_mem[VAR_3].memvirtaddr = 0;
  }
  VAR_3++;
 }
 return 0;
}

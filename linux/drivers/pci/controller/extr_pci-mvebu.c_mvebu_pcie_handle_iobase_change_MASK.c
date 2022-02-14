
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_bridge_emul_conf {int iolimit; int iobase; int iolimitupper; int iobaseupper; int command; } ;
struct mvebu_pcie_window {int remap; int size; scalar_t__ base; } ;
struct TYPE_5__ {struct pci_bridge_emul_conf conf; } ;
struct mvebu_pcie_port {int iowin; int io_attr; int io_target; TYPE_4__* pcie; TYPE_1__ bridge; } ;
struct TYPE_7__ {scalar_t__ start; } ;
struct TYPE_8__ {TYPE_3__ io; TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mvebu_pcie_port*) ;
 int FUNC_2 (struct mvebu_pcie_port*,int ,int ,struct mvebu_pcie_window*,int *) ;

__attribute__((used)) static void FUNC_3(struct mvebu_pcie_port *VAR_1)
{
 struct mvebu_pcie_window VAR_2 = {};
 struct pci_bridge_emul_conf *VAR_3 = &VAR_1->bridge.conf;


 if (VAR_3->iolimit < VAR_3->iobase ||
     VAR_3->iolimitupper < VAR_3->iobaseupper ||
     !(VAR_3->command & VAR_0)) {
  FUNC_2(VAR_1, VAR_1->io_target, VAR_1->io_attr,
          &VAR_2, &VAR_1->iowin);
  return;
 }

 if (!FUNC_1(VAR_1)) {
  FUNC_0(&VAR_1->pcie->pdev->dev,
    "Attempt to set IO when IO is disabled\n");
  return;
 }
 VAR_2.remap = ((VAR_3->iobase & 0xF0) << 8) |
   (VAR_3->iobaseupper << 16);
 VAR_2.base = VAR_1->pcie->io.start + VAR_2.remap;
 VAR_2.size = ((0xFFF | ((VAR_3->iolimit & 0xF0) << 8) |
    (VAR_3->iolimitupper << 16)) -
   VAR_2.remap) +
         1;

 FUNC_2(VAR_1, VAR_1->io_target, VAR_1->io_attr, &VAR_2,
         &VAR_1->iowin);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; int class_revision; void* iolimit; void* iobase; int vendor; } ;
struct pci_bridge_emul {int has_pcie; int * ops; struct mvebu_pcie_port* data; TYPE_1__ conf; } ;
struct mvebu_pcie_port {struct pci_bridge_emul bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mvebu_pcie_port*) ;
 int VAR_5 ;
 int FUNC_1 (struct mvebu_pcie_port*,int ) ;
 int FUNC_2 (struct pci_bridge_emul*,int ) ;

__attribute__((used)) static void FUNC_3(struct mvebu_pcie_port *VAR_6)
{
 struct pci_bridge_emul *VAR_7 = &VAR_6->bridge;

 VAR_7->conf.vendor = VAR_4;
 VAR_7->conf.device = FUNC_1(VAR_6, VAR_0) >> 16;
 VAR_7->conf.class_revision =
  FUNC_1(VAR_6, VAR_1) & 0xff;

 if (FUNC_0(VAR_6)) {

  VAR_7->conf.iobase = VAR_3;
  VAR_7->conf.iolimit = VAR_3;
 }

 VAR_7->has_pcie = 1;
 VAR_7->data = VAR_6;
 VAR_7->ops = &VAR_5;

 FUNC_2(VAR_7, VAR_2);
}

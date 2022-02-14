
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bridge_emul_conf {int command; int secondary_bus; int iolimit; int iobase; } ;
struct pci_bridge_emul {struct pci_bridge_emul_conf conf; struct mvebu_pcie_port* data; } ;
struct mvebu_pcie_port {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int FUNC_0 (struct mvebu_pcie_port*) ;
 int FUNC_1 (struct mvebu_pcie_port*) ;
 int FUNC_2 (struct mvebu_pcie_port*) ;
 int FUNC_3 (struct mvebu_pcie_port*,int ) ;

__attribute__((used)) static void
FUNC_4(struct pci_bridge_emul *VAR_3,
          int VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct mvebu_pcie_port *VAR_8 = VAR_3->data;
 struct pci_bridge_emul_conf *VAR_9 = &VAR_3->conf;

 switch (VAR_4) {
 case 132:
 {
  if (!FUNC_0(VAR_8))
   VAR_9->command &= ~VAR_0;

  if ((VAR_5 ^ VAR_6) & VAR_0)
   FUNC_1(VAR_8);
  if ((VAR_5 ^ VAR_6) & VAR_1)
   FUNC_2(VAR_8);

  break;
 }

 case 131:





  VAR_9->iobase |= VAR_2;
  VAR_9->iolimit |= VAR_2;
  FUNC_1(VAR_8);
  break;

 case 129:
  FUNC_2(VAR_8);
  break;

 case 130:
  FUNC_1(VAR_8);
  break;

 case 128:
  FUNC_3(VAR_8, VAR_9->secondary_bus);
  break;

 default:
  break;
 }
}

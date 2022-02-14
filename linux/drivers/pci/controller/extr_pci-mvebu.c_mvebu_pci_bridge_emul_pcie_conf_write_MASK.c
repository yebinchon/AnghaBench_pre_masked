
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bridge_emul {struct mvebu_pcie_port* data; } ;
struct mvebu_pcie_port {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (struct mvebu_pcie_port*,int,int const) ;

__attribute__((used)) static void
FUNC_1(struct pci_bridge_emul *VAR_7,
          int VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct mvebu_pcie_port *VAR_12 = VAR_7->data;

 switch (VAR_8) {
 case 130:




  VAR_10 &= ~(VAR_5 | VAR_3 |
    VAR_4 | VAR_2);

  FUNC_0(VAR_12, VAR_10, VAR_0 + 130);
  break;

 case 129:






  VAR_10 &= ~VAR_6;

  FUNC_0(VAR_12, VAR_10, VAR_0 + 129);
  break;

 case 128:
  FUNC_0(VAR_12, VAR_10, VAR_1);
  break;
 }
}

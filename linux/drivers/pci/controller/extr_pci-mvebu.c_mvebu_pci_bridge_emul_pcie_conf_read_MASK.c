
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bridge_emul {struct mvebu_pcie_port* data; } ;
struct mvebu_pcie_port {int dummy; } ;
typedef int pci_bridge_emul_read_status_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;



 int VAR_9 ;
 int FUNC_0 (struct mvebu_pcie_port*,int const) ;

__attribute__((used)) static pci_bridge_emul_read_status_t
FUNC_1(struct pci_bridge_emul *VAR_10,
         int VAR_11, u32 *VAR_12)
{
 struct mvebu_pcie_port *VAR_13 = VAR_10->data;

 switch (VAR_11) {
 case 133:
  *VAR_12 = FUNC_0(VAR_13, VAR_0 + 133);
  break;

 case 132:
  *VAR_12 = FUNC_0(VAR_13, VAR_0 + 132) &
     ~(VAR_7 | VAR_5 |
       VAR_6 | VAR_4);
  break;

 case 131:




  *VAR_12 = FUNC_0(VAR_13, VAR_0 + 131) &
    ~VAR_8;
  break;

 case 130:
  *VAR_12 = FUNC_0(VAR_13, VAR_0 + 130);
  break;

 case 128:
  *VAR_12 = VAR_9 << 16;
  break;

 case 129:
  *VAR_12 = FUNC_0(VAR_13, VAR_1);
  break;

 default:
  return VAR_3;
 }

 return VAR_2;
}

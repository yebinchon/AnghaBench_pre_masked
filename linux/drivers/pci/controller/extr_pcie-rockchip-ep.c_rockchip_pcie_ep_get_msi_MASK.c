
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rockchip_pcie {int dummy; } ;
struct rockchip_pcie_ep {struct rockchip_pcie rockchip; } ;
struct pci_epc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rockchip_pcie_ep* FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (struct rockchip_pcie*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pci_epc *VAR_5, u8 VAR_6)
{
 struct rockchip_pcie_ep *VAR_7 = FUNC_1(VAR_5);
 struct rockchip_pcie *VAR_8 = &VAR_7->rockchip;
 u16 VAR_9;

 VAR_9 = FUNC_2(VAR_8,
       FUNC_0(VAR_6) +
       VAR_4);
 if (!(VAR_9 & VAR_1))
  return -VAR_0;

 return ((VAR_9 & VAR_2) >>
   VAR_3);
}

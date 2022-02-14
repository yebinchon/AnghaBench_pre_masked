
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
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rockchip_pcie_ep* FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (struct rockchip_pcie*,scalar_t__) ;
 int FUNC_3 (struct rockchip_pcie*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pci_epc *VAR_5, u8 VAR_6,
        u8 VAR_7)
{
 struct rockchip_pcie_ep *VAR_8 = FUNC_1(VAR_5);
 struct rockchip_pcie *VAR_9 = &VAR_8->rockchip;
 u16 VAR_10;

 VAR_10 = FUNC_2(VAR_9,
       FUNC_0(VAR_6) +
       VAR_4);
 VAR_10 &= ~VAR_2;
 VAR_10 |=
    ((VAR_7 << 1) << VAR_3) |
    VAR_0;
 VAR_10 &= ~VAR_1;
 FUNC_3(VAR_9, VAR_10,
       FUNC_0(VAR_6) +
       VAR_4);
 return 0;
}

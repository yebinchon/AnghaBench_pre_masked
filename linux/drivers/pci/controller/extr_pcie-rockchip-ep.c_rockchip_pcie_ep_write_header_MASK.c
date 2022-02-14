
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rockchip_pcie {int dummy; } ;
struct rockchip_pcie_ep {struct rockchip_pcie rockchip; } ;
struct pci_epf_header {int vendorid; int subsys_vendor_id; int deviceid; int revid; int progif_code; int subclass_code; int baseclass_code; int cache_line_size; int subsys_id; int interrupt_pin; } ;
struct pci_epc {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct rockchip_pcie_ep* FUNC_2 (struct pci_epc*) ;
 int FUNC_3 (struct rockchip_pcie*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pci_epc *VAR_6, u8 VAR_7,
      struct pci_epf_header *VAR_8)
{
 struct rockchip_pcie_ep *VAR_9 = FUNC_2(VAR_6);
 struct rockchip_pcie *VAR_10 = &VAR_9->rockchip;


 if (VAR_7 == 0) {
  u32 VAR_11 = (VAR_8->vendorid & FUNC_0(15, 0)) |
          (VAR_8->subsys_vendor_id & FUNC_0(31, 16)) << 16;

  FUNC_3(VAR_10, VAR_11,
        VAR_0);
 }

 FUNC_3(VAR_10, VAR_8->deviceid << 16,
       FUNC_1(VAR_7) + VAR_5);

 FUNC_3(VAR_10,
       VAR_8->revid |
       VAR_8->progif_code << 8 |
       VAR_8->subclass_code << 16 |
       VAR_8->baseclass_code << 24,
       FUNC_1(VAR_7) + VAR_3);
 FUNC_3(VAR_10, VAR_8->cache_line_size,
       FUNC_1(VAR_7) +
       VAR_1);
 FUNC_3(VAR_10, VAR_8->subsys_id << 16,
       FUNC_1(VAR_7) +
       VAR_4);
 FUNC_3(VAR_10, VAR_8->interrupt_pin << 8,
       FUNC_1(VAR_7) +
       VAR_2);

 return 0;
}

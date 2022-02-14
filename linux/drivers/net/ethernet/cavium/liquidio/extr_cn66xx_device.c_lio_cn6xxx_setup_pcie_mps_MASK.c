
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct octeon_device {int pcie_port; int pci_dev; } ;
typedef enum octeon_pcie_mps { ____Placeholder_octeon_pcie_mps } octeon_pcie_mps ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int,int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct octeon_device *VAR_2,
          enum octeon_pcie_mps VAR_3)
{
 u32 VAR_4;
 u64 VAR_5;


 FUNC_3(VAR_2->pci_dev, VAR_0, &VAR_4);

 if (VAR_3 == VAR_1) {
  VAR_3 = ((VAR_4 & (0x7 << 5)) >> 5);
 } else {
  VAR_4 &= ~(0x7 << 5);
  VAR_4 |= (VAR_3 << 5);
  FUNC_4(VAR_2->pci_dev, VAR_0, VAR_4);
 }


 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_2->pcie_port));
 VAR_5 |= (VAR_3 << 4);
 FUNC_2(VAR_2, VAR_5, FUNC_0(VAR_2->pcie_port));
}

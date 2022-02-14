
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_pcie_ep {scalar_t__ num_ib_windows; int ib_window_map; scalar_t__* bar_to_atu; } ;
struct dw_pcie {int dev; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;
typedef enum dw_pcie_as_type { ____Placeholder_dw_pcie_as_type } dw_pcie_as_type ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*,scalar_t__,int,int ,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_5(struct dw_pcie_ep *VAR_1, enum pci_barno VAR_2,
      dma_addr_t VAR_3,
      enum dw_pcie_as_type VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 struct dw_pcie *VAR_7 = FUNC_4(VAR_1);

 VAR_6 = FUNC_2(VAR_1->ib_window_map, VAR_1->num_ib_windows);
 if (VAR_6 >= VAR_1->num_ib_windows) {
  FUNC_0(VAR_7->dev, "No free inbound window\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_7, VAR_6, VAR_2, VAR_3,
           VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(VAR_7->dev, "Failed to program IB window\n");
  return VAR_5;
 }

 VAR_1->bar_to_atu[VAR_2] = VAR_6;
 FUNC_3(VAR_6, VAR_1->ib_window_map);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct dw_pcie_ep {size_t num_ob_windows; int * outbound_addr; int ob_window_map; } ;
struct dw_pcie {int dev; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*,size_t,int ,int ,int ,size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 int FUNC_3 (size_t,int ) ;
 struct dw_pcie* FUNC_4 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_5(struct dw_pcie_ep *VAR_2, phys_addr_t VAR_3,
       u64 VAR_4, size_t VAR_5)
{
 u32 VAR_6;
 struct dw_pcie *VAR_7 = FUNC_4(VAR_2);

 VAR_6 = FUNC_2(VAR_2->ob_window_map, VAR_2->num_ob_windows);
 if (VAR_6 >= VAR_2->num_ob_windows) {
  FUNC_0(VAR_7->dev, "No free outbound window\n");
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_6, VAR_1,
      VAR_3, VAR_4, VAR_5);

 FUNC_3(VAR_6, VAR_2->ob_window_map);
 VAR_2->outbound_addr[VAR_6] = VAR_3;

 return 0;
}

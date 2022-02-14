
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dw_pcie {int dummy; } ;
typedef enum pci_barno { ____Placeholder_pci_barno } pci_barno ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct dw_pcie*,scalar_t__,int) ;
 int FUNC_3 (struct dw_pcie*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct dw_pcie *VAR_2, enum pci_barno VAR_3,
       int VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_0 + (4 * VAR_3);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2, VAR_5, 0x0);
 FUNC_2(VAR_2, VAR_5, 0x0);
 if (VAR_4 & VAR_1) {
  FUNC_3(VAR_2, VAR_5 + 4, 0x0);
  FUNC_2(VAR_2, VAR_5 + 4, 0x0);
 }
 FUNC_0(VAR_2);
}

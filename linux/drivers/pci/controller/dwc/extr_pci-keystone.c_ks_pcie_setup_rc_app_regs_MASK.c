
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct pcie_port {TYPE_1__* mem; } ;
struct keystone_pcie {int num_viewport; scalar_t__ is_am6; struct dw_pcie* pci; } ;
struct dw_pcie {struct pcie_port pp; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dw_pcie*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct keystone_pcie*,int ) ;
 int FUNC_5 (struct keystone_pcie*,int ,int) ;
 int FUNC_6 (struct keystone_pcie*) ;
 int FUNC_7 (struct keystone_pcie*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct keystone_pcie *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = VAR_7->num_viewport;
 struct dw_pcie *VAR_10 = VAR_7->pci;
 struct pcie_port *VAR_11 = &VAR_10->pp;
 u64 VAR_12 = VAR_11->mem->start;
 u64 VAR_13 = VAR_11->mem->end;
 int VAR_14;


 FUNC_7(VAR_7);
 FUNC_2(VAR_10, VAR_5, 0);
 FUNC_2(VAR_10, VAR_6, 0);
 FUNC_6(VAR_7);

 if (VAR_7->is_am6)
  return;

 VAR_8 = FUNC_3(VAR_3);
 FUNC_5(VAR_7, VAR_2, VAR_8);


 for (VAR_14 = 0; VAR_14 < VAR_9 && (VAR_12 < VAR_13); VAR_14++) {
  FUNC_5(VAR_7, FUNC_1(VAR_14),
       FUNC_8(VAR_12) | VAR_1);
  FUNC_5(VAR_7, FUNC_0(VAR_14),
       FUNC_9(VAR_12));
  VAR_12 += VAR_3;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_0);
 VAR_8 |= VAR_4;
 FUNC_5(VAR_7, VAR_0, VAR_8);
}

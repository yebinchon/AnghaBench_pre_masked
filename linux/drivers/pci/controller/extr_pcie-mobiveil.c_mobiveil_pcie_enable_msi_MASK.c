
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mobiveil_msi {scalar_t__ msi_pages_phys; int num_of_vectors; } ;
struct mobiveil_pcie {scalar_t__ apb_csr_base; struct mobiveil_msi msi; scalar_t__ pcie_reg_base; } ;
typedef scalar_t__ phys_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mobiveil_pcie *VAR_5)
{
 phys_addr_t VAR_6 = VAR_5->pcie_reg_base;
 struct mobiveil_msi *VAR_7 = &VAR_5->msi;

 VAR_5->msi.num_of_vectors = VAR_4;
 VAR_7->msi_pages_phys = (phys_addr_t)VAR_6;

 FUNC_2(FUNC_0(VAR_6),
         VAR_5->apb_csr_base + VAR_1);
 FUNC_2(FUNC_1(VAR_6),
         VAR_5->apb_csr_base + VAR_0);
 FUNC_2(4096, VAR_5->apb_csr_base + VAR_3);
 FUNC_2(1, VAR_5->apb_csr_base + VAR_2);
}

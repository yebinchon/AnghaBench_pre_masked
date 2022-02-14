
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_pcie_res_desc {int sriov_state; int pf_state; int pf_type; int num_vfs; } ;


 int FUNC_0 (struct be_pcie_res_desc*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct be_pcie_res_desc *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->sriov_state = 0xFF;
 VAR_0->pf_state = 0xFF;
 VAR_0->pf_type = 0xFF;
 VAR_0->num_vfs = 0xFFFF;
}

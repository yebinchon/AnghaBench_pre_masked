
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_ctx_hw_stats {int dummy; } ;
struct hwrm_pcie_qstats_input {int pcie_stat_host_addr; int pcie_stat_size; int member_0; } ;
struct bnxt {int flags; int hw_pcie_stats_map; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_pcie_qstats_input*,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_pcie_qstats_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_3)
{
 struct hwrm_pcie_qstats_input VAR_4 = {0};

 if (!(VAR_3->flags & VAR_0))
  return 0;

 FUNC_0(VAR_3, &VAR_4, VAR_2, -1, -1);
 VAR_4.pcie_stat_size = FUNC_1(sizeof(struct pcie_ctx_hw_stats));
 VAR_4.pcie_stat_host_addr = FUNC_2(VAR_3->hw_pcie_stats_map);
 return FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4), VAR_1);
}

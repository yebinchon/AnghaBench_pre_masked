
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_port_qstats_input {void* rx_stat_host_addr; void* tx_stat_host_addr; int port_id; int member_0; } ;
struct bnxt_pf_info {int port_id; } ;
struct bnxt {int flags; int hw_rx_port_stats_map; int hw_tx_port_stats_map; struct bnxt_pf_info pf; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_port_qstats_input*,int ,int,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_qstats_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_3)
{
 int VAR_4;
 struct bnxt_pf_info *VAR_5 = &VAR_3->pf;
 struct hwrm_port_qstats_input VAR_6 = {0};

 if (!(VAR_3->flags & VAR_0))
  return 0;

 FUNC_0(VAR_3, &VAR_6, VAR_2, -1, -1);
 VAR_6.port_id = FUNC_1(VAR_5->port_id);
 VAR_6.tx_stat_host_addr = FUNC_2(VAR_3->hw_tx_port_stats_map);
 VAR_6.rx_stat_host_addr = FUNC_2(VAR_3->hw_rx_port_stats_map);
 VAR_4 = FUNC_3(VAR_3, &VAR_6, sizeof(VAR_6), VAR_1);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {void* tx_failed_cnt; void* drop_blind; void* fwd_bcast_cnt; void* fwd_unicast_cnt; void* fwd_drop_nobuf; void* fwd_drop_noroute; void* fwd_drop_ttl; void* fwd_drop_rbt; } ;
struct lbs_private {TYPE_1__ mstats; } ;
struct ethtool_stats {int dummy; } ;
struct cmd_ds_mesh_access {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_ds_mesh_access*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void**,int ,int) ;

void FUNC_3(struct net_device *VAR_2,
 struct ethtool_stats *VAR_3, uint64_t *VAR_4)
{
 struct lbs_private *VAR_5 = VAR_2->ml_priv;
 struct cmd_ds_mesh_access VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_0, &VAR_6);

 if (VAR_7) {
  FUNC_2(VAR_4, 0, VAR_1*(sizeof(uint64_t)));
  return;
 }

 VAR_5->mstats.fwd_drop_rbt = FUNC_1(VAR_6.data[0]);
 VAR_5->mstats.fwd_drop_ttl = FUNC_1(VAR_6.data[1]);
 VAR_5->mstats.fwd_drop_noroute = FUNC_1(VAR_6.data[2]);
 VAR_5->mstats.fwd_drop_nobuf = FUNC_1(VAR_6.data[3]);
 VAR_5->mstats.fwd_unicast_cnt = FUNC_1(VAR_6.data[4]);
 VAR_5->mstats.fwd_bcast_cnt = FUNC_1(VAR_6.data[5]);
 VAR_5->mstats.drop_blind = FUNC_1(VAR_6.data[6]);
 VAR_5->mstats.tx_failed_cnt = FUNC_1(VAR_6.data[7]);

 VAR_4[0] = VAR_5->mstats.fwd_drop_rbt;
 VAR_4[1] = VAR_5->mstats.fwd_drop_ttl;
 VAR_4[2] = VAR_5->mstats.fwd_drop_noroute;
 VAR_4[3] = VAR_5->mstats.fwd_drop_nobuf;
 VAR_4[4] = VAR_5->mstats.fwd_unicast_cnt;
 VAR_4[5] = VAR_5->mstats.fwd_bcast_cnt;
 VAR_4[6] = VAR_5->mstats.drop_blind;
 VAR_4[7] = VAR_5->mstats.tx_failed_cnt;
}

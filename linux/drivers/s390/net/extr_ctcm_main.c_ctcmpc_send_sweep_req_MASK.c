
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int th_last_seq; } ;
struct TYPE_3__ {int th_seg; int th_blk_flag; int th_is_xid; int th_seq_num; int th_ch_flag; } ;
struct th_sweep {TYPE_2__ sw; TYPE_1__ th; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct ctcm_priv* ml_priv; } ;
struct mpc_group {int in_sweep; int fsm; int * active_channels; int sweep_req_pend_num; int sweep_rsp_pend_num; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {int sweep_timer; int sweep_queue; int th_seq_num; struct net_device* netdev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int,int ,struct channel*) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct th_sweep*) ;
 struct th_sweep* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*,struct th_sweep*,int ) ;
 int FUNC_10 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct channel *VAR_9)
{
 struct net_device *VAR_10 = VAR_9->netdev;
 struct ctcm_priv *VAR_11;
 struct mpc_group *VAR_12;
 struct th_sweep *VAR_13;
 struct sk_buff *VAR_14;
 struct channel *VAR_15;


 VAR_11 = VAR_10->ml_priv;
 VAR_12 = VAR_11->mpcg;
 VAR_15 = VAR_11->channel[VAR_1];



 if (VAR_12->in_sweep == 0) {
  VAR_12->in_sweep = 1;
  VAR_12->sweep_rsp_pend_num = VAR_12->active_channels[VAR_0];
  VAR_12->sweep_req_pend_num = VAR_12->active_channels[VAR_0];
 }

 VAR_14 = FUNC_0(VAR_6, VAR_3|VAR_4);

 if (VAR_14 == ((void*)0)) {

    goto nomem;
 }

 VAR_13 = FUNC_7(VAR_7, FUNC_5());

 if (!VAR_13) {
  FUNC_2(VAR_14);

    goto nomem;
 }

 VAR_13->th.th_seg = 0x00 ;
 VAR_13->th.th_ch_flag = VAR_8;
 VAR_13->th.th_blk_flag = 0x00;
 VAR_13->th.th_is_xid = 0x00;
 VAR_13->th.th_seq_num = 0x00;
 VAR_13->sw.th_last_seq = VAR_15->th_seq_num;

 FUNC_9(VAR_14, VAR_13, VAR_7);

 FUNC_6(VAR_13);

 FUNC_8(VAR_10);
 FUNC_10(&VAR_15->sweep_queue, VAR_14);

 FUNC_3(&VAR_15->sweep_timer, 100, VAR_2, VAR_15);

 return;

nomem:
 VAR_12->in_sweep = 0;
 FUNC_1(VAR_10);
 FUNC_4(VAR_12->fsm, VAR_5, VAR_10);

 return;
}

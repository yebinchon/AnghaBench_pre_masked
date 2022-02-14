
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_8__ {void* length; void* code; } ;
struct TYPE_6__ {int reset_seq_no_flag; int param_info; void* flags; void* curr_seq_no; int tid; int peer_mac_addr; int queue_id; void* window_size; void* bar_thrs; } ;
struct mwl8k_cmd_bastream {TYPE_4__ header; TYPE_2__ create_params; void* action; } ;
struct mwl8k_ampdu_stream {int tid; TYPE_3__* sta; int idx; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_5__ {int ampdu_factor; int ampdu_density; } ;
struct TYPE_7__ {int addr; TYPE_1__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct mwl8k_cmd_bastream*) ;
 struct mwl8k_cmd_bastream* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_4__*) ;
 int FUNC_6 (int ,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_hw *VAR_9, struct mwl8k_ampdu_stream *VAR_10,
  u8 VAR_11, struct ieee80211_vif *VAR_12)
{
 struct mwl8k_cmd_bastream *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_2;


 VAR_13->header.code = FUNC_0(VAR_8);
 VAR_13->header.length = FUNC_0(sizeof(*VAR_13));

 VAR_13->action = FUNC_1(VAR_7);

 VAR_13->create_params.bar_thrs = FUNC_1((u32)VAR_11);
 VAR_13->create_params.window_size = FUNC_1((u32)VAR_11);
 VAR_13->create_params.queue_id = VAR_10->idx;

 FUNC_4(VAR_13->create_params.peer_mac_addr, VAR_10->sta->addr, VAR_3);
 VAR_13->create_params.tid = VAR_10->tid;
 VAR_13->create_params.curr_seq_no = FUNC_0(0);
 VAR_13->create_params.reset_seq_no_flag = 1;

 VAR_13->create_params.param_info =
  (VAR_10->sta->ht_cap.ampdu_factor &
   VAR_6) |
  ((VAR_10->sta->ht_cap.ampdu_density << 2) &
   VAR_5);

 VAR_13->create_params.flags =
  FUNC_1(VAR_1 |
     VAR_0);

 VAR_14 = FUNC_5(VAR_9, VAR_12, &VAR_13->header);

 FUNC_6(VAR_9->wiphy, "Created a BA stream for %pM : tid %d\n",
  VAR_10->sta->addr, VAR_10->tid);
 FUNC_2(VAR_13);

 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int uc_tsid; } ;
struct TYPE_9__ {TYPE_1__ ts_info; } ;
struct TYPE_14__ {int addr; TYPE_2__ t_spec; } ;
struct TYPE_12__ {int seq_num; } ;
struct TYPE_13__ {TYPE_5__ field; } ;
struct TYPE_10__ {int buffer_size; int tid; int ba_policy; scalar_t__ amsdu_support; } ;
struct TYPE_11__ {TYPE_3__ field; } ;
struct ba_record {TYPE_6__ start_seq_ctrl; scalar_t__ timeout_value; TYPE_4__ param_set; int dialog_token; scalar_t__ valid; } ;
struct tx_ts_record {int tx_cur_seq; TYPE_7__ ts_common_info; struct ba_record tx_pending_ba_record; } ;
struct ieee80211_device {int dummy; } ;


 int FUNC_0 (struct ieee80211_device*,struct ba_record*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_device*,struct ba_record*) ;
 int FUNC_2 (struct ieee80211_device*,int ,struct ba_record*) ;

void
FUNC_3(
 struct ieee80211_device *VAR_1,
 struct tx_ts_record *VAR_2,
 u8 VAR_3,
 u8 VAR_4
 )
{
 struct ba_record *VAR_5 = &VAR_2->tx_pending_ba_record;

 if (VAR_5->valid && !VAR_4)
  return;


 FUNC_1(VAR_1, VAR_5);

 VAR_5->dialog_token++;
 VAR_5->param_set.field.amsdu_support = 0;
 VAR_5->param_set.field.ba_policy = VAR_3;
 VAR_5->param_set.field.tid = VAR_2->ts_common_info.t_spec.ts_info.uc_tsid;

 VAR_5->param_set.field.buffer_size = 32;
 VAR_5->timeout_value = 0;
 VAR_5->start_seq_ctrl.field.seq_num = (VAR_2->tx_cur_seq + 3) % 4096;

 FUNC_0(VAR_1, VAR_5, VAR_0);

 FUNC_2(VAR_1, VAR_2->ts_common_info.addr, VAR_5);
}

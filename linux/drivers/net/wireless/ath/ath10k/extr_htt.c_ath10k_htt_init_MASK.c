
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_htt {int prefetch_len; int t2h_msg_types_max; int t2h_msg_types; struct ath10k* ar; } ;
struct ath10k {struct ath10k_htt htt; TYPE_2__* running_fw; } ;
struct TYPE_3__ {int htt_op_version; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_3(struct ath10k *VAR_9)
{
 struct ath10k_htt *VAR_10 = &VAR_9->htt;

 VAR_10->ar = VAR_9;







 VAR_10->prefetch_len =
  36 +
  4 +
  8 +
  2;

 switch (VAR_9->running_fw->fw_file.htt_op_version) {
 case 132:
  VAR_9->htt.t2h_msg_types = VAR_5;
  VAR_9->htt.t2h_msg_types_max = VAR_2;
  break;
 case 133:
  VAR_9->htt.t2h_msg_types = VAR_6;
  VAR_9->htt.t2h_msg_types_max = VAR_1;
  break;
 case 129:
  VAR_9->htt.t2h_msg_types = VAR_8;
  VAR_9->htt.t2h_msg_types_max = VAR_4;
  break;
 case 131:
  VAR_9->htt.t2h_msg_types = VAR_7;
  VAR_9->htt.t2h_msg_types_max = VAR_3;
  break;
 case 130:
 case 128:
  FUNC_0(1);
  return -VAR_0;
 }
 FUNC_2(VAR_10);
 FUNC_1(VAR_10);

 return 0;
}

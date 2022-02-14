
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_aggr_conf_v2 {int max_num_ampdu_subframes; int max_num_amsdu_subframes; } ;
struct TYPE_2__ {int msg_type; } ;
struct htt_cmd {struct htt_aggr_conf_v2 aggr_conf_v2; TYPE_1__ hdr; } ;
struct ath10k_htt {int eid; struct ath10k* ar; } ;
struct ath10k {int htc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int) ;
 struct sk_buff* FUNC_1 (struct ath10k*,int) ;
 int FUNC_2 (int *,int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k_htt *VAR_4,
       u8 VAR_5,
       u8 VAR_6)
{
 struct ath10k *VAR_7 = VAR_4->ar;
 struct htt_aggr_conf_v2 *VAR_8;
 struct sk_buff *VAR_9;
 struct htt_cmd *VAR_10;
 int VAR_11;
 int VAR_12;



 if (VAR_5 == 0 || VAR_5 > 64)
  return -VAR_1;

 if (VAR_6 == 0 || VAR_6 > 31)
  return -VAR_1;

 VAR_11 = sizeof(VAR_10->hdr);
 VAR_11 += sizeof(VAR_10->aggr_conf_v2);

 VAR_9 = FUNC_1(VAR_7, VAR_11);
 if (!VAR_9)
  return -VAR_2;

 FUNC_4(VAR_9, VAR_11);
 VAR_10 = (struct htt_cmd *)VAR_9->data;
 VAR_10->hdr.msg_type = VAR_3;

 VAR_8 = &VAR_10->aggr_conf_v2;
 VAR_8->max_num_ampdu_subframes = VAR_5;
 VAR_8->max_num_amsdu_subframes = VAR_6;

 FUNC_0(VAR_7, VAR_0, "htt h2t aggr cfg msg amsdu %d ampdu %d",
     VAR_8->max_num_amsdu_subframes,
     VAR_8->max_num_ampdu_subframes);

 VAR_12 = FUNC_2(&VAR_4->ar->htc, VAR_4->eid, VAR_9);
 if (VAR_12) {
  FUNC_3(VAR_9);
  return VAR_12;
 }

 return 0;
}

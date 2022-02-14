
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct htt_stats_req {void* cookie_msb; void* cookie_lsb; int stat_type; int reset_types; int upload_types; } ;
struct TYPE_2__ {int msg_type; } ;
struct htt_cmd {struct htt_stats_req stats_req; TYPE_1__ hdr; } ;
struct ath10k_htt {int eid; struct ath10k* ar; } ;
struct ath10k {int htc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct ath10k*,int) ;
 int FUNC_1 (int *,int ,struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct htt_stats_req*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

int FUNC_8(struct ath10k_htt *VAR_3, u32 VAR_4, u32 VAR_5,
        u64 VAR_6)
{
 struct ath10k *VAR_7 = VAR_3->ar;
 struct htt_stats_req *VAR_8;
 struct sk_buff *VAR_9;
 struct htt_cmd *VAR_10;
 int VAR_11 = 0, VAR_12;

 VAR_11 += sizeof(VAR_10->hdr);
 VAR_11 += sizeof(VAR_10->stats_req);

 VAR_9 = FUNC_0(VAR_7, VAR_11);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(VAR_9, VAR_11);
 VAR_10 = (struct htt_cmd *)VAR_9->data;
 VAR_10->hdr.msg_type = VAR_1;

 VAR_8 = &VAR_10->stats_req;

 FUNC_6(VAR_8, 0, sizeof(*VAR_8));




 FUNC_5(VAR_8->upload_types, &VAR_4, 3);
 FUNC_5(VAR_8->reset_types, &VAR_5, 3);
 VAR_8->stat_type = VAR_2;
 VAR_8->cookie_lsb = FUNC_3(VAR_6 & 0xffffffff);
 VAR_8->cookie_msb = FUNC_3((VAR_6 & 0xffffffff00000000ULL) >> 32);

 VAR_12 = FUNC_1(&VAR_3->ar->htc, VAR_3->eid, VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_7, "failed to send htt type stats request: %d",
       VAR_12);
  FUNC_4(VAR_9);
  return VAR_12;
 }

 return 0;
}

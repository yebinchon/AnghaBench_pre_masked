
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {int self_ucast_dpu_sign; int self_dpu_desc_index; int self_sta_index; } ;
struct wcn36xx_tx_bd {int dpu_ne; int ub; int ack_policy; int dpu_sign; int dpu_desc_idx; int sta_index; int bd_rate; } ;
struct wcn36xx_sta {int tid; int is_data_encrypted; int dpu_desc_index; int sta_index; int bss_dpu_desc_index; int bss_sta_index; int ucast_dpu_sign; struct wcn36xx_vif* vif; } ;
struct wcn36xx {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_qos_hdr {int dummy; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int frame_control; int addr2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct wcn36xx_vif* FUNC_0 (struct wcn36xx*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ieee80211_vif* FUNC_3 (struct wcn36xx_vif*) ;
 int FUNC_4 (struct wcn36xx_tx_bd*,int,int ,int ) ;
 int FUNC_5 (struct wcn36xx*,struct wcn36xx_sta*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct wcn36xx_tx_bd *VAR_5,
    struct wcn36xx *VAR_6,
    struct wcn36xx_vif **VAR_7,
    struct wcn36xx_sta *VAR_8,
    struct sk_buff *VAR_9,
    bool VAR_10)
{
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->data;
 struct ieee80211_vif *VAR_12 = ((void*)0);
 struct wcn36xx_vif *VAR_13 = ((void*)0);
 bool VAR_14;

 VAR_5->bd_rate = VAR_4;





 if (VAR_8) {
  VAR_13 = VAR_8->vif;
  VAR_12 = FUNC_3(VAR_13);

  VAR_5->dpu_sign = VAR_8->ucast_dpu_sign;
  if (VAR_12->type == VAR_3) {
   VAR_5->sta_index = VAR_8->bss_sta_index;
   VAR_5->dpu_desc_idx = VAR_8->bss_dpu_desc_index;
  } else if (VAR_12->type == VAR_1 ||
      VAR_12->type == VAR_0 ||
      VAR_12->type == VAR_2) {
   VAR_5->sta_index = VAR_8->sta_index;
   VAR_5->dpu_desc_idx = VAR_8->dpu_desc_index;
  }
 } else {
  VAR_13 = FUNC_0(VAR_6, VAR_11->addr2);
  VAR_5->sta_index = VAR_13->self_sta_index;
  VAR_5->dpu_desc_idx = VAR_13->self_dpu_desc_index;
  VAR_5->dpu_sign = VAR_13->self_ucast_dpu_sign;
 }

 if (FUNC_2(VAR_11->frame_control) ||
    (VAR_8 && !VAR_8->is_data_encrypted))
  VAR_5->dpu_ne = 1;

 if (VAR_10) {
  VAR_5->ub = 1;
  VAR_5->ack_policy = 1;
 }
 *VAR_7 = VAR_13;

 VAR_14 = FUNC_1(VAR_11->frame_control);

 FUNC_4(VAR_5,
      VAR_14 ?
      sizeof(struct ieee80211_qos_hdr) :
      sizeof(struct ieee80211_hdr_3addr),
      VAR_9->len, VAR_8 ? VAR_8->tid : 0);

 if (VAR_8 && VAR_14)
  FUNC_5(VAR_6, VAR_8, VAR_9);
}

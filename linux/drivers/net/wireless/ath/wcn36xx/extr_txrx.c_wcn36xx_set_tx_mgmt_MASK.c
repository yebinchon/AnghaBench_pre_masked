
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {scalar_t__ is_joining; int self_dpu_desc_index; int self_sta_index; } ;
struct wcn36xx_tx_bd {int dpu_ne; int ub; int ack_policy; int queue_id; void* bd_rate; int dpu_desc_idx; int sta_index; } ;
struct wcn36xx {int dummy; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_qos_hdr {int dummy; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int frame_control; int addr2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct wcn36xx*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wcn36xx_vif* FUNC_1 (struct wcn36xx*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct wcn36xx_tx_bd*,int,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct wcn36xx_tx_bd *VAR_6,
    struct wcn36xx *VAR_7,
    struct wcn36xx_vif **VAR_8,
    struct sk_buff *VAR_9,
    bool VAR_10)
{
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->data;
 struct wcn36xx_vif *VAR_12 =
  FUNC_1(VAR_7, VAR_11->addr2);
 VAR_6->sta_index = VAR_12->self_sta_index;
 VAR_6->dpu_desc_idx = VAR_12->self_dpu_desc_index;
 VAR_6->dpu_ne = 1;


 if (FUNC_4(VAR_11->frame_control))
  VAR_6->bd_rate = (FUNC_0(VAR_7) == VAR_0) ?
   VAR_1 :
   VAR_2;
 else if (FUNC_2(VAR_11->frame_control))
  VAR_6->bd_rate = VAR_1;
 else
  FUNC_7("frame control type unknown\n");





 if (VAR_12->is_joining &&
     FUNC_5(VAR_11->frame_control))
  VAR_10 = 0;

 if (VAR_10) {

  VAR_6->ub = 1;

  VAR_6->ack_policy = 1;
  VAR_6->queue_id = VAR_4;
 } else
  VAR_6->queue_id = VAR_5;
 *VAR_8 = VAR_12;

 FUNC_6(VAR_6,
      FUNC_3(VAR_11->frame_control) ?
      sizeof(struct ieee80211_qos_hdr) :
      sizeof(struct ieee80211_hdr_3addr),
      VAR_9->len, VAR_3);
}

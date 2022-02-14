
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct mt76_txq {scalar_t__ agg_ssn; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct mt76_txq *VAR_0, struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2 = (struct ieee80211_hdr *)VAR_1->data;

 if (!FUNC_1(VAR_2->frame_control) ||
     !FUNC_0(VAR_2->frame_control))
  return;

 VAR_0->agg_ssn = FUNC_2(VAR_2->seq_ctrl) + 0x10;
}

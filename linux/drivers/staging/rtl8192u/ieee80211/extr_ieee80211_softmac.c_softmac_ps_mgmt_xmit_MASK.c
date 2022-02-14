
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rtl_80211_hdr_3addr {void* seq_ctl; } ;
struct ieee80211_device {short softmac_features; int* seq_ctrl; int dev; int (* softmac_hard_start_xmit ) (struct sk_buff*,int ) ;int basic_rate; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,int ,int ) ;} ;


 short VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct sk_buff *VAR_1, struct ieee80211_device *VAR_2)
{
 short VAR_3 = VAR_2->softmac_features & VAR_0;
 struct rtl_80211_hdr_3addr *VAR_4 =
  (struct rtl_80211_hdr_3addr *)VAR_1->data;

 if (VAR_3) {
  VAR_4->seq_ctl = FUNC_0(VAR_2->seq_ctrl[0] << 4);

  if (VAR_2->seq_ctrl[0] == 0xFFF)
   VAR_2->seq_ctrl[0] = 0;
  else
   VAR_2->seq_ctrl[0]++;


  FUNC_1(VAR_2->dev);
  VAR_2->softmac_data_hard_start_xmit(VAR_1, VAR_2->dev, VAR_2->basic_rate);
 } else {
  VAR_4->seq_ctl = FUNC_0(VAR_2->seq_ctrl[0] << 4);

  if (VAR_2->seq_ctrl[0] == 0xFFF)
   VAR_2->seq_ctrl[0] = 0;
  else
   VAR_2->seq_ctrl[0]++;

  VAR_2->softmac_hard_start_xmit(VAR_1, VAR_2->dev);
 }

}

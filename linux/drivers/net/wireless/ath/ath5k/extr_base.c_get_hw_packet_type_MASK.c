
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef enum ath5k_pkt_type { ____Placeholder_ath5k_pkt_type } ath5k_pkt_type ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static enum ath5k_pkt_type FUNC_4(struct sk_buff *VAR_5)
{
 struct ieee80211_hdr *VAR_6;
 enum ath5k_pkt_type VAR_7;
 __le16 VAR_8;

 VAR_6 = (struct ieee80211_hdr *)VAR_5->data;
 VAR_8 = VAR_6->frame_control;

 if (FUNC_1(VAR_8))
  VAR_7 = VAR_1;
 else if (FUNC_2(VAR_8))
  VAR_7 = VAR_3;
 else if (FUNC_0(VAR_8))
  VAR_7 = VAR_0;
 else if (FUNC_3(VAR_8))
  VAR_7 = VAR_4;
 else
  VAR_7 = VAR_2;

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iwl_mvm {int cur_aid; } ;
struct ieee80211_vendor_radiotap {int align; int* oui; int subns; int present; int len; int pad; scalar_t__ data; } ;
struct ieee80211_rx_status {int flag; } ;
typedef int __le16 ;


 int FUNC_0 (int const) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 struct ieee80211_vendor_radiotap* FUNC_4 (struct sk_buff*,int const) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_1,
         struct sk_buff *VAR_2)
{
 struct ieee80211_rx_status *VAR_3 = FUNC_1(VAR_2);
 struct ieee80211_vendor_radiotap *VAR_4;
 const int VAR_5 = sizeof(*VAR_4) + sizeof(__le16);

 if (!VAR_1->cur_aid)
  return;


 FUNC_0((VAR_5 + 2) % 4);

 VAR_4 = FUNC_4(VAR_2, VAR_5 + 2);
 VAR_4->align = 1;

 VAR_4->oui[0] = 0xf6;
 VAR_4->oui[1] = 0x54;
 VAR_4->oui[2] = 0x25;

 VAR_4->subns = 1;
 VAR_4->present = 0x1;
 VAR_4->len = VAR_5 - sizeof(*VAR_4);
 VAR_4->pad = 2;


 FUNC_2(VAR_4->data, &VAR_1->cur_aid, sizeof(VAR_1->cur_aid));

 FUNC_3(VAR_4->data + sizeof(__le16), 0, VAR_4->pad);

 VAR_3->flag |= VAR_0;
}

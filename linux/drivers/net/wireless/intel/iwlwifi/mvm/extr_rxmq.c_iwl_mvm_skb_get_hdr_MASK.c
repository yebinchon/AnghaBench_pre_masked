
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct sk_buff {void* data; } ;
struct ieee80211_vendor_radiotap {scalar_t__ pad; scalar_t__ len; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_radiotap_lsig {int dummy; } ;
struct ieee80211_radiotap_he_mu {int dummy; } ;
struct ieee80211_radiotap_he {int dummy; } ;


 int FUNC_0 (int) ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_2(struct sk_buff *VAR_4)
{
 struct ieee80211_rx_status *VAR_5 = FUNC_1(VAR_4);
 u8 *VAR_6 = VAR_4->data;


 FUNC_0(sizeof(struct ieee80211_radiotap_he) % 4);
 FUNC_0(sizeof(struct ieee80211_radiotap_he_mu) % 4);
 FUNC_0(sizeof(struct ieee80211_radiotap_lsig) % 4);
 FUNC_0(sizeof(struct ieee80211_vendor_radiotap) % 4);

 if (VAR_5->flag & VAR_0)
  VAR_6 += sizeof(struct ieee80211_radiotap_he);
 if (VAR_5->flag & VAR_1)
  VAR_6 += sizeof(struct ieee80211_radiotap_he_mu);
 if (VAR_5->flag & VAR_2)
  VAR_6 += sizeof(struct ieee80211_radiotap_lsig);
 if (VAR_5->flag & VAR_3) {
  struct ieee80211_vendor_radiotap *VAR_7 = (void *)VAR_6;

  VAR_6 += sizeof(*VAR_7) + VAR_7->len + VAR_7->pad;
 }

 return VAR_6;
}

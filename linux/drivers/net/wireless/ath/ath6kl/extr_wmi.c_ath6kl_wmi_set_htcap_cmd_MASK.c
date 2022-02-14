
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_set_htcap_cmd {int band; int ht_enable; int ht20_sgi; int ht40_supported; int ht40_sgi; int intolerant_40mhz; int max_ampdu_len_exp; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath6kl_htcap {int cap_info; int ampdu_factor; int ht_enable; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int,int,int,int,int,int ) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (int) ;

int FUNC_3(struct wmi *VAR_8, u8 VAR_9,
        enum nl80211_band VAR_10,
        struct ath6kl_htcap *VAR_11)
{
 struct sk_buff *VAR_12;
 struct wmi_set_htcap_cmd *VAR_13;

 VAR_12 = FUNC_2(sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = (struct wmi_set_htcap_cmd *) VAR_12->data;






 VAR_13->band = VAR_10;
 VAR_13->ht_enable = !!VAR_11->ht_enable;
 VAR_13->ht20_sgi = !!(VAR_11->cap_info & VAR_3);
 VAR_13->ht40_supported =
  !!(VAR_11->cap_info & VAR_5);
 VAR_13->ht40_sgi = !!(VAR_11->cap_info & VAR_4);
 VAR_13->intolerant_40mhz =
  !!(VAR_11->cap_info & VAR_2);
 VAR_13->max_ampdu_len_exp = VAR_11->ampdu_factor;

 FUNC_0(VAR_0,
     "Set htcap: band:%d ht_enable:%d 40mhz:%d sgi_20mhz:%d sgi_40mhz:%d 40mhz_intolerant:%d ampdu_len_exp:%d\n",
     VAR_13->band, VAR_13->ht_enable, VAR_13->ht40_supported,
     VAR_13->ht20_sgi, VAR_13->ht40_sgi, VAR_13->intolerant_40mhz,
     VAR_13->max_ampdu_len_exp);
 return FUNC_1(VAR_8, VAR_9, VAR_12, VAR_7,
       VAR_6);
}

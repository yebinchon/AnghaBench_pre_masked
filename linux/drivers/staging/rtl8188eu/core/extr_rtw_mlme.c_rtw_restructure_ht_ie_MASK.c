
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct qos_priv {int qos_option; } ;
struct ht_priv {int ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; struct qos_priv qospriv; } ;
struct ieee80211_ht_cap {int ampdu_params_info; int cap_info; } ;
struct ieee80211_ht_addt_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ dot11PrivacyAlgrthm; } ;
struct adapter {TYPE_1__ securitypriv; struct mlme_priv mlmepriv; } ;
typedef enum ht_cap_ampdu_factor { ____Placeholder_ht_cap_ampdu_factor } ht_cap_ampdu_factor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_ht_cap*,int ,int) ;
 unsigned char* FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (struct adapter*,int ,int*) ;
 int FUNC_4 (int *,int ,int,unsigned char*,int*) ;

unsigned int FUNC_5(struct adapter *VAR_14, u8 *VAR_15, u8 *VAR_16, uint VAR_17, uint *VAR_18)
{
 u32 VAR_19, VAR_20;
 enum ht_cap_ampdu_factor VAR_21;
 unsigned char *VAR_22;
 unsigned char VAR_23[] = {0x00, 0x50, 0xf2, 0x02, 0x00, 0x01, 0x00};
 struct mlme_priv *VAR_24 = &VAR_14->mlmepriv;
 struct qos_priv *VAR_25 = &VAR_24->qospriv;
 struct ht_priv *VAR_26 = &VAR_24->htpriv;
 u32 VAR_27, VAR_28;

 VAR_26->ht_option = 0;

 VAR_22 = FUNC_2(VAR_15+12, VAR_11, &VAR_19, VAR_17-12);

 if (VAR_22 && VAR_19 > 0) {
  struct ieee80211_ht_cap VAR_29;

  if (VAR_25->qos_option == 0) {
   VAR_20 = *VAR_18;
   FUNC_4(VAR_16 + VAR_20, VAR_12,
       VAR_13, VAR_23, VAR_18);

   VAR_25->qos_option = 1;
  }

  VAR_20 = *VAR_18;

  FUNC_1(&VAR_29, 0, sizeof(struct ieee80211_ht_cap));

  VAR_29.cap_info = FUNC_0(VAR_7 |
           VAR_5 |
           VAR_6 |
           VAR_8 |
           VAR_4);

  FUNC_3(VAR_14, VAR_1, &VAR_27);
  FUNC_3(VAR_14, VAR_0, &VAR_28);






  FUNC_3(VAR_14, VAR_2, &VAR_21);
  VAR_29.ampdu_params_info = VAR_21 & 0x03;

  if (VAR_14->securitypriv.dot11PrivacyAlgrthm == VAR_9)
   VAR_29.ampdu_params_info |= VAR_3 & (0x07 << 2);
  else
   VAR_29.ampdu_params_info |= VAR_3 & 0x00;

  FUNC_4(VAR_16+VAR_20, VAR_11,
      sizeof(struct ieee80211_ht_cap),
      (unsigned char *)&VAR_29, VAR_18);

  VAR_26->ht_option = 1;

  VAR_22 = FUNC_2(VAR_15+12, VAR_10, &VAR_19, VAR_17-12);
  if (VAR_22 && (VAR_19 == sizeof(struct ieee80211_ht_addt_info))) {
   VAR_20 = *VAR_18;
   FUNC_4(VAR_16+VAR_20, VAR_10, VAR_19, VAR_22+2, VAR_18);
  }
 }
 return VAR_26->ht_option;
}

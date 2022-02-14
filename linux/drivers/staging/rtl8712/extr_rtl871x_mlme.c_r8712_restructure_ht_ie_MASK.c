
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct qos_priv {int qos_option; } ;
struct ht_priv {int ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; struct qos_priv qospriv; } ;
struct ieee80211_ht_cap {int ampdu_params_info; int cap_info; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_ht_cap*,int ,int) ;
 unsigned char* FUNC_2 (int *,int ,scalar_t__*,scalar_t__) ;
 int FUNC_3 (int *,int ,int,unsigned char*,scalar_t__*) ;

unsigned int FUNC_4(struct _adapter *VAR_11, u8 *VAR_12,
         u8 *VAR_13, uint VAR_14, uint *VAR_15)
{
 u32 VAR_16, VAR_17;
 unsigned char *VAR_18;
 struct ieee80211_ht_cap VAR_19;
 unsigned char VAR_20[] = {0x00, 0x50, 0xf2, 0x02, 0x00, 0x01, 0x00};
 struct mlme_priv *VAR_21 = &VAR_11->mlmepriv;
 struct qos_priv *VAR_22 = &VAR_21->qospriv;
 struct ht_priv *VAR_23 = &VAR_21->htpriv;

 VAR_23->ht_option = 0;
 VAR_18 = FUNC_2(VAR_12 + 12, VAR_8, &VAR_16, VAR_14 - 12);
 if (VAR_18 && (VAR_16 > 0)) {
  if (VAR_22->qos_option == 0) {
   VAR_17 = *VAR_15;
   FUNC_3(VAR_13 + VAR_17, VAR_9,
         VAR_10, VAR_20, VAR_15);
   VAR_22->qos_option = 1;
  }
  VAR_17 = *VAR_15;
  FUNC_1(&VAR_19, 0, sizeof(struct ieee80211_ht_cap));
  VAR_19.cap_info = FUNC_0(VAR_6 |
        VAR_4 |
        VAR_5 |
        VAR_7 |
        VAR_3 |
        VAR_2);
  VAR_19.ampdu_params_info = (VAR_1 &
    0x03) | (VAR_0 & 0x00);
  FUNC_3(VAR_13 + VAR_17, VAR_8,
        sizeof(struct ieee80211_ht_cap),
        (unsigned char *)&VAR_19, VAR_15);
  VAR_23->ht_option = 1;
 }
 return VAR_23->ht_option;
}

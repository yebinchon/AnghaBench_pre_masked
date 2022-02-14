
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8187_priv {int rx_conf; int conf_mutex; int work; TYPE_1__* map; int anchored; scalar_t__ is_rtl8187b; struct ieee80211_hw* dev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int CMD; int TX_CONF; int TX_AGC_CTL; int CW_CONF; int RX_CONF; int * MAR; int INT_MASK; } ;


 int FUNC_0 (int *,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;
 int VAR_19 ;
 int FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl8187_priv*,int *) ;
 int FUNC_9 (struct rtl8187_priv*,int *,int) ;
 int FUNC_10 (struct rtl8187_priv*,int *,int) ;
 int FUNC_11 (struct rtl8187_priv*,int *,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_20)
{
 struct rtl8187_priv *VAR_21 = VAR_20->priv;
 u32 VAR_22;
 int VAR_23;

 FUNC_2(&VAR_21->conf_mutex);

 VAR_23 = (!VAR_21->is_rtl8187b) ? FUNC_4(VAR_20) :
         FUNC_6(VAR_20);
 if (VAR_23)
  goto rtl8187_start_exit;

 FUNC_1(&VAR_21->anchored);
 VAR_21->dev = VAR_20;

 if (VAR_21->is_rtl8187b) {
  VAR_22 = VAR_8 |
        VAR_7 |
        VAR_5 |
        VAR_9 |
        VAR_6 |
        (7 << 13 ) |
        (7 << 10 ) |
        VAR_11 |
        VAR_10;
  VAR_21->rx_conf = VAR_22;
  FUNC_10(VAR_21, &VAR_21->map->RX_CONF, VAR_22);

  VAR_22 = FUNC_8(VAR_21, &VAR_21->map->TX_AGC_CTL);
  VAR_22 &= ~VAR_14;
  VAR_22 &= ~VAR_13;
  VAR_22 &= ~VAR_12;
  FUNC_11(VAR_21, &VAR_21->map->TX_AGC_CTL, VAR_22);

  FUNC_10(VAR_21, &VAR_21->map->TX_CONF,
      VAR_17 |
      VAR_16 |
      (VAR_0 << 8 ) |
      (VAR_0 << 0 ) |
      (7 << 21 ));
  VAR_23 = FUNC_5(VAR_20);
  if (VAR_23)
   goto rtl8187_start_exit;
  VAR_23 = FUNC_7(VAR_20);
  if (VAR_23)
   FUNC_12(&VAR_21->anchored);
  goto rtl8187_start_exit;
 }

 FUNC_9(VAR_21, &VAR_21->map->INT_MASK, 0xFFFF);

 FUNC_10(VAR_21, &VAR_21->map->MAR[0], ~0);
 FUNC_10(VAR_21, &VAR_21->map->MAR[1], ~0);

 VAR_23 = FUNC_5(VAR_20);
 if (VAR_23)
  goto rtl8187_start_exit;

 VAR_22 = VAR_10 |
       VAR_11 |
       VAR_6 |
       VAR_8 |
       VAR_7 |
       (7 << 13 ) |
       (7 << 10 ) |
       VAR_5 |
       VAR_9;

 VAR_21->rx_conf = VAR_22;
 FUNC_10(VAR_21, &VAR_21->map->RX_CONF, VAR_22);

 VAR_22 = FUNC_8(VAR_21, &VAR_21->map->CW_CONF);
 VAR_22 &= ~VAR_3;
 VAR_22 |= VAR_4;
 FUNC_11(VAR_21, &VAR_21->map->CW_CONF, VAR_22);

 VAR_22 = FUNC_8(VAR_21, &VAR_21->map->TX_AGC_CTL);
 VAR_22 &= ~VAR_14;
 VAR_22 &= ~VAR_13;
 VAR_22 &= ~VAR_12;
 FUNC_11(VAR_21, &VAR_21->map->TX_AGC_CTL, VAR_22);

 VAR_22 = VAR_15 |
        (7 << 21 ) |
        VAR_18;
 FUNC_10(VAR_21, &VAR_21->map->TX_CONF, VAR_22);

 VAR_22 = FUNC_8(VAR_21, &VAR_21->map->CMD);
 VAR_22 |= VAR_2;
 VAR_22 |= VAR_1;
 FUNC_11(VAR_21, &VAR_21->map->CMD, VAR_22);
 FUNC_0(&VAR_21->work, VAR_19);

rtl8187_start_exit:
 FUNC_3(&VAR_21->conf_mutex);
 return VAR_23;
}

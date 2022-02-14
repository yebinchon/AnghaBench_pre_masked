
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtl8187_priv {int rx_conf; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int RX_CONF; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl8187_priv*,int *,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_7,
         unsigned int VAR_8,
         unsigned int *VAR_9,
         u64 VAR_10)
{
 struct rtl8187_priv *VAR_11 = VAR_7->priv;

 if (VAR_8 & VAR_2)
  VAR_11->rx_conf ^= VAR_5;
 if (VAR_8 & VAR_1)
  VAR_11->rx_conf ^= VAR_4;
 if (*VAR_9 & VAR_3 ||
     *VAR_9 & VAR_0 || VAR_10 > 0)
  VAR_11->rx_conf |= VAR_6;
 else
  VAR_11->rx_conf &= ~VAR_6;

 *VAR_9 = 0;

 if (VAR_11->rx_conf & VAR_5)
  *VAR_9 |= VAR_2;
 if (VAR_11->rx_conf & VAR_4)
  *VAR_9 |= VAR_1;
 if (VAR_11->rx_conf & VAR_6) {
  *VAR_9 |= VAR_3;
  *VAR_9 |= VAR_0;
 }

 FUNC_0(VAR_11, &VAR_11->map->RX_CONF, VAR_11->rx_conf);
}

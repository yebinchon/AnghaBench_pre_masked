
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8180_priv {int lock; TYPE_1__* map; } ;
struct ieee80211_hw {int wiphy; struct rtl8180_priv* priv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int INT_TIMEOUT; int INT_STATUS_SE; } ;


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
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct rtl8180_priv*,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_16, void *VAR_17)
{
 struct ieee80211_hw *VAR_18 = VAR_17;
 struct rtl8180_priv *VAR_19 = VAR_18->priv;
 u32 VAR_20;
 unsigned long VAR_21;
 static int VAR_22;

 FUNC_5(&VAR_19->lock, VAR_21);

 VAR_20 = FUNC_3(VAR_19, &VAR_19->map->INT_STATUS_SE);
 if (FUNC_7(VAR_20 == 0xFFFFFFFF)) {
  FUNC_6(&VAR_19->lock, VAR_21);
  return VAR_14;
 }

 FUNC_4(VAR_19, &VAR_19->map->INT_STATUS_SE, VAR_20);

 if (VAR_20 & VAR_9)
  FUNC_4(VAR_19, &VAR_19->map->INT_TIMEOUT, 0);

 if (VAR_20 & (VAR_4 | VAR_3))
  FUNC_2(VAR_18, 4);

 if (VAR_20 & (VAR_13 | VAR_12))
  FUNC_2(VAR_18, 0);

 if (VAR_20 & (VAR_11 | VAR_10))
  FUNC_2(VAR_18, 1);

 if (VAR_20 & (VAR_6 | VAR_5))
  FUNC_2(VAR_18, 2);

 if (VAR_20 & (VAR_8 | VAR_7))
  FUNC_2(VAR_18, 3);

 if (VAR_20 & (VAR_1 | VAR_0 | VAR_15 | VAR_2))
  FUNC_1(VAR_18);



 if ((VAR_20 & VAR_15) && VAR_22++ > 2)
  if (FUNC_0())
   FUNC_8(VAR_18->wiphy, "No RX DMA Descriptor avail\n");

 FUNC_6(&VAR_19->lock, VAR_21);
 return VAR_14;
}

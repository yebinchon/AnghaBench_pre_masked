
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8180_priv {int rfparam; int anaparam; int csthreshold; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int CONFIG2; int TX_CONF; } ;


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
 int FUNC_0 (struct rtl8180_priv*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct rtl8180_priv*,int *) ;
 int FUNC_3 (struct rtl8180_priv*,int *) ;
 int FUNC_4 (struct rtl8180_priv*,int *,int) ;
 int* VAR_13 ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_14)
{
 struct rtl8180_priv *VAR_15 = VAR_14->priv;
 u32 VAR_16, VAR_17;
 u8 VAR_18;
 int VAR_19 = VAR_15->rfparam & VAR_5;

 VAR_16 = VAR_15->anaparam;
 VAR_16 &= ~(1 << VAR_4);
 VAR_16 &= ~VAR_2;
 VAR_16 &= ~VAR_0;

 if (VAR_19) {
  VAR_16 |= VAR_9 << VAR_3;
  VAR_18 = 0;
 } else {
  VAR_16 |= (VAR_10 << VAR_3);
  VAR_16 |= (VAR_8 << VAR_1);
  VAR_18 = 1 << VAR_12;
 }

 FUNC_0(VAR_15, VAR_16);

 FUNC_6(VAR_14, 0, VAR_13[0]);
 FUNC_6(VAR_14, 1, 0xbb50);
 FUNC_6(VAR_14, 2, 0x80);
 FUNC_6(VAR_14, 3, 0);
 FUNC_6(VAR_14, 4, 0x19340 | VAR_18);
 FUNC_6(VAR_14, 5, 0x1dfb | (VAR_11 - 54) << 15);
 FUNC_6(VAR_14, 4, 0x19348 | VAR_18);

 if (!VAR_19)
  FUNC_6(VAR_14, 4, 0x1938c);

 FUNC_6(VAR_14, 4, 0x19340 | VAR_18);

 FUNC_6(VAR_14, 0, VAR_13[0]);
 FUNC_6(VAR_14, 1, 0xbb50);
 FUNC_6(VAR_14, 2, 0x80);
 FUNC_6(VAR_14, 3, 0);
 FUNC_6(VAR_14, 4, 0x19344 | VAR_18);


 FUNC_6(VAR_14, 6, 0x13ff | (1 << 23));
 FUNC_6(VAR_14, 8, 0);

 if (VAR_19) {
  FUNC_0(VAR_15, VAR_16 |
         (1 << VAR_4));

  VAR_17 = FUNC_2(VAR_15, &VAR_15->map->TX_CONF);
  FUNC_4(VAR_15, &VAR_15->map->TX_CONF,
   VAR_17 | VAR_7);

  FUNC_6(VAR_14, 4, 0x19341);



  FUNC_6(VAR_14, 4, 0x19345);




  FUNC_4(VAR_15, &VAR_15->map->TX_CONF, VAR_17);

  FUNC_0(VAR_15, VAR_16);
 }


 FUNC_6(VAR_14, 4, 0x19341 | VAR_18);


 FUNC_1(VAR_14, 0, 0x98);
 FUNC_1(VAR_14, 3, 0x38);
 FUNC_1(VAR_14, 4, 0xe0);
 FUNC_1(VAR_14, 5, 0x90);
 FUNC_1(VAR_14, 6, 0x1a);
 FUNC_1(VAR_14, 7, 0x64);

 FUNC_5(VAR_14, 1);

 FUNC_1(VAR_14, 0x11, 0x80);

 if (FUNC_3(VAR_15, &VAR_15->map->CONFIG2) &
     VAR_6)
  FUNC_1(VAR_14, 0x12, 0xc7);
 else
  FUNC_1(VAR_14, 0x12, 0x47);

 FUNC_1(VAR_14, 0x13, 0x90 | VAR_15->csthreshold);

 FUNC_1(VAR_14, 0x19, 0x0);
 FUNC_1(VAR_14, 0x1a, 0xa0);
}

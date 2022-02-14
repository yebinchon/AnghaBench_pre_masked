
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_priv {int rf_paths; } ;
struct TYPE_5__ {int width; TYPE_1__* chan; int center_freq1; } ;
struct TYPE_6__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; struct rtl8xxxu_priv* priv; } ;
struct TYPE_4__ {int hw_value; int center_freq; } ;


 int FUNC_0 (int) ;
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
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_6 (struct rtl8xxxu_priv*,scalar_t__,int) ;
 int FUNC_7 (struct rtl8xxxu_priv*,int,int ,int) ;

void FUNC_8(struct ieee80211_hw *VAR_31)
{
 struct rtl8xxxu_priv *VAR_32 = VAR_31->priv;
 u32 VAR_33, VAR_34;
 u8 VAR_35, VAR_36;
 u16 VAR_37;
 bool VAR_38 = 1;
 int VAR_39, VAR_40;
 int VAR_41;

 VAR_37 = FUNC_1(VAR_32, VAR_24);
 VAR_37 &= ~VAR_30;
 VAR_34 = FUNC_2(VAR_32, VAR_20);
 VAR_40 = VAR_31->conf.chandef.chan->hw_value;


 VAR_36 = 0;

 switch (VAR_31->conf.chandef.width) {
 case 130:
  VAR_38 = 0;

 case 131:
  VAR_37 |= VAR_27;
  VAR_36 = 0;

  VAR_33 = FUNC_2(VAR_32, VAR_15);
  VAR_33 &= ~VAR_3;
  FUNC_5(VAR_32, VAR_15, VAR_33);

  VAR_33 = FUNC_2(VAR_32, VAR_16);
  VAR_33 &= ~VAR_3;
  FUNC_5(VAR_32, VAR_16, VAR_33);

  VAR_33 = FUNC_2(VAR_32, VAR_17);
  VAR_33 &= ~(FUNC_0(30) | FUNC_0(31));
  FUNC_5(VAR_32, VAR_17, VAR_33);

  break;
 case 129:
  VAR_37 |= VAR_28;

  if (VAR_31->conf.chandef.center_freq1 >
      VAR_31->conf.chandef.chan->center_freq) {
   VAR_39 = 1;
   VAR_40 += 2;
  } else {
   VAR_39 = 0;
   VAR_40 -= 2;
  }

  VAR_33 = FUNC_2(VAR_32, VAR_15);
  VAR_33 |= VAR_3;
  FUNC_5(VAR_32, VAR_15, VAR_33);

  VAR_33 = FUNC_2(VAR_32, VAR_16);
  VAR_33 |= VAR_3;
  FUNC_5(VAR_32, VAR_16, VAR_33);





  VAR_33 = FUNC_2(VAR_32, VAR_12);
  VAR_33 &= ~VAR_0;
  if (!VAR_39)
   VAR_33 |= VAR_0;
  FUNC_5(VAR_32, VAR_12, VAR_33);

  VAR_33 = FUNC_2(VAR_32, VAR_18);
  VAR_33 &= ~VAR_11;
  if (VAR_39)
   VAR_33 |= VAR_10;
  else
   VAR_33 |= VAR_9;
  FUNC_5(VAR_32, VAR_18, VAR_33);

  VAR_33 = FUNC_2(VAR_32, VAR_14);
  VAR_33 &= ~(VAR_1 | VAR_2);
  if (VAR_39)
   VAR_33 |= VAR_2;
  else
   VAR_33 |= VAR_1;
  FUNC_5(VAR_32, VAR_14, VAR_33);
  break;
 case 128:
  VAR_37 |= VAR_29;
  break;
 default:
  break;
 }

 for (VAR_41 = VAR_26; VAR_41 < VAR_32->rf_paths; VAR_41++) {
  VAR_33 = FUNC_3(VAR_32, VAR_41, VAR_25);
  VAR_33 &= ~VAR_8;
  VAR_33 |= VAR_40;
  FUNC_7(VAR_32, VAR_41, VAR_25, VAR_33);
 }

 FUNC_4(VAR_32, VAR_24, VAR_37);
 FUNC_6(VAR_32, VAR_13, VAR_36);

 if (VAR_38)
  VAR_35 = 0x0e;
 else
  VAR_35 = 0x0a;

 FUNC_6(VAR_32, VAR_21 + 1, VAR_35);
 FUNC_6(VAR_32, VAR_22 + 1, VAR_35);

 FUNC_4(VAR_32, VAR_19, 0x0808);
 FUNC_4(VAR_32, VAR_23, 0x0a0a);

 for (VAR_41 = VAR_26; VAR_41 < VAR_32->rf_paths; VAR_41++) {
  VAR_33 = FUNC_3(VAR_32, VAR_41, VAR_25);
  VAR_33 &= ~VAR_7;
  switch(VAR_31->conf.chandef.width) {
  case 128:
   VAR_33 |= VAR_6;
   break;
  case 129:
   VAR_33 |= VAR_5;
   break;
  default:
   VAR_33 |= VAR_4;
   break;
  }
  FUNC_7(VAR_32, VAR_41, VAR_25, VAR_33);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_channel {int band; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct rt2x00_dev*,struct ieee80211_channel*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,scalar_t__,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct rt2x00_dev*,char*,int) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct rt2x00_dev *VAR_18,
      struct ieee80211_channel *VAR_19,
      int VAR_20)
{
 u32 VAR_21, VAR_22;
 u16 VAR_23;
 u32 VAR_24, VAR_25;
 u8 VAR_26, VAR_27;
 enum nl80211_band VAR_28 = VAR_19->band;
 int VAR_29;


 VAR_29 = FUNC_2(VAR_18, VAR_28);

 if (VAR_29)
  FUNC_7(VAR_18, "ignoring EEPROM HT40 power delta: %d\n",
       VAR_29);
 for (VAR_27 = 0; VAR_27 < 5; VAR_27++) {
  VAR_23 = FUNC_1(VAR_18,
             VAR_1,
             VAR_27 * 2);

  VAR_24 = VAR_23;

  VAR_26 = VAR_23 & 0x3f;
  if (VAR_26 == 32)
   VAR_26++;

  VAR_25 = VAR_26;

  VAR_26 = (VAR_23 & 0x3f00) >> 8;
  if (VAR_26 == 32)
   VAR_26++;

  VAR_25 |= (VAR_26 << 8);

  VAR_23 = FUNC_1(VAR_18,
             VAR_1,
             (VAR_27 * 2) + 1);

  VAR_26 = VAR_23 & 0x3f;
  if (VAR_26 == 32)
   VAR_26++;

  VAR_25 |= (VAR_26 << 16);

  VAR_26 = (VAR_23 & 0x3f00) >> 8;
  if (VAR_26 == 32)
   VAR_26++;

  VAR_25 |= (VAR_26 << 24);
  VAR_24 |= (VAR_23 << 16);

  if (!FUNC_8(VAR_0, &VAR_18->flags)) {

   if (VAR_24 != 0xffffffff)
    FUNC_4(VAR_18,
            VAR_2 + (VAR_27 * 4),
            VAR_24);
  } else {

   if (VAR_25 != 0xffffffff)
    FUNC_4(VAR_18,
            VAR_2 + (VAR_27 * 4),
            VAR_25);
  }
 }
 VAR_22 = 0;
 VAR_21 = FUNC_3(VAR_18, VAR_3);
 VAR_26 = FUNC_5(VAR_21, VAR_4);
 FUNC_6(&VAR_22, VAR_12, VAR_26);


 VAR_21 = FUNC_3(VAR_18, VAR_5);
 VAR_26 = FUNC_5(VAR_21, VAR_6);
 FUNC_6(&VAR_22, VAR_13, VAR_26);
 FUNC_4(VAR_18, VAR_11, VAR_22);


 VAR_22 = 0;
 VAR_21 = FUNC_3(VAR_18, VAR_7);
 VAR_26 = FUNC_5(VAR_21, VAR_8);
 FUNC_6(&VAR_22, VAR_15, VAR_26);
 FUNC_4(VAR_18, VAR_14, VAR_22);


 VAR_22 = 0;
 VAR_21 = FUNC_3(VAR_18, VAR_9);
 VAR_26 = FUNC_5(VAR_21, VAR_10);
 FUNC_6(&VAR_22, VAR_17, VAR_26);
 FUNC_4(VAR_18, VAR_16, VAR_22);

 FUNC_0(VAR_18, VAR_19, VAR_20);


}

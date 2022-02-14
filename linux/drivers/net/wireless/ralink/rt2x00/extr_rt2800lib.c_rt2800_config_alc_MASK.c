
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_channel {int max_power; int center_freq; } ;


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
 int FUNC_0 (struct rt2x00_dev*,int) ;
 int FUNC_1 (struct rt2x00_dev*,int,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;
 int FUNC_5 (struct rt2x00_dev*,int,int) ;
 int FUNC_6 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (struct rt2x00_dev*,char*) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct rt2x00_dev *VAR_12,
         struct ieee80211_channel *VAR_13,
         int VAR_14) {
 u16 VAR_15, VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 u32 VAR_20;
 u8 VAR_21;
 int VAR_22;


 VAR_14 *= 2;
 if (VAR_14 > 0x2f)
  VAR_14 = 0x2f;

 VAR_17 = VAR_13->max_power * 2;
 if (VAR_17 > 0x2f)
  VAR_17 = 0x2f;

 VAR_20 = FUNC_3(VAR_12, VAR_5);
 FUNC_9(&VAR_20, VAR_6, VAR_14);
 FUNC_9(&VAR_20, VAR_7, VAR_14);
 FUNC_9(&VAR_20, VAR_8, VAR_17);
 FUNC_9(&VAR_20, VAR_9, VAR_17);

 VAR_15 = FUNC_2(VAR_12, VAR_0);
 if (FUNC_7(VAR_15, VAR_1)) {

  VAR_16 = FUNC_2(VAR_12,
        VAR_2);
  FUNC_9(&VAR_20, VAR_6, VAR_16);
  FUNC_9(&VAR_20, VAR_7, VAR_16);
 }
 FUNC_4(VAR_12, VAR_5, VAR_20);

 VAR_20 = FUNC_3(VAR_12, VAR_10);
 FUNC_9(&VAR_20, VAR_11, 0);
 FUNC_4(VAR_12, VAR_10, VAR_20);


 VAR_18 = FUNC_3(VAR_12, VAR_4);

 FUNC_4(VAR_12, VAR_4, 0);

 for (VAR_22 = 0; VAR_22 < 10000; VAR_22++) {
  VAR_19 = FUNC_3(VAR_12, VAR_3);
  if (VAR_19 & 0x3)
   FUNC_11(50, 200);
  else
   break;
 }

 if (VAR_22 == 10000)
  FUNC_10(VAR_12, "Wait MAC Status to MAX !!!\n");

 if (VAR_13->center_freq > 2457) {
  VAR_21 = FUNC_0(VAR_12, 30);
  VAR_21 = 0x40;
  FUNC_1(VAR_12, 30, VAR_21);
  FUNC_5(VAR_12, 39, 0);
  if (FUNC_8(VAR_12))
   FUNC_5(VAR_12, 42, 0xfb);
  else
   FUNC_5(VAR_12, 42, 0x7b);
 } else {
  VAR_21 = FUNC_0(VAR_12, 30);
  VAR_21 = 0x1f;
  FUNC_1(VAR_12, 30, VAR_21);
  FUNC_5(VAR_12, 39, 0x80);
  if (FUNC_8(VAR_12))
   FUNC_5(VAR_12, 42, 0xdb);
  else
   FUNC_5(VAR_12, 42, 0x5b);
 }
 FUNC_4(VAR_12, VAR_4, VAR_18);

 FUNC_6(VAR_12);
}

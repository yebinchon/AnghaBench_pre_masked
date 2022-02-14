
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_5(struct ieee80211_hw *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24, VAR_25;
 u8 VAR_26 = 0x00;


 FUNC_3(VAR_21, VAR_3, VAR_1, 0x00000000);

 FUNC_3(VAR_21, 0x948, VAR_1, 0x00000000);

 FUNC_4(VAR_21, VAR_2, VAR_8, VAR_4, 0x800a0);
 FUNC_4(VAR_21, VAR_2, VAR_5, VAR_4, 0x20000);
 FUNC_4(VAR_21, VAR_2, VAR_6, VAR_4, 0x0003f);
 FUNC_4(VAR_21, VAR_2, VAR_7, VAR_4, 0xc7f87);




 FUNC_3(VAR_21, VAR_16, VAR_1, 0x01007c00);
 FUNC_3(VAR_21, VAR_11, VAR_1, 0x01004800);

 FUNC_3(VAR_21, VAR_19, VAR_1, 0x18008c1c);
 FUNC_3(VAR_21, VAR_14, VAR_1, 0x38008c1c);
 FUNC_3(VAR_21, VAR_20, VAR_1, 0x38008c1c);
 FUNC_3(VAR_21, VAR_15, VAR_1, 0x38008c1c);

 FUNC_3(VAR_21, VAR_17, VAR_1, 0x821403ea);
 FUNC_3(VAR_21, VAR_12, VAR_1, 0x28160000);
 FUNC_3(VAR_21, VAR_18, VAR_1, 0x82110000);
 FUNC_3(VAR_21, VAR_13, VAR_1, 0x28110000);

 FUNC_3(VAR_21, VAR_10, VAR_1, 0x00462911);

 FUNC_3(VAR_21, VAR_3, VAR_1, 0x80800000);


 FUNC_3(VAR_21, VAR_9, VAR_1, 0xf9000000);
 FUNC_3(VAR_21, VAR_9, VAR_1, 0xf8000000);

 FUNC_1(VAR_0);


 FUNC_3(VAR_21, VAR_3, VAR_1, 0x00000000);


 VAR_22 = FUNC_2(VAR_21, 0xeac, VAR_1);
 VAR_23 = FUNC_2(VAR_21, 0xe94, VAR_1);
 VAR_24 = FUNC_2(VAR_21, 0xe9c, VAR_1);

 if (!(VAR_22 & FUNC_0(28)) &&
     (((VAR_23 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_24 & 0x03FF0000) >> 16) != 0x42))
  VAR_26 |= 0x01;
 else
  return VAR_26;


 VAR_25 = (VAR_24 & 0x03FF0000) >> 16;
 if ((VAR_25 & 0x200) > 0)
  VAR_25 = 0x400 - VAR_25;

 if (!(VAR_22 & FUNC_0(28)) &&
     (((VAR_23 & 0x03FF0000) >> 16) < 0x110) &&
     (((VAR_23 & 0x03FF0000) >> 16) > 0xf0) &&
     (VAR_25 < 0xf))
  VAR_26 |= 0x01;
 else
  return VAR_26;

 return VAR_26;
}

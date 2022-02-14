
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int ,int) ;

__attribute__((used)) static u8 FUNC_5(struct ieee80211_hw *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 u8 VAR_17 = 0x00;


 FUNC_3(VAR_13, VAR_3, VAR_1, 0x00000000);
 FUNC_4(VAR_13, VAR_2, 0xdf, VAR_4, 0x180);
 FUNC_3(VAR_13, VAR_3, VAR_1, 0x80800000);

 FUNC_3(VAR_13, 0xe28, VAR_1, 0x00000000);
 FUNC_3(VAR_13, 0xe28, VAR_1, 0x80800000);

 FUNC_3(VAR_13, VAR_11, VAR_1, 0x38008c1c);
 FUNC_3(VAR_13, VAR_8, VAR_1, 0x38008c1c);
 FUNC_3(VAR_13, VAR_12, VAR_1, 0x18008c1c);
 FUNC_3(VAR_13, VAR_9, VAR_1, 0x38008c1c);

 FUNC_3(VAR_13, VAR_10, VAR_1, 0x821403e2);
 FUNC_3(VAR_13, VAR_7, VAR_1, 0x68160000);


 FUNC_3(VAR_13, VAR_6, VAR_1, 0x00462911);


 FUNC_3(VAR_13, VAR_5, VAR_1, 0xfa000000);
 FUNC_3(VAR_13, VAR_5, VAR_1, 0xf8000000);

 FUNC_1(VAR_0);

 VAR_14 = FUNC_2(VAR_13, 0xeac, VAR_1);
 VAR_15 = FUNC_2(VAR_13, 0xeb4, VAR_1);
 VAR_16 = FUNC_2(VAR_13, 0xebc, VAR_1);

 if (!(VAR_14 & FUNC_0(31)) &&
     (((VAR_15 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_16 & 0x03FF0000) >> 16) != 0x42))
  VAR_17 |= 0x01;
 else
  return VAR_17;

 return VAR_17;
}

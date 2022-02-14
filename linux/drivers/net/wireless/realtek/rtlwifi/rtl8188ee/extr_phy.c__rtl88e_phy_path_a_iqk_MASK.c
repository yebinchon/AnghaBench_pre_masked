
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct ieee80211_hw *VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 u8 VAR_8 = 0x00;

 FUNC_3(VAR_2, 0xe30, VAR_1, 0x10008c1c);
 FUNC_3(VAR_2, 0xe34, VAR_1, 0x30008c1c);
 FUNC_3(VAR_2, 0xe38, VAR_1, 0x8214032a);
 FUNC_3(VAR_2, 0xe3c, VAR_1, 0x28160000);

 FUNC_3(VAR_2, 0xe4c, VAR_1, 0x00462911);
 FUNC_3(VAR_2, 0xe48, VAR_1, 0xf9000000);
 FUNC_3(VAR_2, 0xe48, VAR_1, 0xf8000000);

 FUNC_1(VAR_0);

 VAR_4 = FUNC_2(VAR_2, 0xeac, VAR_1);
 VAR_5 = FUNC_2(VAR_2, 0xe94, VAR_1);
 VAR_6 = FUNC_2(VAR_2, 0xe9c, VAR_1);
 VAR_7 = FUNC_2(VAR_2, 0xea4, VAR_1);

 if (!(VAR_4 & FUNC_0(28)) &&
     (((VAR_5 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_6 & 0x03FF0000) >> 16) != 0x42))
  VAR_8 |= 0x01;
 return VAR_8;
}

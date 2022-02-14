
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

__attribute__((used)) static u8 FUNC_4(struct ieee80211_hw *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u8 VAR_8 = 0x00;

 FUNC_3(VAR_2, 0xe60, VAR_1, 0x00000002);
 FUNC_3(VAR_2, 0xe60, VAR_1, 0x00000000);
 FUNC_1(VAR_0);
 VAR_3 = FUNC_2(VAR_2, 0xeac, VAR_1);
 VAR_4 = FUNC_2(VAR_2, 0xeb4, VAR_1);
 VAR_5 = FUNC_2(VAR_2, 0xebc, VAR_1);
 VAR_6 = FUNC_2(VAR_2, 0xec4, VAR_1);
 VAR_7 = FUNC_2(VAR_2, 0xecc, VAR_1);

 if (!(VAR_3 & FUNC_0(31)) &&
     (((VAR_4 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_5 & 0x03FF0000) >> 16) != 0x42))
  VAR_8 |= 0x01;
 else
  return VAR_8;
 if (!(VAR_3 & FUNC_0(30)) &&
     (((VAR_6 & 0x03FF0000) >> 16) != 0x132) &&
     (((VAR_7 & 0x03FF0000) >> 16) != 0x36))
  VAR_8 |= 0x02;
 return VAR_8;
}

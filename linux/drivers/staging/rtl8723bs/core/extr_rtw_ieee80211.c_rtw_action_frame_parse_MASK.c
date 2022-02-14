
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ieee80211_hdr_3addr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ) ;

int FUNC_1(const u8 *VAR_5, u32 VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 const u8 *VAR_9 = VAR_5 + sizeof(struct ieee80211_hdr_3addr);
 u16 VAR_10;
 u8 VAR_11;
 u8 VAR_12 = VAR_0;

 VAR_10 = FUNC_0(((struct ieee80211_hdr_3addr *)VAR_5)->frame_control);

 if ((VAR_10 & (VAR_1|VAR_2))
  != (VAR_3|VAR_4)
 ) {
  return 0;
 }

 VAR_11 = VAR_9[0];

 switch (VAR_11) {
 case 128:
  break;
 default:
  VAR_12 = VAR_9[1];
 }

 if (VAR_7)
  *VAR_7 = VAR_11;
 if (VAR_8)
  *VAR_8 = VAR_12;

 return 1;
}

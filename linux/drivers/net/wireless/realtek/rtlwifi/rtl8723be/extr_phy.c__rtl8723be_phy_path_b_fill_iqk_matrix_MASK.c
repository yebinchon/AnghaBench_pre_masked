
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
 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5,
        bool VAR_6,
        long VAR_7[][8],
        u8 VAR_8,
        bool VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 long VAR_14, VAR_15;

 if (VAR_8 == 0xFF) {
  return;
 } else if (VAR_6) {
  VAR_10 = (FUNC_1(VAR_5, VAR_3,
       VAR_0) >> 22) & 0x3FF;
  VAR_11 = VAR_7[VAR_8][4];
  if ((VAR_11 & 0x00000200) != 0)
   VAR_11 = VAR_11 | 0xFFFFFC00;
  VAR_12 = (VAR_11 * VAR_10) >> 8;
  FUNC_2(VAR_5, VAR_3, 0x3FF, VAR_12);
  FUNC_2(VAR_5, VAR_1, FUNC_0(27),
         ((VAR_11 * VAR_10 >> 7) & 0x1));
  VAR_14 = VAR_7[VAR_8][5];
  if ((VAR_14 & 0x00000200) != 0)
   VAR_14 = VAR_14 | 0xFFFFFC00;
  VAR_15 = (VAR_14 * VAR_10) >> 8;
  FUNC_2(VAR_5, VAR_4, 0xF0000000,
         ((VAR_15 & 0x3C0) >> 6));
  FUNC_2(VAR_5, VAR_3, 0x003F0000,
         (VAR_15 & 0x3F));
  FUNC_2(VAR_5, VAR_1, FUNC_0(25),
         ((VAR_14 * VAR_10 >> 7) & 0x1));
  if (VAR_9)
   return;
  VAR_13 = VAR_7[VAR_8][6];
  FUNC_2(VAR_5, VAR_2, 0x3FF, VAR_13);
  VAR_13 = VAR_7[VAR_8][7] & 0x3F;
  FUNC_2(VAR_5, VAR_2, 0xFC00, VAR_13);
  VAR_13 = (VAR_7[VAR_8][7] >> 6) & 0xF;

 }
}

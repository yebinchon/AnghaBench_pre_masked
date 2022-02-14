
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
 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_7,
      bool VAR_8, long VAR_9[][8],
      u8 VAR_10,
      bool VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15;
 long VAR_16, VAR_17;

 if (VAR_10 == 0xFF) {
  return;
 } else if (VAR_8) {
  VAR_12 = (FUNC_1(VAR_7, VAR_3,
       VAR_0) >> 22) & 0x3FF;
  VAR_13 = VAR_9[VAR_10][4];
  if ((VAR_13 & 0x00000200) != 0)
   VAR_13 = VAR_13 | 0xFFFFFC00;
  VAR_14 = (VAR_13 * VAR_12) >> 8;
  FUNC_2(VAR_7, VAR_3, 0x3FF, VAR_14);
  FUNC_2(VAR_7, VAR_2, FUNC_0(27),
         ((VAR_13 * VAR_12 >> 7) & 0x1));
  VAR_16 = VAR_9[VAR_10][5];
  if ((VAR_16 & 0x00000200) != 0)
   VAR_16 = VAR_16 | 0xFFFFFC00;
  VAR_17 = (VAR_16 * VAR_12) >> 8;
  FUNC_2(VAR_7, VAR_6, 0xF0000000,
         ((VAR_17 & 0x3C0) >> 6));
  FUNC_2(VAR_7, VAR_5, 0x003F0000,
         (VAR_17 & 0x3F));
  FUNC_2(VAR_7, VAR_2, FUNC_0(25),
         ((VAR_16 * VAR_12 >> 7) & 0x1));

  if (VAR_11)
   return;

  VAR_15 = VAR_9[VAR_10][6];
  FUNC_2(VAR_7, VAR_4, 0x3FF, VAR_15);

  VAR_15 = VAR_9[VAR_10][7] & 0x3F;
  FUNC_2(VAR_7, VAR_4, 0xFC00, VAR_15);

  VAR_15 = (VAR_9[VAR_10][7] >> 6) & 0xF;
  FUNC_2(VAR_7, VAR_1, 0xF0000000, VAR_15);
 }
}

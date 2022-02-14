
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_6, u8 VAR_7,
         u8 VAR_8, long VAR_9,
         long VAR_10)
{
 long VAR_11 = 0, VAR_12, VAR_13 = 0, VAR_14;

 if (VAR_7 >= 43)
  VAR_7 = 43 - 1;

 VAR_12 = (VAR_5[VAR_7] & 0xFFC00000) >> 22;

 if (VAR_9 != 0) {
  if ((VAR_9 & 0x00000200) != 0)
   VAR_9 = VAR_9 | 0xFFFFFC00;
  VAR_11 = ((VAR_9 * VAR_12) >> 8) & 0x000003FF;

  if ((VAR_10 & 0x00000200) != 0)
   VAR_10 = VAR_10 | 0xFFFFFC00;
  VAR_13 = ((VAR_10 * VAR_12) >> 8) & 0x000003FF;

  switch (VAR_8) {
  case 128:
   VAR_14 = (VAR_12 << 22) |
    ((VAR_13 & 0x3F) << 16) | VAR_11;
   FUNC_1(VAR_6, VAR_3, VAR_0,
          VAR_14);
   VAR_14 = (VAR_13 & 0x000003C0) >> 6;
   FUNC_1(VAR_6, VAR_4, VAR_1, VAR_14);
   VAR_14 = ((VAR_9 * VAR_12) >> 7) & 0x01;
   FUNC_1(VAR_6, VAR_2, FUNC_0(24),
          VAR_14);
   break;
  default:
   break;
  }
 } else {
  switch (VAR_8) {
  case 128:
   FUNC_1(VAR_6, VAR_3, VAR_0,
          VAR_5[VAR_7]);
   FUNC_1(VAR_6, VAR_4, VAR_1, 0x00);
   FUNC_1(VAR_6, VAR_2, FUNC_0(24), 0x00);
   break;
  default:
   break;
  }
 }
}

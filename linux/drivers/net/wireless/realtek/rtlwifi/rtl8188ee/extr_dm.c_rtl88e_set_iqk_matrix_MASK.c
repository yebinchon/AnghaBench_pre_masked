
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_8,
      u8 VAR_9, u8 VAR_10,
      long VAR_11, long VAR_12)
{
 long VAR_13 = 0, VAR_14, VAR_15 = 0, VAR_16;

 VAR_14 = (VAR_7[VAR_9] & 0xFFC00000)>>22;

 if (VAR_11 != 0) {
  if ((VAR_11 & 0x00000200) != 0)
   VAR_11 = VAR_11 | 0xFFFFFC00;
  VAR_13 = ((VAR_11 * VAR_14)>>8)&0x000003FF;

  if ((VAR_12 & 0x00000200) != 0)
   VAR_12 = VAR_12 | 0xFFFFFC00;
  VAR_15 = ((VAR_12 * VAR_14)>>8)&0x000003FF;

  switch (VAR_10) {
  case 129:
   VAR_16 = (VAR_14 << 22)|((VAR_15 & 0x3F)<<16) | VAR_13;
   FUNC_1(VAR_8, VAR_3,
          VAR_0, VAR_16);
   VAR_16 = (VAR_15 & 0x000003C0) >> 6;
   FUNC_1(VAR_8, VAR_5, VAR_1,
          VAR_16);
   VAR_16 = ((VAR_11 * VAR_14) >> 7) & 0x01;
   FUNC_1(VAR_8, VAR_2, FUNC_0(24),
          VAR_16);
   break;
  case 128:
   VAR_16 = (VAR_14 << 22)|((VAR_15 & 0x3F)<<16) | VAR_13;
   FUNC_1(VAR_8, VAR_4, VAR_0,
          VAR_16);
   VAR_16 = (VAR_15 & 0x000003C0) >> 6;
   FUNC_1(VAR_8, VAR_6, VAR_1, VAR_16);
   VAR_16 = ((VAR_11 * VAR_14) >> 7) & 0x01;
   FUNC_1(VAR_8, VAR_2, FUNC_0(28),
          VAR_16);
   break;
  default:
   break;
  }
 } else {
  switch (VAR_10) {
  case 129:
   FUNC_1(VAR_8, VAR_3,
          VAR_0, VAR_7[VAR_9]);
   FUNC_1(VAR_8, VAR_5,
          VAR_1, 0x00);
   FUNC_1(VAR_8, VAR_2,
          FUNC_0(24), 0x00);
   break;
  case 128:
   FUNC_1(VAR_8, VAR_4,
          VAR_0, VAR_7[VAR_9]);
   FUNC_1(VAR_8, VAR_6,
          VAR_1, 0x00);
   FUNC_1(VAR_8, VAR_2,
          FUNC_0(28), 0x00);
   break;
  default:
   break;
  }
 }
}

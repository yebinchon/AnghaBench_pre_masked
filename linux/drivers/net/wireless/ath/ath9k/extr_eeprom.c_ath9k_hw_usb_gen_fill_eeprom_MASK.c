
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ath_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,scalar_t__*,scalar_t__*,int) ;

void FUNC_1(struct ath_hw *VAR_2, u16 *VAR_3,
      int VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8;
 u32 VAR_9[8];
 u32 VAR_10[8];

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_9[VAR_6] = VAR_0 +
   ((VAR_8 + VAR_4) << VAR_1);
  VAR_6++;
  if (VAR_6 == 8) {
   FUNC_0(VAR_2, VAR_9, VAR_10, VAR_6);

   for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    *VAR_3 = VAR_10[VAR_7];
    VAR_3++;
   }
   VAR_6 = 0;
  }
 }

 if (VAR_6 != 0) {
  FUNC_0(VAR_2, VAR_9, VAR_10, VAR_6);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   *VAR_3 = VAR_10[VAR_7];
   VAR_3++;
  }
 }
}

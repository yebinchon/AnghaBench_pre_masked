
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath9k_channel*) ;
 scalar_t__ FUNC_7 (struct ath9k_channel*) ;
 scalar_t__ FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int ,int) ;
 scalar_t__* FUNC_10 (struct ath_hw*,int ) ;
 int FUNC_11 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_12(struct ath_hw *VAR_9,
         struct ath9k_channel *VAR_10)
{
 static const u32 VAR_11[4] = { 2420, 2440, 2464, 2480 };
 int VAR_12, VAR_13 = 0, VAR_14;
 int VAR_15;
 int VAR_16, VAR_17, VAR_18;
 u8 *VAR_19 = FUNC_10(VAR_9, FUNC_6(VAR_10));






 if (FUNC_3(VAR_9) || FUNC_1(VAR_9) || FUNC_0(VAR_9) ||
     FUNC_4(VAR_9) || FUNC_5(VAR_9)) {
  if (VAR_19[0] == 0)
   return;
  VAR_17 = 5;
  if (FUNC_7(VAR_10)) {
   VAR_16 = 19;
   if (FUNC_8(VAR_9, VAR_8,
        VAR_7) == 0)
    VAR_18 = VAR_10->channel + 10;
   else
    VAR_18 = VAR_10->channel - 10;
  } else {
   VAR_16 = 10;
   VAR_18 = VAR_10->channel;
  }
 } else {
  VAR_16 = FUNC_2(VAR_9) ? 5 : 10;
  VAR_17 = 4;
  VAR_18 = VAR_10->channel;
 }

 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  if (FUNC_2(VAR_9) && (VAR_15 == 0 || VAR_15 == 3))
   continue;

  VAR_13 = 0;
  if (FUNC_3(VAR_9) || FUNC_1(VAR_9) || FUNC_0(VAR_9) ||
      FUNC_4(VAR_9) || FUNC_5(VAR_9))
   VAR_12 = FUNC_11(VAR_19[VAR_15],
        FUNC_6(VAR_10));
  else
   VAR_12 = VAR_11[VAR_15];

  VAR_12 -= VAR_18;
  if (VAR_12 < 0) {
   VAR_13 = 1;
   VAR_12 = -VAR_12;
  }
  if (VAR_12 < VAR_16) {
   VAR_14 = (int)((VAR_12 << 19) / 11);

   if (VAR_13 == 1)
    VAR_14 = -VAR_14;

   VAR_14 = VAR_14 & 0xfffff;

   FUNC_9(VAR_9, VAR_0,
          VAR_1, 0x7);
   FUNC_9(VAR_9, VAR_2,
          VAR_5, 0x7f);
   FUNC_9(VAR_9, VAR_2,
          VAR_4,
          0x2);
   FUNC_9(VAR_9, VAR_2,
          VAR_6,
          0x1);
   FUNC_9(VAR_9, VAR_2,
          VAR_3,
          VAR_14);

   return;
  }
 }

 FUNC_9(VAR_9, VAR_0,
        VAR_1, 0x5);
 FUNC_9(VAR_9, VAR_2,
        VAR_6, 0x0);
 FUNC_9(VAR_9, VAR_2,
        VAR_3, 0x0);
}

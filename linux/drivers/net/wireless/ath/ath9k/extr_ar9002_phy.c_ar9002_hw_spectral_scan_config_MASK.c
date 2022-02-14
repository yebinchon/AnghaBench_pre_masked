
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath_spec_scan {int count; int period; int fft_period; scalar_t__ endless; scalar_t__ short_repeat; int enabled; } ;
struct ath_hw {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_11,
        struct ath_spec_scan *VAR_12)
{
 u32 VAR_13;
 u8 VAR_14;

 if (!VAR_12->enabled) {
  FUNC_1(VAR_11, VAR_2,
       VAR_5);
  return;
 }
 FUNC_3(VAR_11, VAR_0, VAR_1);
 FUNC_3(VAR_11, VAR_2, VAR_5);

 if (FUNC_0(VAR_11))
  VAR_13 = VAR_9;
 else
  VAR_13 = VAR_10;

 if (VAR_12->short_repeat)
  FUNC_3(VAR_11, VAR_2, VAR_13);
 else
  FUNC_1(VAR_11, VAR_2, VAR_13);





 VAR_14 = VAR_12->count;
 if (VAR_12->endless) {
  if (FUNC_0(VAR_11))
   VAR_14 = 0x80;
  else
   VAR_14 = 0;
 } else if (VAR_14 & 0x80)
  VAR_14 = 0x7f;
 else if (!VAR_14)
  VAR_14 = 1;

 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_11, VAR_2,
         VAR_3, VAR_14);
 } else {
  FUNC_2(VAR_11, VAR_2,
         VAR_4, VAR_14);
  FUNC_3(VAR_11, VAR_2,
       VAR_8);
 }

 FUNC_2(VAR_11, VAR_2,
        VAR_7, VAR_12->period);
 FUNC_2(VAR_11, VAR_2,
        VAR_6, VAR_12->fft_period);

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 scalar_t__ FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ath_hw*,int ,int ) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ath_hw *VAR_14, u8 VAR_15, bool VAR_16)
{
 int VAR_17[8] = {0}, VAR_18 = 0, VAR_19;
 int VAR_20, VAR_21, VAR_22 = 0;

 if (FUNC_6(VAR_14) || FUNC_5(VAR_14))
  VAR_22 = 8;
 else if (FUNC_7(VAR_14))
  VAR_22 = 11;




 FUNC_10(VAR_14, FUNC_1(VAR_15),
        VAR_11, 0x1);
 FUNC_10(VAR_14, FUNC_1(VAR_15),
        VAR_10, 0x0);

 if (FUNC_3(VAR_14) || FUNC_4(VAR_14)) {
  if (VAR_16)
   FUNC_10(VAR_14, FUNC_1(VAR_15),
          VAR_8, 0x0);
  else
   FUNC_10(VAR_14, FUNC_1(VAR_15),
          VAR_9, 0x0);
 }




 FUNC_10(VAR_14, FUNC_2(VAR_15),
        VAR_13, 0x1);
 FUNC_10(VAR_14, FUNC_2(VAR_15),
        VAR_12, 0x0);




 FUNC_10(VAR_14, FUNC_0(VAR_15),
        VAR_7, 0x1);
 FUNC_10(VAR_14, FUNC_0(VAR_15),
        VAR_5, 0x1);
 FUNC_10(VAR_14, FUNC_0(VAR_15),
        VAR_4, 0x1);

 if (FUNC_4(VAR_14))
  FUNC_10(VAR_14, FUNC_0(VAR_15),
         VAR_0, 0x0);

 if (VAR_16)
  FUNC_10(VAR_14, FUNC_0(VAR_15),
         VAR_1,
         VAR_22);
 else
  FUNC_10(VAR_14, FUNC_0(VAR_15),
         VAR_3,
         VAR_22);

 for (VAR_21 = 6; VAR_21 > 0; VAR_21--) {
  VAR_17[VAR_21] = FUNC_8(VAR_21 - 1);
  VAR_19 = VAR_18 + VAR_17[VAR_21];

  if (VAR_16)
   FUNC_10(VAR_14, FUNC_0(VAR_15),
          VAR_0,
          VAR_19);
  else
   FUNC_10(VAR_14, FUNC_0(VAR_15),
          VAR_2,
          VAR_19);
  FUNC_11(100);
  VAR_20 = FUNC_9(VAR_14, FUNC_0(VAR_15),
      VAR_6);
  VAR_17[VAR_21] = (VAR_20) ? 0 : 1;
  VAR_18 += (VAR_17[VAR_21] << (VAR_21 - 1));
 }

 if (VAR_16)
  FUNC_10(VAR_14, FUNC_0(VAR_15),
         VAR_0, VAR_18);
 else
  FUNC_10(VAR_14, FUNC_0(VAR_15),
         VAR_2, VAR_18);




 FUNC_10(VAR_14, FUNC_1(VAR_15),
        VAR_11, 0);



 FUNC_10(VAR_14, FUNC_2(VAR_15),
        VAR_13, 0);



 FUNC_10(VAR_14, FUNC_0(VAR_15),
        VAR_4, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int,int ) ;
 int FUNC_11 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_12 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_13 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_14 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = 0;
 u32 VAR_15;

 VAR_11 = FUNC_10(VAR_10, 0, 2, 15, 0);
 VAR_12 = FUNC_10(VAR_10, 1, 2,
    VAR_8, 0);
 VAR_13 = FUNC_1(VAR_10,
  2, VAR_7, 0);

 if ((VAR_14 >= 10) && FUNC_0(VAR_12) &&
     FUNC_0(VAR_13)) {
  FUNC_6(VAR_10, VAR_2,
           0x0, 0x0);

  VAR_10->btc_set_rf_reg(VAR_10, VAR_3, 0x1, 0xfffff,
       0x0);
  FUNC_5(VAR_10, VAR_9, 0, 0,
     0x8);
  FUNC_4(VAR_10, VAR_9, 6);
  FUNC_3(VAR_10, VAR_9, 2);

  FUNC_2(VAR_10, VAR_9, 0);

  FUNC_6(VAR_10, VAR_2,
           0x0, 0x0);
  FUNC_7(VAR_10, VAR_9, 1, 23);


  VAR_10->btc_get(VAR_10, VAR_0, &VAR_15);
  if (VAR_15 == VAR_6) {
   FUNC_8(VAR_10, 1, 0,
         0, 0);
   FUNC_9(VAR_10, 1, 0,
         1, 0x6);
  } else {
   FUNC_8(VAR_10, 0, 0,
         0, 0);
   FUNC_9(VAR_10, 1, 0,
         1, 0x6);
  }
  return;
 }

 VAR_10->btc_set_rf_reg(VAR_10, VAR_3, 0x1, 0xfffff, 0x0);
 FUNC_5(VAR_10, VAR_9, 0, 0, 0x8);

 FUNC_4(VAR_10, VAR_9, 6);

 if (FUNC_0(VAR_13))
  FUNC_3(VAR_10, VAR_9, 2);
 else
  FUNC_3(VAR_10, VAR_9, 0);

 if (FUNC_0(VAR_12) && FUNC_0(VAR_13)) {
  FUNC_2(VAR_10, VAR_9, 7);
  FUNC_6(VAR_10, VAR_2,
           0x0, 0x0);
 } else {
  FUNC_2(VAR_10, VAR_9, 13);
  FUNC_6(VAR_10, VAR_1, 0x50,
           0x4);
 }

 if ((VAR_13 == VAR_4) ||
     (VAR_13 == VAR_5)) {
  FUNC_7(VAR_10, VAR_9, 1, 23);
 } else {
  FUNC_7(VAR_10, VAR_9, 1, 23);
 }


 VAR_10->btc_get(VAR_10, VAR_0, &VAR_15);
 if (VAR_15 == VAR_6) {
  if ((VAR_11 == VAR_4) ||
      (VAR_11 == VAR_5)) {
   FUNC_8(VAR_10, 1, 0,
         0, 0);
   FUNC_9(VAR_10, 1, 0,
         0, 0x18);
  } else {
   FUNC_8(VAR_10, 1, 0,
         0, 0);
   FUNC_9(VAR_10, 0, 0,
         0, 0x18);
  }
 } else {
  if ((VAR_11 == VAR_4) ||
      (VAR_11 == VAR_5)) {
   FUNC_8(VAR_10, 0, 0,
         0, 0);
   FUNC_9(VAR_10, 1, 0,
         0, 0x18);
  } else {
   FUNC_8(VAR_10, 0, 0,
         0, 0);
   FUNC_9(VAR_10, 0, 0,
         0, 0x18);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,int*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct btc_coexist*,int,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int ,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int,int,int,int ) ;
 int FUNC_12 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_13 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_14 (struct btc_coexist*,int ,int*) ;

__attribute__((used)) static void FUNC_15(struct btc_coexist *VAR_12)
{
 u32 VAR_13;
 u8 VAR_14, VAR_15, VAR_16;
 u8 VAR_17 = 0;

 VAR_14 = FUNC_11(VAR_12, 0, 2, 15, 0);
 VAR_15 = FUNC_11(VAR_12, 1, 2,
    VAR_10, 0);
 VAR_16 = FUNC_2(VAR_12,
    3, VAR_9, 37);

 VAR_12->btc_set_rf_reg(VAR_12, VAR_4, 0x1, 0xfffff, 0x0);

 FUNC_6(VAR_12, VAR_11, 0, 1, 0x5);
 FUNC_5(VAR_12, VAR_11, 6);

 VAR_12->btc_get(VAR_12, VAR_1, &VAR_13);
 if (VAR_13 == VAR_8) {
  if (FUNC_0(VAR_16))
   FUNC_4(VAR_12, VAR_11, 2);
  else if (FUNC_1(VAR_16))
   FUNC_4(VAR_12, VAR_11, 2);
  else
   FUNC_4(VAR_12, VAR_11, 0);
 } else {

  if (FUNC_0(VAR_16)) {
   VAR_12->btc_get(VAR_12, VAR_0,
        &VAR_17);
   if (VAR_17 < 10)
    FUNC_4(VAR_12,
       VAR_11, 4);
   else
    FUNC_4(VAR_12,
       VAR_11, 2);
  } else if (FUNC_1(VAR_16)) {
   FUNC_4(VAR_12, VAR_11, 2);
  } else {
   FUNC_4(VAR_12, VAR_11, 0);
  }
 }

 if (VAR_13 == VAR_8) {
  FUNC_3(VAR_12, VAR_11, 7);
  FUNC_7(VAR_12, VAR_3,
           0x0, 0x0);
 } else {
  FUNC_3(VAR_12, VAR_11, 14);
  FUNC_7(VAR_12, VAR_2, 0x50,
           0x4);
 }

 if ((VAR_16 == VAR_5) ||
     (VAR_16 == VAR_6)) {
  FUNC_8(VAR_12, VAR_11, 1, 23);
 } else {
  FUNC_8(VAR_12, VAR_11, 1, 23);
 }


 if (VAR_13 == VAR_7) {
  if ((VAR_14 == VAR_5) ||
      (VAR_14 == VAR_6)) {
   FUNC_9(VAR_12, 1, 1,
         0, 0);
   FUNC_10(VAR_12, 1, 0,
         0, 0x18);
  } else {
   FUNC_9(VAR_12, 1, 1,
         0, 0);
   FUNC_10(VAR_12, 0, 0,
         0, 0x18);
  }
 } else {
  if ((VAR_14 == VAR_5) ||
      (VAR_14 == VAR_6)) {
   FUNC_9(VAR_12, 0, 1,
         0, 0);
   FUNC_10(VAR_12, 1, 0,
         0, 0x18);
  } else {
   FUNC_9(VAR_12, 0, 1,
         0, 0);
   FUNC_10(VAR_12, 0, 0,
         0, 0x18);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 scalar_t__ FUNC_10 (struct btc_coexist*,int,int,int,int ) ;
 int FUNC_11 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_12 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 VAR_11 = FUNC_10(VAR_10, 0, 2, 15, 0);
 VAR_12 = FUNC_10(VAR_10, 1, 2,
    VAR_8, 0);
 VAR_13 = FUNC_1(VAR_10,
    2, VAR_7, 0);

 VAR_10->btc_set_rf_reg(VAR_10, VAR_3, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_10, VAR_9, 0, 0, 0x8);

 FUNC_4(VAR_10, VAR_9, 6);

 if (FUNC_0(VAR_13))
  FUNC_3(VAR_10, VAR_9, 1);
 else
  FUNC_3(VAR_10, VAR_9, 0);

 if (FUNC_0(VAR_12) && FUNC_0(VAR_13)) {
  FUNC_2(VAR_10, VAR_9, 10);
  FUNC_6(VAR_10, VAR_2,
           0x0, 0x0);
 } else {
  FUNC_2(VAR_10, VAR_9, 13);
  FUNC_6(VAR_10, VAR_1, 0x50,
           0x4);
 }

 if ((VAR_13 == VAR_4) ||
     (VAR_13 == VAR_5))
  FUNC_7(VAR_10, VAR_9, 1, 26);
 else
  FUNC_7(VAR_10, VAR_9, 1, 26);


 VAR_10->btc_get(VAR_10, VAR_0, &VAR_14);
 if (VAR_14 == VAR_6) {
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

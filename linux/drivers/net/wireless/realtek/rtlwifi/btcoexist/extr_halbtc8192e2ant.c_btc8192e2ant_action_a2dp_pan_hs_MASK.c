
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct btc_coexist*,int,int,int) ;
 int FUNC_1 (struct btc_coexist*,int ,int) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_5 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int) ;
 scalar_t__ FUNC_9 (struct btc_coexist*,int ,int,int,int ) ;
 int FUNC_10 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_11(struct btc_coexist *VAR_9)
{
 u8 VAR_10, VAR_11 = VAR_1;
 u32 VAR_12;

 VAR_10 = FUNC_9(VAR_9, 0, 2, 15, 0);
 VAR_11 = FUNC_0(VAR_9, 3, 34, 42);

 FUNC_7(VAR_9, VAR_8, 1);
 FUNC_4(VAR_9, VAR_8, 0, 0, 0x8);

 FUNC_3(VAR_9, VAR_8, 6);
 FUNC_1(VAR_9, VAR_8, 2);

 if ((VAR_11 == VAR_2) ||
     (VAR_11 == VAR_5)) {
  FUNC_8(VAR_9, 0, 1, 2);
  FUNC_2(VAR_9, VAR_8, 0);
 } else if ((VAR_11 == VAR_3) ||
     (VAR_11 == VAR_6)) {
  FUNC_8(VAR_9, 0, 0, 2);
  FUNC_2(VAR_9, VAR_8, 2);
 } else if ((VAR_11 == VAR_1) ||
     (VAR_11 == VAR_4)) {
  FUNC_8(VAR_9, 0, 0, 2);
  FUNC_2(VAR_9, VAR_8, 4);
 }


 VAR_9->btc_get(VAR_9, VAR_0, &VAR_12);
 if (VAR_7 == VAR_12) {
  if ((VAR_10 == VAR_1) ||
      (VAR_10 == VAR_4)) {
   FUNC_5(VAR_9, 1, 0,
         0, 0);
   FUNC_6(VAR_9, 1, 0,
         1, 0x6);
  } else {
   FUNC_5(VAR_9, 1, 0,
         0, 0);
   FUNC_6(VAR_9, 0, 0,
         1, 0x6);
  }
 } else {
  if ((VAR_10 == VAR_1) ||
      (VAR_10 == VAR_4)) {
   FUNC_5(VAR_9, 0, 0,
         0, 0);
   FUNC_6(VAR_9, 1, 0,
         1, 0x6);
  } else {
   FUNC_5(VAR_9, 0, 0,
         0, 0);
   FUNC_6(VAR_9, 0, 0,
         1, 0x6);
  }
 }
}

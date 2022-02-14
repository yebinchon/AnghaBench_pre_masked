
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,int ,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int,int,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int) ;
 int FUNC_6 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 scalar_t__ FUNC_8 (struct btc_coexist*,int ,int,int,int ) ;
 int FUNC_9 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_10(struct btc_coexist *VAR_7)
{
 u8 VAR_8, VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_8(VAR_7, 0, 2, 15, 0);
 VAR_9 = FUNC_1(VAR_7,
    2, VAR_5, 0);

 FUNC_4(VAR_7, VAR_6, 6);

 if (FUNC_0(VAR_9))
  FUNC_3(VAR_7, VAR_6, 1);
 else
  FUNC_3(VAR_7, VAR_6, 0);

 VAR_7->btc_get(VAR_7, VAR_0, &VAR_10);

 if (VAR_10 == VAR_4) {

  FUNC_2(VAR_7, VAR_6, 0x55ff55ff,
     0x5a5f5a5f, 0xffff, 0x3);
 } else {

  FUNC_2(VAR_7, VAR_6, 0x55ff55ff,
     0x5a5f5a5f, 0xffff, 0x3);
 }

 if (VAR_10 == VAR_3) {
  FUNC_4(VAR_7, VAR_6, 3);

  if ((VAR_9 == VAR_1) ||
      (VAR_9 == VAR_2)) {
   FUNC_5(VAR_7, VAR_6,
          1, 10);
  } else {
   FUNC_5(VAR_7, VAR_6, 1, 14);
  }


  if ((VAR_8 == VAR_1) ||
      (VAR_8 == VAR_2)) {
   FUNC_6(VAR_7, 1, 1,
         0, 0);
   FUNC_7(VAR_7, 1, 0,
         0, 0x18);
  } else {
   FUNC_6(VAR_7, 1, 1,
         0, 0);
   FUNC_7(VAR_7, 0, 0,
         0, 0x18);
  }
 } else {
  FUNC_4(VAR_7, VAR_6, 6);

  if ((VAR_9 == VAR_1) ||
      (VAR_9 == VAR_2)) {
   FUNC_5(VAR_7, VAR_6, 1, 10);
  } else {
   FUNC_5(VAR_7, VAR_6, 1, 14);
  }


  if ((VAR_8 == VAR_1) ||
      (VAR_8 == VAR_2)) {
   FUNC_6(VAR_7, 0, 1,
         0, 0);
   FUNC_7(VAR_7, 1, 0,
         0, 0x18);
  } else {
   FUNC_6(VAR_7, 0, 1,
         0, 0);
   FUNC_7(VAR_7, 0, 0,
         0, 0x18);
  }
 }
}

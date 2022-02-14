
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btc_bt_link_info {scalar_t__ sco_only; } ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;struct btc_bt_link_info bt_link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int ) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int) ;
 scalar_t__ FUNC_10 (struct btc_coexist*,int ,int,int,int ) ;
 int FUNC_11 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_12 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_13(struct btc_coexist *VAR_8)
{
 struct btc_bt_link_info *VAR_9 = &VAR_8->bt_link_info;
 u8 VAR_10, VAR_11;
 u32 VAR_12;

 VAR_10 = FUNC_10(VAR_8, 0, 2, 15, 0);
 VAR_11 = FUNC_1(VAR_8, 2, 35, 0);

 VAR_8->btc_set_rf_reg(VAR_8, VAR_2, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_8, VAR_7, 0, 0, 0x8);
 FUNC_4(VAR_8, VAR_7, 4);

 if (FUNC_0(VAR_11))
  FUNC_3(VAR_8, VAR_7, 1);
 else
  FUNC_3(VAR_8, VAR_7, 0);

 VAR_8->btc_get(VAR_8, VAR_0, &VAR_12);

 if (VAR_12 == VAR_6) {

  FUNC_2(VAR_8, VAR_7, 2);
 } else {

  if (VAR_12 == VAR_5) {
   FUNC_2(VAR_8,
         VAR_7, 8);
  } else {
   if (VAR_9->sco_only)
    FUNC_2(
     VAR_8, VAR_7, 17);
   else
    FUNC_2(
     VAR_8, VAR_7, 12);
  }
 }

 FUNC_6(VAR_8, VAR_1, 0x0, 0x0);

 FUNC_7(VAR_8, VAR_7, 0, 0);


 if (VAR_12 == VAR_5) {
  if ((VAR_10 == VAR_3) ||
      (VAR_10 == VAR_4)) {
   FUNC_8(VAR_8, 1, 1,
         0, 0);
   FUNC_9(VAR_8, 1, 0,
         1, 0x18);
  } else {
   FUNC_8(VAR_8, 1, 1,
         0, 0);
   FUNC_9(VAR_8, 0, 0,
         1, 0x18);
  }
 } else {
  if ((VAR_10 == VAR_3) ||
      (VAR_10 == VAR_4)) {
   FUNC_8(VAR_8, 0, 1,
         0, 0);
   FUNC_9(VAR_8, 1, 0,
         1, 0x18);
  } else {
   FUNC_8(VAR_8, 0, 1,
         0, 0);
   FUNC_9(VAR_8, 0, 0,
         1, 0x18);
  }
 }
}

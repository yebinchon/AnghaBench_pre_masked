
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_write_4byte ) (struct btc_coexist*,int,int) ;int (* btc_write_2byte ) (struct btc_coexist*,int,int) ;int (* btc_write_1byte ) (struct btc_coexist*,int,int) ;int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;
struct TYPE_2__ {int switch_thres_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct btc_coexist*,int,int,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_11 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_12 (struct btc_coexist*,int ,scalar_t__*) ;
 int FUNC_13 (struct btc_coexist*,int,int) ;
 int FUNC_14 (struct btc_coexist*,int,int) ;
 int FUNC_15 (struct btc_coexist*,int,int) ;
 int FUNC_16 (struct btc_coexist*,int,int) ;

__attribute__((used)) static void FUNC_17(struct btc_coexist *VAR_10)
{
 u8 VAR_11, VAR_12, VAR_13;
 u32 VAR_14;
 u8 VAR_15 = 0;
 u8 VAR_16 = VAR_7 -
   VAR_9->switch_thres_offset;

 VAR_11 = FUNC_10(VAR_10, 0, 2, 15, 0);
 VAR_12 = FUNC_10(VAR_10, 1, 2,
       VAR_16, 0);
 VAR_16 = VAR_6 -
    VAR_9->switch_thres_offset;
 VAR_13 = FUNC_2(VAR_10, 3, VAR_16, 37);

 VAR_10->btc_set_rf_reg(VAR_10, VAR_3, 0x1, 0xfffff, 0x0);

 FUNC_6(VAR_10, VAR_8, 0, 1, 0x5);
 FUNC_5(VAR_10, VAR_8, 6);

 VAR_10->btc_get(VAR_10, VAR_0, &VAR_14);

 if (VAR_14 == VAR_5) {
  if (FUNC_0(VAR_13))
   FUNC_4(VAR_10, VAR_8, 2);
  else if (FUNC_1(VAR_13))
   FUNC_4(VAR_10, VAR_8, 2);
  else
   FUNC_4(VAR_10, VAR_8, 0);
 } else {

  if (FUNC_0(VAR_13)) {

   if (VAR_15 < 10)
    FUNC_4(VAR_10,
       VAR_8, 4);
   else
    FUNC_4(VAR_10,
       VAR_8, 2);
  } else if (FUNC_1(VAR_13)) {
   FUNC_4(VAR_10, VAR_8, 2);
  } else {
   FUNC_4(VAR_10, VAR_8, 0);
  }
 }

 if (FUNC_0(VAR_12) && FUNC_0(VAR_13)) {
  FUNC_3(VAR_10, VAR_8, 7);
  FUNC_7(VAR_10, VAR_2,
           0x0, 0x0);
 } else {
  FUNC_3(VAR_10, VAR_8, 14);
  FUNC_7(VAR_10, VAR_1, 0x50,
           0x4);
 }

 if (FUNC_0(VAR_13)) {
  if (VAR_15 < 10)
   FUNC_9(VAR_10, 1,
         0, 1);
  else
   FUNC_9(VAR_10, 1,
         0, 3);
 } else {
  FUNC_5(VAR_10, VAR_8, 18);
  VAR_10->btc_write_1byte(VAR_10, 0x456, 0x38);
  VAR_10->btc_write_2byte(VAR_10, 0x42a, 0x0808);
  VAR_10->btc_write_4byte(VAR_10, 0x430, 0x0);
  VAR_10->btc_write_4byte(VAR_10, 0x434, 0x01010000);

  if (VAR_15 < 10)
   FUNC_9(VAR_10, 1,
         1, 1);
  else
   FUNC_9(VAR_10, 1,
         1, 3);
 }


 if (VAR_4 == VAR_14) {
  FUNC_8(VAR_10, 1, 1,
       0, 0);
 } else {
  FUNC_8(VAR_10, 0, 1,
       0, 0);
 }
}

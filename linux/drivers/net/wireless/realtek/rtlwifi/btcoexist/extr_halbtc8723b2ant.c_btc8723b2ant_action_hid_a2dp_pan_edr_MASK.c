
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;
struct TYPE_2__ {scalar_t__ switch_thres_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,scalar_t__,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int) ;
 scalar_t__ FUNC_9 (struct btc_coexist*,int,int,scalar_t__,int ) ;
 TYPE_1__* VAR_10 ;
 int FUNC_10 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_12(struct btc_coexist *VAR_11)
{
 u8 VAR_12, VAR_13, VAR_14;
 u32 VAR_15;
 u8 VAR_16 = VAR_8 -
   VAR_10->switch_thres_offset;

 VAR_12 = FUNC_9(VAR_11, 0, 2, 15, 0);
 VAR_13 = FUNC_9(VAR_11, 1, 2,
       VAR_16, 0);
 VAR_16 = VAR_7 -
   VAR_10->switch_thres_offset;
 VAR_14 = FUNC_1(VAR_11, 2, VAR_16, 0);

 VAR_11->btc_set_rf_reg(VAR_11, VAR_3, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_11, VAR_9, 0, 0, 0x8);
 FUNC_4(VAR_11, VAR_9, 6);

 if (FUNC_0(VAR_14))
  FUNC_3(VAR_11, VAR_9, 2);
 else
  FUNC_3(VAR_11, VAR_9, 0);

 if (FUNC_0(VAR_13) && FUNC_0(VAR_14)) {
  FUNC_2(VAR_11, VAR_9, 7);
  FUNC_6(VAR_11, VAR_2,
           0x0, 0x0);
 } else {
  FUNC_2(VAR_11, VAR_9, 14);
  FUNC_6(VAR_11, VAR_1, 0x50,
           0x4);
 }

 VAR_11->btc_get(VAR_11, VAR_0, &VAR_15);


 if ((VAR_14 == VAR_4) ||
     (VAR_14 == VAR_5)) {
  if (VAR_6 == VAR_15)
   FUNC_8(VAR_11, 1,
         1, 2);
  else
   FUNC_8(VAR_11, 1,
         0, 3);
 } else {
  FUNC_8(VAR_11, 1, 1, 3);
 }


 if (VAR_6 == VAR_15) {
  FUNC_7(VAR_11, 1, 1,
       0, 0);
 } else {
  FUNC_7(VAR_11, 0, 1,
       0, 0);
 }
}

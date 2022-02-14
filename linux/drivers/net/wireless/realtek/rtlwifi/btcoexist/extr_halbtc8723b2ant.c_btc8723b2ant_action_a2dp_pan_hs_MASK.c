
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct btc_coexist {int (* btc_get ) (struct btc_coexist*,int ,scalar_t__*) ;int (* btc_set_rf_reg ) (struct btc_coexist*,int ,int,int,int) ;} ;
struct TYPE_2__ {int switch_thres_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct btc_coexist*,int,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int) ;
 int FUNC_9 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_10 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_12(struct btc_coexist *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u8 VAR_14 = VAR_6 -
   VAR_8->switch_thres_offset;

 VAR_10 = FUNC_9(VAR_9, 0, 2, 15, 0);
 VAR_11 = FUNC_9(VAR_9, 1, 2,
       VAR_14, 0);
 VAR_14 = VAR_5 -
   VAR_8->switch_thres_offset;
 VAR_12 = FUNC_1(VAR_9, 2, VAR_14, 0);

 VAR_9->btc_set_rf_reg(VAR_9, VAR_3, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_9, VAR_7, 0, 0, 0x8);
 FUNC_4(VAR_9, VAR_7, 6);

 if (FUNC_0(VAR_12))
  FUNC_3(VAR_9, VAR_7, 2);
 else
  FUNC_3(VAR_9, VAR_7, 0);

 if (FUNC_0(VAR_11) && FUNC_0(VAR_12)) {
  FUNC_2(VAR_9, VAR_7, 7);
  FUNC_6(VAR_9, VAR_2,
           0x0, 0x0);
 } else {
  FUNC_2(VAR_9, VAR_7, 13);
  FUNC_6(VAR_9, VAR_1, 0x50,
           0x4);
 }

 FUNC_8(VAR_9, 0, 1, 2);


 VAR_9->btc_get(VAR_9, VAR_0, &VAR_13);
 if (VAR_4 == VAR_13) {
  FUNC_7(VAR_9, 1, 0,
       0, 0);
 } else {
  FUNC_7(VAR_9, 0, 0,
       0, 0);
 }
}

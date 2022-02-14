
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
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct btc_coexist*,int,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int,int,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_9 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_10 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_11(struct btc_coexist *VAR_7)
{
 u8 VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 u8 VAR_12 = VAR_4 -
   VAR_6->switch_thres_offset;

 VAR_8 = FUNC_8(VAR_7, 0, 2, 15, 0);
 VAR_9 = FUNC_8(VAR_7, 1, 2,
       VAR_12, 0);
 VAR_12 = VAR_3 -
   VAR_6->switch_thres_offset;
 VAR_10 = FUNC_1(VAR_7, 2, VAR_12, 0);

 VAR_7->btc_set_rf_reg(VAR_7, VAR_1, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_7, VAR_5, 0, 0, 0x8);
 FUNC_4(VAR_7, VAR_5, 6);

 if (FUNC_0(VAR_10))
  FUNC_3(VAR_7, VAR_5, 2);
 else
  FUNC_3(VAR_7, VAR_5, 0);

 FUNC_2(VAR_7, VAR_5, 7);
 FUNC_6(VAR_7, VAR_5, 0, 1);

 VAR_7->btc_get(VAR_7, VAR_0, &VAR_11);
 if (VAR_2 == VAR_11) {
  FUNC_7(VAR_7, 1, 0,
       0, 0);
 } else {
  FUNC_7(VAR_7, 0, 0,
       0, 0);
 }
}


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct btc_coexist*,int,scalar_t__,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int) ;
 int FUNC_3 (struct btc_coexist*,int ,int) ;
 int FUNC_4 (struct btc_coexist*,int ,int) ;
 int FUNC_5 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_6 (struct btc_coexist*,int ,int,int) ;
 int FUNC_7 (struct btc_coexist*,int ,int,int) ;
 int FUNC_8 (struct btc_coexist*,int,int,int,int) ;
 scalar_t__ FUNC_9 (struct btc_coexist*,int ,int,int,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_10 (struct btc_coexist*,int ,int,int,int) ;
 int FUNC_11 (struct btc_coexist*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_12(struct btc_coexist *VAR_10)
{
 u8 VAR_11, VAR_12;
 u32 VAR_13;
 u8 VAR_14 = VAR_7 -
   VAR_9->switch_thres_offset;

 VAR_11 = FUNC_9(VAR_10, 0, 2, 15, 0);
 VAR_12 = FUNC_1(VAR_10, 2, VAR_14, 0);

 VAR_10->btc_set_rf_reg(VAR_10, VAR_2, 0x1, 0xfffff, 0x0);

 FUNC_5(VAR_10, VAR_8, 0, 0, 0x8);
 FUNC_4(VAR_10, VAR_8, 6);

 if (FUNC_0(VAR_12))
  FUNC_3(VAR_10, VAR_8, 2);
 else
  FUNC_3(VAR_10, VAR_8, 0);

 VAR_10->btc_get(VAR_10, VAR_0, &VAR_13);

 if (VAR_13 == VAR_6)

  FUNC_2(VAR_10, VAR_8, 7);
 else

  FUNC_2(VAR_10, VAR_8, 9);

 FUNC_6(VAR_10, VAR_1, 0x0, 0x0);

 if ((VAR_12 == VAR_3) ||
     (VAR_12 == VAR_4))
  FUNC_7(VAR_10, VAR_8, 1, 9);
 else
  FUNC_7(VAR_10, VAR_8, 1, 13);


 if (VAR_13 == VAR_5)
  FUNC_8(VAR_10, 1, 1, 0, 0);
 else
  FUNC_8(VAR_10, 0, 1, 0, 0);
}

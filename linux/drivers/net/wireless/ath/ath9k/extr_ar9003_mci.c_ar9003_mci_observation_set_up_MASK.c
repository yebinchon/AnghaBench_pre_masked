
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_hw_mci {int config; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct ath_hw*,int ,int ,int) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 int FUNC_3 (struct ath_hw*,int,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_31)
{
 struct ath9k_hw_mci *VAR_32 = &VAR_31->btcoex_hw.mci;

 if (VAR_32->config & VAR_29) {
  FUNC_3(VAR_31, 3, ((void*)0),
       VAR_16);
  FUNC_3(VAR_31, 2, ((void*)0),
       VAR_15);
  FUNC_3(VAR_31, 1, ((void*)0),
       VAR_14);
  FUNC_3(VAR_31, 0, ((void*)0),
       VAR_13);
 } else if (VAR_32->config & VAR_30) {
  FUNC_3(VAR_31, 3, ((void*)0),
       VAR_19);
  FUNC_3(VAR_31, 2, ((void*)0),
       VAR_18);
  FUNC_3(VAR_31, 1, ((void*)0),
       VAR_12);
  FUNC_3(VAR_31, 0, ((void*)0),
       VAR_11);
  FUNC_3(VAR_31, 5, ((void*)0),
       VAR_17);
 } else if (VAR_32->config & VAR_27) {
  FUNC_3(VAR_31, 3, ((void*)0),
       VAR_12);
  FUNC_3(VAR_31, 2, ((void*)0),
       VAR_11);
  FUNC_3(VAR_31, 1, ((void*)0),
       VAR_14);
  FUNC_3(VAR_31, 0, ((void*)0),
       VAR_13);
 } else
  return;

 FUNC_1(VAR_31, VAR_9, VAR_10);

 FUNC_0(VAR_31, VAR_24, VAR_6, 1);
 FUNC_0(VAR_31, VAR_24, VAR_8, 0);
 FUNC_1(VAR_31, VAR_7, VAR_28);

 FUNC_0(VAR_31, VAR_0, VAR_1, 0);
 FUNC_0(VAR_31, VAR_0, VAR_2, 1);
 FUNC_2(VAR_31, VAR_23, 0x4b);
 FUNC_0(VAR_31, VAR_5, VAR_3, 0x03);
 FUNC_0(VAR_31, VAR_5, VAR_4, 0x01);
 FUNC_0(VAR_31, VAR_20, VAR_21, 0x02);
 FUNC_0(VAR_31, VAR_20, VAR_22, 0x03);
 FUNC_0(VAR_31, VAR_26,
        VAR_25, 0x07);
}

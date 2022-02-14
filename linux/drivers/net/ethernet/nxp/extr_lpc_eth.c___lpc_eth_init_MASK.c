
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netdata_local {int net_base; void* last_tx_idx; scalar_t__ num_used_tx_buffs; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (struct netdata_local*) ;
 int FUNC_14 (struct netdata_local*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int *) ;
 void* FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int,int ) ;

__attribute__((used)) static void FUNC_20(struct netdata_local *VAR_13)
{
 u32 VAR_14;


 VAR_14 = FUNC_17(FUNC_3(VAR_13->net_base));
 VAR_14 &= ~VAR_3 | VAR_4;
 FUNC_19(VAR_14, FUNC_3(VAR_13->net_base));
 VAR_14 = FUNC_17(FUNC_6(VAR_13->net_base));
 VAR_14 &= ~VAR_6;
 FUNC_19(VAR_14, FUNC_6(VAR_13->net_base));


 FUNC_19(VAR_5, FUNC_6(VAR_13->net_base));
 FUNC_19((VAR_8 | VAR_7),
        FUNC_7(VAR_13->net_base));
 FUNC_19(VAR_0, FUNC_8(VAR_13->net_base));


 FUNC_19((FUNC_1(0xF) |
  FUNC_0(0x37)),
        FUNC_2(VAR_13->net_base));
 FUNC_19(FUNC_12(0x12), FUNC_5(VAR_13->net_base));

 if (FUNC_16(&VAR_13->pdev->dev) == VAR_12)
  FUNC_19(VAR_1,
         FUNC_3(VAR_13->net_base));
 else {
  FUNC_19((VAR_1 | VAR_2),
         FUNC_3(VAR_13->net_base));
  FUNC_19(VAR_11, FUNC_10(VAR_13->net_base));
 }

 FUNC_13(VAR_13);


 FUNC_14(VAR_13);


 FUNC_19((VAR_10 | VAR_9),
        FUNC_9(VAR_13->net_base));


 VAR_13->num_used_tx_buffs = 0;
 VAR_13->last_tx_idx =
  FUNC_17(FUNC_11(VAR_13->net_base));


 FUNC_19(0xFFFF, FUNC_4(VAR_13->net_base));
 FUNC_18();
 FUNC_15(VAR_13->net_base);


 VAR_14 = FUNC_17(FUNC_3(VAR_13->net_base));
 VAR_14 |= VAR_3 | VAR_4;
 FUNC_19(VAR_14, FUNC_3(VAR_13->net_base));
 VAR_14 = FUNC_17(FUNC_6(VAR_13->net_base));
 VAR_14 |= VAR_6;
 FUNC_19(VAR_14, FUNC_6(VAR_13->net_base));
}

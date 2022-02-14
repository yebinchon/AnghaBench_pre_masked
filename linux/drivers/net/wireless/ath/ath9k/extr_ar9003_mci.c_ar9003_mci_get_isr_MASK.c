
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath9k_hw_mci {int rx_msg_intr; int raw_intr; void* cont_status; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
struct ath_common {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;

void FUNC_4(struct ath_hw *VAR_6, enum ath9k_int *VAR_7)
{
 struct ath_common *VAR_8 = FUNC_2(VAR_6);
 struct ath9k_hw_mci *VAR_9 = &VAR_6->btcoex_hw.mci;
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_0(VAR_6, VAR_3);
 VAR_10 = FUNC_0(VAR_6, VAR_1);

 if ((VAR_10 == 0xdeadbeef) || (VAR_11 == 0xdeadbeef)) {
  FUNC_3(VAR_8, VAR_5,
   "MCI gets 0xdeadbeef during int processing\n");
 } else {
  VAR_9->rx_msg_intr |= VAR_11;
  VAR_9->raw_intr |= VAR_10;
  *VAR_7 |= VAR_4;

  if (VAR_11 & VAR_2)
   VAR_9->cont_status = FUNC_0(VAR_6, VAR_0);

  FUNC_1(VAR_6, VAR_3, VAR_11);
  FUNC_1(VAR_6, VAR_1, VAR_10);
 }
}

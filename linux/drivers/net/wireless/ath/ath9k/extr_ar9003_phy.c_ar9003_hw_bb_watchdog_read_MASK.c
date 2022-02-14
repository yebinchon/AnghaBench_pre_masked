
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int bb_watchdog_last_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

void FUNC_2(struct ath_hw *VAR_2)
{




 VAR_2->bb_watchdog_last_status = FUNC_0(VAR_2, VAR_0);





 FUNC_1(VAR_2, VAR_0,
    VAR_2->bb_watchdog_last_status & ~VAR_1);
}

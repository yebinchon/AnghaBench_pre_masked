
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ar5523 {int tx_wd_work; int hw; } ;


 struct ar5523* VAR_0 ;
 int FUNC_0 (struct ar5523*,char*) ;
 struct ar5523* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct ar5523 *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_0(VAR_3, "TX watchdog timer triggered\n");
 FUNC_2(VAR_3->hw, &VAR_3->tx_wd_work);
}

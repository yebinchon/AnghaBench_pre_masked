
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct brcmf_btcoex_info {int timer_on; int work; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct brcmf_btcoex_info* VAR_1 ;
 struct brcmf_btcoex_info* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct brcmf_btcoex_info *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 FUNC_0(VAR_0, "enter\n");

 VAR_4->timer_on = 0;
 FUNC_2(&VAR_4->work);
}

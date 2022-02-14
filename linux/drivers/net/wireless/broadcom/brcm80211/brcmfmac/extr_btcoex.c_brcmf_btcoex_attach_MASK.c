
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_cfg80211_info {struct brcmf_btcoex_info* btcoex; } ;
struct brcmf_btcoex_info {int timer_on; int saved_regs_part1; int saved_regs_part2; int work; struct brcmf_cfg80211_info* cfg; int timer; int timeout; int bt_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 struct brcmf_btcoex_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct brcmf_cfg80211_info *VAR_7)
{
 struct brcmf_btcoex_info *VAR_8 = ((void*)0);
 FUNC_1(VAR_4, "enter\n");

 VAR_8 = FUNC_2(sizeof(struct brcmf_btcoex_info), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->bt_state = VAR_1;


 VAR_8->timer_on = 0;
 VAR_8->timeout = VAR_0;
 FUNC_3(&VAR_8->timer, VAR_6, 0);
 VAR_8->cfg = VAR_7;
 VAR_8->saved_regs_part1 = 0;
 VAR_8->saved_regs_part2 = 0;

 FUNC_0(&VAR_8->work, VAR_5);

 VAR_7->btcoex = VAR_8;
 return 0;
}

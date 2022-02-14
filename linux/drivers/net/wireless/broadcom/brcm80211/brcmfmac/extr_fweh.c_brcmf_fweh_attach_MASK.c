
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_fweh_info {int event_q; int evt_q_lock; int event_work; } ;
struct brcmf_pub {struct brcmf_fweh_info fweh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

void FUNC_3(struct brcmf_pub *VAR_1)
{
 struct brcmf_fweh_info *VAR_2 = &VAR_1->fweh;
 FUNC_1(&VAR_2->event_work, VAR_0);
 FUNC_2(&VAR_2->evt_q_lock);
 FUNC_0(&VAR_2->event_q);
}

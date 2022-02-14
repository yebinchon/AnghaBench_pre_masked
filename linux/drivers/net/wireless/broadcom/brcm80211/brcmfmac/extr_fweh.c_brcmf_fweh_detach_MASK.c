
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_fweh_info {int evt_handler; int event_q; int event_work; } ;
struct brcmf_pub {struct brcmf_fweh_info fweh; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct brcmf_pub *VAR_0)
{
 struct brcmf_fweh_info *VAR_1 = &VAR_0->fweh;


 FUNC_1(&VAR_1->event_work);
 FUNC_0(!FUNC_2(&VAR_1->event_q));
 FUNC_3(VAR_1->evt_handler, 0, sizeof(VAR_1->evt_handler));
}

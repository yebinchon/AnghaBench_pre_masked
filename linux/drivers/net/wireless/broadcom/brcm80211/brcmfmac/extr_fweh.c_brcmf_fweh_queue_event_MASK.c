
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct brcmf_fweh_queue_item {int q; } ;
struct brcmf_fweh_info {int event_work; int evt_q_lock; int event_q; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct brcmf_fweh_info *VAR_0,
       struct brcmf_fweh_queue_item *VAR_1)
{
 ulong VAR_2;

 FUNC_2(&VAR_0->evt_q_lock, VAR_2);
 FUNC_0(&VAR_1->q, &VAR_0->event_q);
 FUNC_3(&VAR_0->evt_q_lock, VAR_2);
 FUNC_1(&VAR_0->event_work);
}

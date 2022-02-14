
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {int mode; int fip_resp; int fip_recv_list; int recv_work; int timer_work; int timer; int flogi_oxid; int ctlr_lock; int ctlr_mutex; int fcfs; } ;
typedef enum fip_mode { ____Placeholder_fip_mode } fip_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct fcoe_ctlr*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

void FUNC_7(struct fcoe_ctlr *VAR_5, enum fip_mode VAR_6)
{
 FUNC_2(VAR_5, VAR_1);
 VAR_5->mode = VAR_6;
 VAR_5->fip_resp = 0;
 FUNC_0(&VAR_5->fcfs);
 FUNC_3(&VAR_5->ctlr_mutex);
 FUNC_5(&VAR_5->ctlr_lock);
 VAR_5->flogi_oxid = VAR_0;
 FUNC_6(&VAR_5->timer, VAR_3, 0);
 FUNC_1(&VAR_5->timer_work, VAR_4);
 FUNC_1(&VAR_5->recv_work, VAR_2);
 FUNC_4(&VAR_5->fip_recv_list);
}

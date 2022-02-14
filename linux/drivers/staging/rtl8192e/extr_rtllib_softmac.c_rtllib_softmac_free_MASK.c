
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int ps_task; int wx_mutex; int wx_sync_scan_wq; int ips_leave_wq; int associate_complete_wq; int link_change_wq; int hw_sleep_wq; int hw_wakeup_wq; int start_ibss_wq; int softmac_scan_wq; int associate_procedure_wq; int associate_retry_wq; int associate_timer; int * dot11d_info; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct rtllib_device *VAR_0)
{
 FUNC_4(&VAR_0->wx_mutex);
 FUNC_3(VAR_0->dot11d_info);
 VAR_0->dot11d_info = ((void*)0);
 FUNC_2(&VAR_0->associate_timer);

 FUNC_0(&VAR_0->associate_retry_wq);
 FUNC_0(&VAR_0->associate_procedure_wq);
 FUNC_0(&VAR_0->softmac_scan_wq);
 FUNC_0(&VAR_0->start_ibss_wq);
 FUNC_0(&VAR_0->hw_wakeup_wq);
 FUNC_0(&VAR_0->hw_sleep_wq);
 FUNC_0(&VAR_0->link_change_wq);
 FUNC_1(&VAR_0->associate_complete_wq);
 FUNC_1(&VAR_0->ips_leave_wq);
 FUNC_1(&VAR_0->wx_sync_scan_wq);
 FUNC_5(&VAR_0->wx_mutex);
 FUNC_6(&VAR_0->ps_task);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_sli {int mbox_tmo; } ;
struct lpfc_hba {int cfg_enable_fc4_type; int eq_delay_work; int hb_tmofunc; int eratt_poll; int fabric_block_timer; int luns; int devicelock; int fcf_conn_rec_list; int elsbuf; int fabric_iocb_list; int lpfc_scsi_buf_list_put; int scsi_buf_list_put_lock; int lpfc_scsi_buf_list_get; int scsi_buf_list_get_lock; scalar_t__ nvmet_support; int work_waitq; int wait_4_mlo_m_q; int work_list; int port_list; int port_list_lock; int ndlp_lock; int hbalock; int fast_event_count; struct lpfc_sli sli; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,char*,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_9)
{
 struct lpfc_sli *VAR_10 = &VAR_9->sli;




 FUNC_2(&VAR_9->fast_event_count, 0);
 FUNC_5(&VAR_9->hbalock);


 FUNC_5(&VAR_9->ndlp_lock);


 FUNC_5(&VAR_9->port_list_lock);
 FUNC_1(&VAR_9->port_list);

 FUNC_1(&VAR_9->work_list);
 FUNC_3(&VAR_9->wait_4_mlo_m_q);


 FUNC_3(&VAR_9->work_waitq);

 FUNC_4(VAR_9, VAR_0, VAR_1,
   "1403 Protocols supported %s %s %s\n",
   ((VAR_9->cfg_enable_fc4_type & VAR_2) ?
    "SCSI" : " "),
   ((VAR_9->cfg_enable_fc4_type & VAR_3) ?
    "NVME" : " "),
   (VAR_9->nvmet_support ? "NVMET" : " "));


 FUNC_5(&VAR_9->scsi_buf_list_get_lock);
 FUNC_1(&VAR_9->lpfc_scsi_buf_list_get);
 FUNC_5(&VAR_9->scsi_buf_list_put_lock);
 FUNC_1(&VAR_9->lpfc_scsi_buf_list_put);


 FUNC_1(&VAR_9->fabric_iocb_list);


 FUNC_1(&VAR_9->elsbuf);


 FUNC_1(&VAR_9->fcf_conn_rec_list);


 FUNC_5(&VAR_9->devicelock);
 FUNC_1(&VAR_9->luns);


 FUNC_6(&VAR_10->mbox_tmo, VAR_7, 0);

 FUNC_6(&VAR_9->fabric_block_timer, VAR_4, 0);

 FUNC_6(&VAR_9->eratt_poll, VAR_8, 0);

 FUNC_6(&VAR_9->hb_tmofunc, VAR_6, 0);

 FUNC_0(&VAR_9->eq_delay_work, VAR_5);

 return 0;
}

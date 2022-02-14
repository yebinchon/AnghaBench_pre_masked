
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int fc_flag; int fc_adisc_cnt; int fc_plogi_cnt; int port_state; int work_port_lock; int work_port_events; int fc_disctmo; int fc_ns_retry; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,char*,int ,int,int ,int ) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int
FUNC_6(struct lpfc_vport *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_3(VAR_5);
 unsigned long VAR_7;

 FUNC_1(VAR_5, VAR_3,
  "can disc timer:  state:x%x rtry:x%x flg:x%x",
  VAR_5->port_state, VAR_5->fc_ns_retry, VAR_5->fc_flag);


 if (VAR_5->fc_flag & VAR_0) {
  FUNC_4(VAR_6->host_lock, VAR_7);
  VAR_5->fc_flag &= ~VAR_0;
  FUNC_5(VAR_6->host_lock, VAR_7);
  FUNC_0(&VAR_5->fc_disctmo);
  FUNC_4(&VAR_5->work_port_lock, VAR_7);
  VAR_5->work_port_events &= ~VAR_4;
  FUNC_5(&VAR_5->work_port_lock, VAR_7);
 }


 FUNC_2(VAR_5, VAR_1, VAR_2,
    "0248 Cancel Discovery Timer state x%x "
    "Data: x%x x%x x%x\n",
    VAR_5->port_state, VAR_5->fc_flag,
    VAR_5->fc_plogi_cnt, VAR_5->fc_adisc_cnt);
 return 0;
}

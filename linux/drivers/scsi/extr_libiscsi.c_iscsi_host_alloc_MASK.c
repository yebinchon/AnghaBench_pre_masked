
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct iscsi_host {int session_removal_wq; scalar_t__ num_sessions; int state; int lock; int workq; int workq_name; } ;
struct Scsi_Host {int host_no; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct Scsi_Host* FUNC_2 (struct scsi_host_template*,int) ;
 int FUNC_3 (struct Scsi_Host*) ;
 struct iscsi_host* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int ,int,char*,int) ;
 int FUNC_6 (int *) ;

struct Scsi_Host *FUNC_7(struct scsi_host_template *VAR_1,
       int VAR_2, bool VAR_3)
{
 struct Scsi_Host *VAR_4;
 struct iscsi_host *VAR_5;

 VAR_4 = FUNC_2(VAR_1, sizeof(struct iscsi_host) + VAR_2);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = FUNC_4(VAR_4);

 if (VAR_3) {
  FUNC_5(VAR_5->workq_name, sizeof(VAR_5->workq_name),
   "iscsi_q_%d", VAR_4->host_no);
  VAR_5->workq = FUNC_0(VAR_5->workq_name);
  if (!VAR_5->workq)
   goto free_host;
 }

 FUNC_6(&VAR_5->lock);
 VAR_5->state = VAR_0;
 VAR_5->num_sessions = 0;
 FUNC_1(&VAR_5->session_removal_wq);
 return VAR_4;

free_host:
 FUNC_3(VAR_4);
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ result; TYPE_1__* device; } ;
struct lpfc_vport {scalar_t__ stat_data_blocked; int stat_data_enabled; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {TYPE_2__* lat_data; } ;
struct lpfc_io_buf {struct lpfc_rport_data* rdata; scalar_t__ start_time; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {scalar_t__ bucket_type; unsigned long bucket_step; int bucket_base; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_4__ {int cmd_count; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_4, struct lpfc_io_buf *VAR_5)
{
 struct lpfc_rport_data *VAR_6;
 struct lpfc_nodelist *VAR_7;
 struct scsi_cmnd *VAR_8 = VAR_5->pCmd;
 unsigned long VAR_9;
 struct Scsi_Host *VAR_10 = VAR_8->device->host;
 struct lpfc_vport *VAR_11 = (struct lpfc_vport *) VAR_10->hostdata;
 unsigned long VAR_12;
 int VAR_13;

 if (!VAR_11->stat_data_enabled ||
     VAR_11->stat_data_blocked ||
     (VAR_8->result))
  return;

 VAR_12 = FUNC_0((long)VAR_3 - (long)VAR_5->start_time);
 VAR_6 = VAR_5->rdata;
 VAR_7 = VAR_6->pnode;

 FUNC_1(VAR_10->host_lock, VAR_9);
 if (!VAR_7 ||
     !VAR_7->lat_data ||
     (VAR_4->bucket_type == VAR_2)) {
  FUNC_2(VAR_10->host_lock, VAR_9);
  return;
 }

 if (VAR_4->bucket_type == VAR_0) {
  VAR_13 = (VAR_12 + VAR_4->bucket_step - 1 - VAR_4->bucket_base)/
   VAR_4->bucket_step;

  if (VAR_13 < 0)
   VAR_13 = 0;
  else if (VAR_13 >= VAR_1)
   VAR_13 = VAR_1 - 1;
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_1-1; VAR_13++)
   if (VAR_12 <= (VAR_4->bucket_base +
    ((1<<VAR_13)*VAR_4->bucket_step)))
    break;
 }

 VAR_7->lat_data[VAR_13].cmd_count++;
 FUNC_2(VAR_10->host_lock, VAR_9);
}

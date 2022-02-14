
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_host_template {int dummy; } ;
struct Scsi_Host {unsigned long* hostdata; int max_id; int max_lun; int cmd_per_lun; int use_cmd_list; int can_queue; int sg_tablesize; scalar_t__ unique_id; scalar_t__ max_channel; scalar_t__ n_io_port; scalar_t__ io_port; int irq; } ;
typedef int s32 ;
struct TYPE_5__ {int post_fifo_size; int sg_tablesize; scalar_t__ unit; scalar_t__ top_scsi_channel; TYPE_1__* pDev; struct Scsi_Host* host; int name; } ;
typedef TYPE_2__ adpt_hba ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (char*,int ) ;
 struct Scsi_Host* FUNC_1 (struct scsi_host_template*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static s32 FUNC_2(adpt_hba* VAR_1, struct scsi_host_template *VAR_2)
{
 struct Scsi_Host *VAR_3;

 VAR_3 = FUNC_1(VAR_2, sizeof(adpt_hba*));
 if (VAR_3 == ((void*)0)) {
  FUNC_0("%s: scsi_host_alloc returned NULL\n", VAR_1->name);
  return -1;
 }
 VAR_3->hostdata[0] = (unsigned long)VAR_1;
 VAR_1->host = VAR_3;

 VAR_3->irq = VAR_1->pDev->irq;



 VAR_3->io_port = 0;
 VAR_3->n_io_port = 0;

 VAR_3->max_id = 16;
 VAR_3->max_lun = 256;
 VAR_3->max_channel = VAR_1->top_scsi_channel + 1;
 VAR_3->cmd_per_lun = 1;
 VAR_3->unique_id = (u32)VAR_0 + VAR_1->unit;
 VAR_3->sg_tablesize = VAR_1->sg_tablesize;
 VAR_3->can_queue = VAR_1->post_fifo_size;
 VAR_3->use_cmd_list = 1;

 return 0;
}

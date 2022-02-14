
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct adpt_device {struct adpt_device* next_lun; TYPE_5__* pScsi_dev; int scsi_lun; scalar_t__ scsi_id; scalar_t__ scsi_channel; TYPE_3__* pI2o_dev; } ;
struct Scsi_Host {int sg_tablesize; int can_queue; int irq; int host_no; } ;
struct TYPE_10__ {TYPE_1__* channel; scalar_t__ reply_fifo_size; int name; struct Scsi_Host* host; int detail; struct TYPE_10__* next; } ;
typedef TYPE_4__ adpt_hba ;
struct TYPE_11__ {int rev; int vendor; } ;
struct TYPE_8__ {int tid; } ;
struct TYPE_9__ {TYPE_2__ lct_data; } ;
struct TYPE_7__ {struct adpt_device** device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_5, struct Scsi_Host *VAR_6)
{
 struct adpt_device* VAR_7;
 int VAR_8;
 int VAR_9;
 adpt_hba* VAR_10;
 int VAR_11;


 FUNC_0(&VAR_3);
 for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next) {
  if (VAR_10->host == VAR_6) {
   break;
  }
 }
 FUNC_1(&VAR_3);
 if (VAR_10 == ((void*)0)) {
  return 0;
 }
 VAR_6 = VAR_10->host;

 FUNC_3(VAR_5, "Adaptec I2O RAID Driver Version: %s\n\n", VAR_0);
 FUNC_3(VAR_5, "%s\n", VAR_10->detail);
 FUNC_3(VAR_5, "SCSI Host=scsi%d  Control Node=/dev/%s  irq=%d\n",
   VAR_10->host->host_no, VAR_10->name, VAR_6->irq);
 FUNC_3(VAR_5, "\tpost fifo size  = %d\n\treply fifo size = %d\n\tsg table size   = %d\n\n",
   VAR_6->can_queue, (int) VAR_10->reply_fifo_size , VAR_6->sg_tablesize);

 FUNC_4(VAR_5, "Devices:\n");
 for(VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  for(VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_7 = VAR_10->channel[VAR_9].device[VAR_8];
   while(VAR_7) {
    FUNC_3(VAR_5,"\t%-24.24s", VAR_7->pScsi_dev->vendor);
    FUNC_3(VAR_5," Rev: %-8.8s\n", VAR_7->pScsi_dev->rev);

    VAR_11 = VAR_7->pI2o_dev->lct_data.tid;
    FUNC_3(VAR_5, "\tTID=%d, (Channel=%d, Target=%d, Lun=%llu)  (%s)\n\n",
            VAR_11, (int)VAR_7->scsi_channel, (int)VAR_7->scsi_id, VAR_7->scsi_lun,
            FUNC_2(VAR_7->pScsi_dev)? "online":"offline");
    VAR_7 = VAR_7->next_lun;
   }
  }
 }
 return 0;
}

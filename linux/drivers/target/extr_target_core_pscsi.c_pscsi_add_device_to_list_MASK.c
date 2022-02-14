
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* hw_block_size; scalar_t__ hw_queue_depth; void* hw_max_sectors; } ;
struct se_device {TYPE_2__ dev_attrib; int t10_wwn; } ;
struct scsi_device {scalar_t__ type; void* sector_size; scalar_t__ queue_depth; TYPE_1__* host; int lun; int id; int channel; struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;
struct pscsi_dev_virt {struct scsi_device* pdv_sd; } ;
struct TYPE_3__ {int max_sectors; } ;


 scalar_t__ VAR_0 ;
 struct pscsi_dev_virt* FUNC_0 (struct se_device*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct scsi_device*,int *) ;
 int FUNC_4 (struct scsi_device*,int *) ;
 int FUNC_5 (struct scsi_device*,int *) ;
 int FUNC_6 (struct se_device*,struct scsi_device*) ;
 int FUNC_7 (struct request_queue*) ;

__attribute__((used)) static int FUNC_8(struct se_device *VAR_2,
  struct scsi_device *VAR_3)
{
 struct pscsi_dev_virt *VAR_4 = FUNC_0(VAR_2);
 struct request_queue *VAR_5 = VAR_3->request_queue;

 VAR_4->pdv_sd = VAR_3;

 if (!VAR_3->queue_depth) {
  VAR_3->queue_depth = VAR_0;

  FUNC_2("Set broken SCSI Device %d:%d:%llu"
   " queue_depth to %d\n", VAR_3->channel, VAR_3->id,
    VAR_3->lun, VAR_3->queue_depth);
 }

 VAR_2->dev_attrib.hw_block_size =
  FUNC_1((int)VAR_3->sector_size, 512);
 VAR_2->dev_attrib.hw_max_sectors =
  FUNC_1(VAR_3->host->max_sectors, FUNC_7(VAR_5));
 VAR_2->dev_attrib.hw_queue_depth = VAR_3->queue_depth;




 FUNC_5(VAR_3, &VAR_2->t10_wwn);





 if (!FUNC_4(VAR_3, &VAR_2->t10_wwn)) {




  FUNC_3(VAR_3, &VAR_2->t10_wwn);
 }




 if (VAR_3->type == VAR_1) {
  FUNC_6(VAR_2, VAR_3);
  VAR_2->dev_attrib.hw_block_size = VAR_3->sector_size;
 }
 return 0;
}

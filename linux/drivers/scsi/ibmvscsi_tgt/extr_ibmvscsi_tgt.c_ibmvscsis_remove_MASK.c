
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dev; int irq; } ;
struct scsi_info {int list; int target; int work_task; struct scsi_info* map_buf; int map_ioba; int work_q; int unconfig; int intr_lock; int flags; TYPE_1__* dma_dev; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct scsi_info* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int ,struct scsi_info*) ;
 int FUNC_6 (struct scsi_info*) ;
 int VAR_4 ;
 int FUNC_7 (struct scsi_info*) ;
 int FUNC_8 (struct scsi_info*) ;
 int FUNC_9 (struct scsi_info*,int ,int ) ;
 int FUNC_10 (struct scsi_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct vio_dev*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct vio_dev *VAR_5)
{
 struct scsi_info *VAR_6 = FUNC_2(&VAR_5->dev);

 FUNC_1(&VAR_6->dev, "remove (%s)\n", FUNC_3(&VAR_6->dma_dev->dev));

 FUNC_12(&VAR_6->intr_lock);
 FUNC_9(VAR_6, VAR_3, 0);
 VAR_6->flags |= VAR_0;
 FUNC_13(&VAR_6->intr_lock);
 FUNC_17(&VAR_6->unconfig);

 FUNC_16(VAR_5);
 FUNC_5(VAR_5->irq, VAR_6);
 FUNC_0(VAR_6->work_q);
 FUNC_4(&VAR_5->dev, VAR_6->map_ioba, VAR_2,
    VAR_1);
 FUNC_10(VAR_6->map_buf);
 FUNC_15(&VAR_6->work_task);
 FUNC_6(VAR_6);
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
 FUNC_14(&VAR_6->target);
 FUNC_12(&VAR_4);
 FUNC_11(&VAR_6->list);
 FUNC_13(&VAR_4);
 FUNC_10(VAR_6);

 return 0;
}

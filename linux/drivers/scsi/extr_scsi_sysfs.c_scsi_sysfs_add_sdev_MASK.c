
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_target {int dev; } ;
struct TYPE_14__ {int kobj; } ;
struct scsi_device {int is_visible; TYPE_2__* host; TYPE_3__ sdev_gendev; TYPE_3__ sdev_dev; struct scsi_target* sdev_target; struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;
struct TYPE_13__ {TYPE_1__* hostt; } ;
struct TYPE_12__ {scalar_t__ sdev_groups; scalar_t__* sdev_attrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct request_queue*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct scsi_device*) ;
 int FUNC_9 (struct scsi_target*) ;
 int FUNC_10 (struct scsi_device*) ;
 int FUNC_11 (struct scsi_target*) ;
 int FUNC_12 (struct scsi_device*) ;
 int FUNC_13 (struct scsi_target*) ;
 int FUNC_14 (int ,struct scsi_device*,char*,int) ;
 int FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int *) ;

int FUNC_18(struct scsi_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct request_queue *VAR_4 = VAR_1->request_queue;
 struct scsi_target *VAR_5 = VAR_1->sdev_target;

 VAR_2 = FUNC_13(VAR_5);
 if (VAR_2)
  return VAR_2;

 FUNC_17(&VAR_5->dev);

 FUNC_4(&VAR_1->sdev_gendev);
 FUNC_9(VAR_5);
 FUNC_7(&VAR_1->sdev_gendev);
 FUNC_6(&VAR_1->sdev_gendev);
 FUNC_5(&VAR_1->sdev_gendev);
 FUNC_11(VAR_5);

 FUNC_8(VAR_1);

 FUNC_12(VAR_1);

 VAR_2 = FUNC_1(&VAR_1->sdev_gendev);
 if (VAR_2) {
  FUNC_14(VAR_0, VAR_1,
    "failed to add device: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_4(&VAR_1->sdev_dev);
 VAR_2 = FUNC_1(&VAR_1->sdev_dev);
 if (VAR_2) {
  FUNC_14(VAR_0, VAR_1,
    "failed to add class device: %d\n", VAR_2);
  FUNC_3(&VAR_1->sdev_gendev);
  return VAR_2;
 }
 FUNC_16(&VAR_1->sdev_gendev);
 VAR_1->is_visible = 1;

 VAR_2 = FUNC_0(VAR_4, &VAR_1->sdev_gendev);
 if (VAR_2)


  FUNC_14(VAR_0, VAR_1,
       "Failed to register bsg queue, errno=%d\n", VAR_2);


 if (VAR_1->host->hostt->sdev_attrs) {
  for (VAR_3 = 0; VAR_1->host->hostt->sdev_attrs[VAR_3]; VAR_3++) {
   VAR_2 = FUNC_2(&VAR_1->sdev_gendev,
     VAR_1->host->hostt->sdev_attrs[VAR_3]);
   if (VAR_2)
    return VAR_2;
  }
 }

 if (VAR_1->host->hostt->sdev_groups) {
  VAR_2 = FUNC_15(&VAR_1->sdev_gendev.kobj,
    VAR_1->host->hostt->sdev_groups);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_10(VAR_1);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; } ;
struct scsi_device {scalar_t__ sdev_state; TYPE_2__* host; int requeue_work; int request_queue; int state_mutex; struct device sdev_dev; struct device sdev_gendev; scalar_t__ is_visible; } ;
struct TYPE_4__ {TYPE_1__* hostt; } ;
struct TYPE_3__ {int (* slave_destroy ) (struct scsi_device*) ;scalar_t__ sdev_groups; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct scsi_device*,scalar_t__) ;
 int FUNC_9 (struct scsi_device*) ;
 int FUNC_10 (struct scsi_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct scsi_device*) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;

void FUNC_16(struct scsi_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->sdev_gendev;
 int VAR_4;






 if (VAR_2->sdev_state == VAR_1)
  return;

 if (VAR_2->is_visible) {




  FUNC_5(&VAR_2->state_mutex);





  VAR_4 = FUNC_8(VAR_2, VAR_0);
  if (VAR_4 != 0) {
   VAR_4 = FUNC_8(VAR_2, VAR_1);
   if (VAR_4 == 0)
    FUNC_9(VAR_2);
  }
  FUNC_6(&VAR_2->state_mutex);

  if (VAR_4 != 0)
   return;

  if (VAR_2->host->hostt->sdev_groups)
   FUNC_13(&VAR_2->sdev_gendev.kobj,
     VAR_2->host->hostt->sdev_groups);

  FUNC_1(VAR_2->request_queue);
  FUNC_4(&VAR_2->sdev_dev);
  FUNC_15(VAR_3);
  FUNC_3(VAR_3);
 } else
  FUNC_7(&VAR_2->sdev_dev);






 FUNC_5(&VAR_2->state_mutex);
 FUNC_8(VAR_2, VAR_1);
 FUNC_6(&VAR_2->state_mutex);

 FUNC_0(VAR_2->request_queue);
 FUNC_2(&VAR_2->requeue_work);

 if (VAR_2->host->hostt->slave_destroy)
  VAR_2->host->hostt->slave_destroy(VAR_2);
 FUNC_14(VAR_3);






 FUNC_11(FUNC_10(VAR_2));

 FUNC_7(VAR_3);
}

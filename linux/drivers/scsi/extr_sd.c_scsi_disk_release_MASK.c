
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; int index; struct gendisk* disk; } ;
struct request_queue {int dummy; } ;
struct gendisk {int * private_data; struct request_queue* queue; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int sdev_gendev; } ;


 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct scsi_disk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gendisk*) ;
 int VAR_0 ;
 struct scsi_disk* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1)
{
 struct scsi_disk *VAR_2 = FUNC_6(VAR_1);
 struct gendisk *VAR_3 = VAR_2->disk;
 struct request_queue *VAR_4 = VAR_3->queue;

 FUNC_2(&VAR_0, VAR_2->index);
 FUNC_0(VAR_4);
 FUNC_1(VAR_4);

 VAR_3->private_data = ((void*)0);
 FUNC_5(VAR_3);
 FUNC_4(&VAR_2->device->sdev_gendev);

 FUNC_3(VAR_2);
}

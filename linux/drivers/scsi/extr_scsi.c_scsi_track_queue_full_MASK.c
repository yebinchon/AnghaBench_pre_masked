
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int last_queue_full_time; int last_queue_full_depth; int last_queue_full_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int) ;

int FUNC_1(struct scsi_device *VAR_1, int VAR_2)
{






 if ((VAR_0 >> 4) == (VAR_1->last_queue_full_time >> 4))
  return 0;

 VAR_1->last_queue_full_time = VAR_0;
 if (VAR_1->last_queue_full_depth != VAR_2) {
  VAR_1->last_queue_full_count = 1;
  VAR_1->last_queue_full_depth = VAR_2;
 } else {
  VAR_1->last_queue_full_count++;
 }

 if (VAR_1->last_queue_full_count <= 10)
  return 0;

 return FUNC_0(VAR_1, VAR_2);
}

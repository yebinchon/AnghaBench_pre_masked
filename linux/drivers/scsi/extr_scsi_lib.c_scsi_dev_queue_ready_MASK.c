
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {unsigned int queue_depth; int device_busy; int device_blocked; } ;
struct request_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static inline int FUNC_6(struct request_queue *VAR_1,
      struct scsi_device *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_3(&VAR_2->device_busy) - 1;
 if (FUNC_4(&VAR_2->device_blocked)) {
  if (VAR_3)
   goto out_dec;




  if (FUNC_2(&VAR_2->device_blocked) > 0)
   goto out_dec;
  FUNC_0(3, FUNC_5(VAR_0, VAR_2,
       "unblocking device at zero depth\n"));
 }

 if (VAR_3 >= VAR_2->queue_depth)
  goto out_dec;

 return 1;
out_dec:
 FUNC_1(&VAR_2->device_busy);
 return 0;
}

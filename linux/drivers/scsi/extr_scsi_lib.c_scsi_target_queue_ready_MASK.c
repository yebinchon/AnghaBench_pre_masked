
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {unsigned int can_queue; int target_busy; int target_blocked; struct scsi_device* starget_sdev_user; scalar_t__ single_lun; } ;
struct scsi_device {int starved_entry; } ;
struct Scsi_Host {int host_lock; int starved_list; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 struct scsi_target* FUNC_6 (struct scsi_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct scsi_target*,char*) ;

__attribute__((used)) static inline int FUNC_10(struct Scsi_Host *VAR_1,
        struct scsi_device *VAR_2)
{
 struct scsi_target *VAR_3 = FUNC_6(VAR_2);
 unsigned int VAR_4;

 if (VAR_3->single_lun) {
  FUNC_7(VAR_1->host_lock);
  if (VAR_3->starget_sdev_user &&
      VAR_3->starget_sdev_user != VAR_2) {
   FUNC_8(VAR_1->host_lock);
   return 0;
  }
  VAR_3->starget_sdev_user = VAR_2;
  FUNC_8(VAR_1->host_lock);
 }

 if (VAR_3->can_queue <= 0)
  return 1;

 VAR_4 = FUNC_3(&VAR_3->target_busy) - 1;
 if (FUNC_4(&VAR_3->target_blocked) > 0) {
  if (VAR_4)
   goto starved;




  if (FUNC_2(&VAR_3->target_blocked) > 0)
   goto out_dec;

  FUNC_0(3, FUNC_9(VAR_0, VAR_3,
     "unblocking target at zero depth\n"));
 }

 if (VAR_4 >= VAR_3->can_queue)
  goto starved;

 return 1;

starved:
 FUNC_7(VAR_1->host_lock);
 FUNC_5(&VAR_2->starved_entry, &VAR_1->starved_list);
 FUNC_8(VAR_1->host_lock);
out_dec:
 if (VAR_3->can_queue > 0)
  FUNC_1(&VAR_3->target_busy);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int starved_entry; } ;
struct request_queue {int dummy; } ;
struct Scsi_Host {unsigned int can_queue; int host_lock; int starved_list; scalar_t__ host_self_blocked; int host_blocked; int host_busy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct Scsi_Host*) ;
 scalar_t__ FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int ,struct Scsi_Host*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static inline int FUNC_12(struct request_queue *VAR_1,
       struct Scsi_Host *VAR_2,
       struct scsi_device *VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_8(VAR_2))
  return 0;

 VAR_4 = FUNC_2(&VAR_2->host_busy) - 1;
 if (FUNC_3(&VAR_2->host_blocked) > 0) {
  if (VAR_4)
   goto starved;




  if (FUNC_1(&VAR_2->host_blocked) > 0)
   goto out_dec;

  FUNC_0(3,
   FUNC_9(VAR_0, VAR_2,
         "unblocking host at zero depth\n"));
 }

 if (VAR_2->can_queue > 0 && VAR_4 >= VAR_2->can_queue)
  goto starved;
 if (VAR_2->host_self_blocked)
  goto starved;


 if (!FUNC_6(&VAR_3->starved_entry)) {
  FUNC_10(VAR_2->host_lock);
  if (!FUNC_6(&VAR_3->starved_entry))
   FUNC_5(&VAR_3->starved_entry);
  FUNC_11(VAR_2->host_lock);
 }

 return 1;

starved:
 FUNC_10(VAR_2->host_lock);
 if (FUNC_6(&VAR_3->starved_entry))
  FUNC_4(&VAR_3->starved_entry, &VAR_2->starved_list);
 FUNC_11(VAR_2->host_lock);
out_dec:
 FUNC_7(VAR_2);
 return 0;
}

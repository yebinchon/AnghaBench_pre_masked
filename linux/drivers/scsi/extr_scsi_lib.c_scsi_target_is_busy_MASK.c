
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ can_queue; int target_blocked; int target_busy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct scsi_target *VAR_0)
{
 if (VAR_0->can_queue > 0) {
  if (FUNC_0(&VAR_0->target_busy) >= VAR_0->can_queue)
   return 1;
  if (FUNC_0(&VAR_0->target_blocked) > 0)
   return 1;
 }
 return 0;
}

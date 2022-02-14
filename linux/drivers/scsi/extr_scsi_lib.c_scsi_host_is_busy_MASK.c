
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ can_queue; scalar_t__ host_self_blocked; int host_blocked; int host_busy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct Scsi_Host *VAR_0)
{
 if (VAR_0->can_queue > 0 &&
     FUNC_0(&VAR_0->host_busy) >= VAR_0->can_queue)
  return 1;
 if (FUNC_0(&VAR_0->host_blocked) > 0)
  return 1;
 if (VAR_0->host_self_blocked)
  return 1;
 return 0;
}

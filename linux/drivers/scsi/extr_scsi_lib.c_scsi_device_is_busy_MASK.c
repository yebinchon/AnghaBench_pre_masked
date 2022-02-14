
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ queue_depth; int device_blocked; int device_busy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct scsi_device *VAR_0)
{
 if (FUNC_0(&VAR_0->device_busy) >= VAR_0->queue_depth)
  return 1;
 if (FUNC_0(&VAR_0->device_blocked) > 0)
  return 1;
 return 0;
}

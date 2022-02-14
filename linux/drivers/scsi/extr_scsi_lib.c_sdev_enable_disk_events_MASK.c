
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int disk_events_disable_depth; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct scsi_device *VAR_0)
{
 if (FUNC_0(FUNC_2(&VAR_0->disk_events_disable_depth) <= 0))
  return;
 FUNC_1(&VAR_0->disk_events_disable_depth);
}

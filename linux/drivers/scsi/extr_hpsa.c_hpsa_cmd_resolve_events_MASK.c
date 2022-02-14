
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int commands_outstanding; scalar_t__ in_reset; } ;
struct ctlr_info {int event_sync_wait_queue; } ;
struct CommandList {int scsi_cmd; struct hpsa_scsi_dev_t* device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ctlr_info *VAR_1,
  struct CommandList *VAR_2)
{
 struct hpsa_scsi_dev_t *VAR_3 = VAR_2->device;






 VAR_2->scsi_cmd = VAR_0;
 FUNC_2();
 if (VAR_3) {
  FUNC_0(&VAR_3->commands_outstanding);
  if (VAR_3->in_reset &&
   FUNC_1(&VAR_3->commands_outstanding) <= 0)
   FUNC_3(&VAR_1->event_sync_wait_queue);
 }
}

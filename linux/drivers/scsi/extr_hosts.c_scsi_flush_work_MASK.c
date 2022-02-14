
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int work_q; TYPE_1__* hostt; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,int ) ;

void FUNC_3(struct Scsi_Host *VAR_1)
{
 if (!VAR_1->work_q) {
  FUNC_2(VAR_0, VAR_1,
   "ERROR: Scsi host '%s' attempted to flush scsi-work, "
   "when no workqueue created.\n", VAR_1->hostt->name);
  FUNC_0();
  return;
 }

 FUNC_1(VAR_1->work_q);
}

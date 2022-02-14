
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct Scsi_Host {int work_q; TYPE_1__* hostt; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct work_struct*) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct Scsi_Host *VAR_2, struct work_struct *VAR_3)
{
 if (FUNC_3(!VAR_2->work_q)) {
  FUNC_2(VAR_1, VAR_2,
   "ERROR: Scsi host '%s' attempted to queue scsi-work, "
   "when no workqueue created.\n", VAR_2->hostt->name);
  FUNC_0();

  return -VAR_0;
 }

 return FUNC_1(VAR_2->work_q, VAR_3);
}

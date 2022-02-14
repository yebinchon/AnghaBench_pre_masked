
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dt; int period; int check_nego; } ;
struct sym_tcb {TYPE_1__ tgoal; } ;
struct sym_hcb {int minsync; struct sym_tcb* target; } ;
struct TYPE_4__ {int parent; } ;
struct scsi_target {size_t id; TYPE_2__ dev; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_target*) ;
 struct sym_hcb* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct scsi_target *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_0->dev.parent);
 struct sym_hcb *VAR_3 = FUNC_2(VAR_2);
 struct sym_tcb *VAR_4 = &VAR_3->target[VAR_0->id];



 if (VAR_1 <= VAR_3->minsync && FUNC_1(VAR_0))
  VAR_4->tgoal.dt = 1;

 VAR_4->tgoal.period = VAR_1;
 VAR_4->tgoal.check_nego = 1;
}

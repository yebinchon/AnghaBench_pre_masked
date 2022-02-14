
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; int check_nego; } ;
struct sym_tcb {TYPE_2__ tgoal; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct TYPE_3__ {int parent; } ;
struct scsi_target {size_t id; TYPE_1__ dev; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (int ) ;
 struct sym_hcb* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct scsi_target *VAR_0, int VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_0(VAR_0->dev.parent);
 struct sym_hcb *VAR_3 = FUNC_1(VAR_2);
 struct sym_tcb *VAR_4 = &VAR_3->target[VAR_0->id];

 VAR_4->tgoal.offset = VAR_1;
 VAR_4->tgoal.check_nego = 1;
}

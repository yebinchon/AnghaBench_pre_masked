
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int onlines; } ;
struct bfa_fcs_itnim_s {TYPE_2__* rport; TYPE_1__ stats; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_fcs_itnim_s*,int ) ;

void
FUNC_2(struct bfa_fcs_itnim_s *VAR_1)
{
 VAR_1->stats.onlines++;

 if (!FUNC_0(VAR_1->rport->pid))
  FUNC_1(VAR_1, VAR_0);
}

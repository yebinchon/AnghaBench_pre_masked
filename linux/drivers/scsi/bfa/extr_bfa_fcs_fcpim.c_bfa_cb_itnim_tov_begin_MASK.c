
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {TYPE_1__* rport; int fcs; } ;
struct TYPE_2__ {int pwwn; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(void *VAR_0)
{
 struct bfa_fcs_itnim_s *VAR_1 = (struct bfa_fcs_itnim_s *) VAR_0;

 FUNC_0(VAR_1->fcs, VAR_1->rport->pwwn);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_lps_s {int status; int uarg; TYPE_1__* bfa; scalar_t__ fdisc; int hcb_qe; } ;
struct TYPE_2__ {int bfad; int fcs; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,struct bfa_lps_s*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct bfa_lps_s *VAR_1)
{
 if (!VAR_1->bfa->fcs) {
  FUNC_2(VAR_1->bfa, &VAR_1->hcb_qe, VAR_0,
   VAR_1);
  return;
 }

 if (VAR_1->fdisc)
  FUNC_0(VAR_1->bfa->bfad, VAR_1->uarg, VAR_1->status);
 else
  FUNC_1(VAR_1->bfa->bfad, VAR_1->uarg, VAR_1->status);
}

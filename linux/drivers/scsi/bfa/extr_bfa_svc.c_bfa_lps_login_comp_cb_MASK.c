
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_lps_s {int status; int uarg; TYPE_1__* bfa; scalar_t__ fdisc; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int bfad; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_lps_s *VAR_2 = VAR_0;

 if (!VAR_1)
  return;

 if (VAR_2->fdisc)
  FUNC_0(VAR_2->bfa->bfad, VAR_2->uarg, VAR_2->status);
 else
  FUNC_1(VAR_2->bfa->bfad, VAR_2->uarg, VAR_2->status);
}

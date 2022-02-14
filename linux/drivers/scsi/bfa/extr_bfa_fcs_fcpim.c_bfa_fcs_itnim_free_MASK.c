
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcs_itnim_s {int itnim_drv; TYPE_1__* fcs; int * bfa_itnim; } ;
struct TYPE_2__ {int bfad; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcs_itnim_s *VAR_0)
{
 if (VAR_0->bfa_itnim) {
  FUNC_1(VAR_0->bfa_itnim);
  VAR_0->bfa_itnim = ((void*)0);
 }

 FUNC_0(VAR_0->fcs->bfad, VAR_0->itnim_drv);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fc_alpabm_s {int dummy; } ;
struct TYPE_3__ {int alpa_bm; } ;
struct bfa_fcport_s {TYPE_1__ alpabm; int alpabm_valid; int myalpa; } ;
struct TYPE_4__ {int alpa_bm; } ;
struct bfa_fcport_loop_info_s {TYPE_2__ alpabm; int alpabm_val; int myalpa; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcport_s *VAR_0,
   struct bfa_fcport_loop_info_s *VAR_1)
{
 VAR_0->myalpa = VAR_1->myalpa;
 VAR_0->alpabm_valid =
   VAR_1->alpabm_val;
 FUNC_0(VAR_0->alpabm.alpa_bm,
   VAR_1->alpabm.alpa_bm,
   sizeof(struct fc_alpabm_s));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bfa_fcs_rport_s {int dummy; } ;
struct TYPE_4__ {int num_alpa; int alpabm_valid; int* alpa_pos_map; } ;
struct TYPE_5__ {TYPE_1__ ploop; } ;
struct bfa_fcs_lport_s {int pid; TYPE_3__* fcs; TYPE_2__ port_topo; } ;
struct TYPE_6__ {int bfa; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_fcs_lport_s*) ;
 struct bfa_fcs_rport_s* FUNC_1 (struct bfa_fcs_lport_s*,int) ;
 struct bfa_fcs_rport_s* FUNC_2 (struct bfa_fcs_lport_s*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct bfa_fcs_lport_s *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0;
 struct bfa_fcs_rport_s *VAR_5;
 u8 *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 u32 VAR_8;

 FUNC_0(VAR_2);

 VAR_3 = VAR_2->port_topo.ploop.num_alpa;
 VAR_4 = VAR_2->port_topo.ploop.alpabm_valid;
 VAR_6 = VAR_2->port_topo.ploop.alpa_pos_map;

 FUNC_4(VAR_2->fcs->bfa, VAR_2->pid);
 FUNC_4(VAR_2->fcs->bfa, VAR_3);
 if (VAR_4 == 1) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
   FUNC_4(VAR_2->fcs->bfa, VAR_6[VAR_7]);
   if (VAR_6[VAR_7] != FUNC_3(VAR_2->pid)) {
    VAR_8 = VAR_6[VAR_7];
    FUNC_4(VAR_2->fcs->bfa, VAR_8);
    VAR_5 = FUNC_1(VAR_2,
      FUNC_3(VAR_8));
    if (!VAR_5)
     VAR_5 = FUNC_2(VAR_2,
      FUNC_3(VAR_8));
   }
  }
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   if (VAR_6[VAR_7] != VAR_2->pid) {
    VAR_8 = VAR_1[VAR_7];
    FUNC_4(VAR_2->fcs->bfa, VAR_8);
    VAR_5 = FUNC_1(VAR_2,
      FUNC_3(VAR_8));
    if (!VAR_5)
     VAR_5 = FUNC_2(VAR_2,
      FUNC_3(VAR_8));
   }
  }
 }
}

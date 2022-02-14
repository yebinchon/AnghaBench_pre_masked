
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {size_t* alpa_pos_map; size_t num_alpa; int alpabm_valid; } ;
struct TYPE_8__ {TYPE_3__ ploop; } ;
struct bfa_fcs_lport_s {TYPE_4__ port_topo; TYPE_2__* fcs; int pid; } ;
struct TYPE_5__ {size_t* alpa_bm; } ;
struct bfa_fcport_s {TYPE_1__ alpabm; int myalpa; int alpabm_valid; } ;
struct TYPE_6__ {int bfa; } ;


 struct bfa_fcport_s* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;
 size_t* VAR_1 ;

void
FUNC_3(struct bfa_fcs_lport_s *VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 u8 VAR_7 = 0;
 struct bfa_fcport_s *VAR_8 = FUNC_0(VAR_2->fcs->bfa);

 VAR_2->port_topo.ploop.alpabm_valid = VAR_8->alpabm_valid;
 VAR_2->pid = VAR_8->myalpa;
 VAR_2->pid = FUNC_1(VAR_2->pid);

 for (VAR_3 = 0; VAR_3 < (VAR_0 / 8); VAR_3++) {
  for (VAR_4 = 0, VAR_6 = 0; VAR_4 < 8; VAR_4++, VAR_6++) {
   FUNC_2(VAR_2->fcs->bfa, VAR_8->alpabm.alpa_bm[VAR_3]);
   VAR_5 = (VAR_8->alpabm.alpa_bm[VAR_3] & (1 << (7 - VAR_4)));
   if (VAR_5) {
    VAR_2->port_topo.ploop.alpa_pos_map[VAR_7] =
     VAR_1[(VAR_3 * 8) + VAR_6];
    VAR_7++;
    FUNC_2(VAR_2->fcs->bfa, VAR_7);
    FUNC_2(VAR_2->fcs->bfa,
      VAR_2->port_topo.ploop.alpa_pos_map[VAR_7]);
   }
  }
 }
 VAR_2->port_topo.ploop.num_alpa = VAR_7;
}

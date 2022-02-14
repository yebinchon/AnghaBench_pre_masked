
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcs_vport_s {int qe; } ;
struct bfa_fcs_fabric_s {int wc; int num_vports; int vport_q; int vf_id; int fcs; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct bfa_fcs_fabric_s *VAR_0,
   struct bfa_fcs_vport_s *VAR_1)
{



 FUNC_0(VAR_0->fcs, VAR_0->vf_id);

 FUNC_2(&VAR_1->qe, &VAR_0->vport_q);
 VAR_0->num_vports++;
 FUNC_1(&VAR_0->wc);
}

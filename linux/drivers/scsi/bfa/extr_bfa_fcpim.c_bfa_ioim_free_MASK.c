
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_iotag_s {int qe; } ;
struct bfa_ioim_s {scalar_t__ nsgpgs; int qe; int iotag; int itnim; int sgpg_q; int bfa; struct bfa_fcpim_s* fcpim; } ;
struct bfa_fcpim_s {TYPE_1__* fcp; int ios_active; } ;
struct TYPE_2__ {int num_fwtio_reqs; int iotag_tio_free_q; int iotag_ioim_free_q; int num_ioim_reqs; } ;


 int VAR_0 ;
 struct bfa_iotag_s* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct bfa_ioim_s *VAR_2)
{
 struct bfa_fcpim_s *VAR_3 = VAR_2->fcpim;
 struct bfa_iotag_s *VAR_4;

 if (VAR_2->nsgpgs > 0)
  FUNC_2(VAR_2->bfa, &VAR_2->sgpg_q, VAR_2->nsgpgs);

 FUNC_3(VAR_2->itnim, VAR_1);
 VAR_3->ios_active--;

 VAR_2->iotag &= VAR_0;

 FUNC_1(!(VAR_2->iotag <
  (VAR_3->fcp->num_ioim_reqs + VAR_3->fcp->num_fwtio_reqs)));
 VAR_4 = FUNC_0(VAR_3->fcp, VAR_2->iotag);

 if (VAR_2->iotag < VAR_3->fcp->num_ioim_reqs)
  FUNC_4(&VAR_4->qe, &VAR_3->fcp->iotag_ioim_free_q);
 else
  FUNC_4(&VAR_4->qe, &VAR_3->fcp->iotag_tio_free_q);

 FUNC_5(&VAR_2->qe);
}

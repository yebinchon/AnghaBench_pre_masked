
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bfad_ioim_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_itnim_s {int io_q; } ;
struct bfa_iotag_s {int tag; } ;
struct bfa_ioim_s {int qe; scalar_t__ nsgpgs; int nsges; struct bfa_itnim_s* itnim; struct bfad_ioim_s* dio; } ;
struct bfa_fcpim_s {int ios_active; TYPE_1__* fcp; } ;
struct TYPE_2__ {int iotag_ioim_free_q; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_ioim_s* FUNC_1 (struct bfa_fcpim_s*,int ) ;
 int FUNC_2 (int *,struct bfa_iotag_s**) ;
 int FUNC_3 (struct bfa_itnim_s*,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

struct bfa_ioim_s *
FUNC_5(struct bfa_s *VAR_2, struct bfad_ioim_s *VAR_3,
  struct bfa_itnim_s *VAR_4, u16 VAR_5)
{
 struct bfa_fcpim_s *VAR_6 = FUNC_0(VAR_2);
 struct bfa_ioim_s *VAR_7;
 struct bfa_iotag_s *VAR_8 = ((void*)0);




 FUNC_2(&VAR_6->fcp->iotag_ioim_free_q, &VAR_8);
 if (!VAR_8) {
  FUNC_3(VAR_4, VAR_0);
  return ((void*)0);
 }

 VAR_7 = FUNC_1(VAR_6, VAR_8->tag);

 VAR_7->dio = VAR_3;
 VAR_7->itnim = VAR_4;
 VAR_7->nsges = VAR_5;
 VAR_7->nsgpgs = 0;

 FUNC_3(VAR_4, VAR_1);
 VAR_6->ios_active++;

 FUNC_4(&VAR_7->qe, &VAR_4->io_q);

 return VAR_7;
}

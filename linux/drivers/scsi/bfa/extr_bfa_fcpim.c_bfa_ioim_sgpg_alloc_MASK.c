
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct bfa_ioim_s {scalar_t__ nsges; int sgpg_q; int sgpg; scalar_t__ nsgpgs; TYPE_1__* iosp; int bfa; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int sgpg_wqe; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int ,int *,scalar_t__) ;

__attribute__((used)) static bfa_boolean_t
FUNC_5(struct bfa_ioim_s *VAR_4)
{
 u16 VAR_5;

 FUNC_1(VAR_4->nsges <= VAR_3);




 VAR_5 = FUNC_0(VAR_4->nsges);
 if (!VAR_5)
  return VAR_2;

 if (FUNC_3(VAR_4->bfa, &VAR_4->sgpg_q, VAR_5)
     != VAR_1) {
  FUNC_4(VAR_4->bfa, &VAR_4->iosp->sgpg_wqe, VAR_5);
  return VAR_0;
 }

 VAR_4->nsgpgs = VAR_5;
 VAR_4->sgpg = FUNC_2(&VAR_4->sgpg_q);

 return VAR_2;
}

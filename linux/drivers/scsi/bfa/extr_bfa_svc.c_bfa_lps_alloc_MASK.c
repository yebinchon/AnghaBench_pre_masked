
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_lps_s {int qe; } ;
struct bfa_lps_mod_s {int lps_active_q; int lps_free_q; } ;


 struct bfa_lps_mod_s* FUNC_0 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct bfa_lps_s**) ;
 int FUNC_2 (struct bfa_lps_s*,int ) ;
 int FUNC_3 (int *,int *) ;

struct bfa_lps_s *
FUNC_4(struct bfa_s *VAR_1)
{
 struct bfa_lps_mod_s *VAR_2 = FUNC_0(VAR_1);
 struct bfa_lps_s *VAR_3 = ((void*)0);

 FUNC_1(&VAR_2->lps_free_q, &VAR_3);

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 FUNC_3(&VAR_3->qe, &VAR_2->lps_active_q);

 FUNC_2(VAR_3, VAR_0);
 return VAR_3;
}

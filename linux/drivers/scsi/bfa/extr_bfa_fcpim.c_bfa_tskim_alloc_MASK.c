
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_tskim_s {int dummy; } ;
struct bfa_tskim_s {struct bfad_tskim_s* dtsk; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcpim_s {int tskim_free_q; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int *,struct bfa_tskim_s**) ;

struct bfa_tskim_s *
FUNC_2(struct bfa_s *VAR_0, struct bfad_tskim_s *VAR_1)
{
 struct bfa_fcpim_s *VAR_2 = FUNC_0(VAR_0);
 struct bfa_tskim_s *VAR_3;

 FUNC_1(&VAR_2->tskim_free_q, &VAR_3);

 if (VAR_3)
  VAR_3->dtsk = VAR_1;

 return VAR_3;
}

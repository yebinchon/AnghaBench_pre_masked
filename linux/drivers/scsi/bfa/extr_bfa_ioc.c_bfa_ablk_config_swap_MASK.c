
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct bfa_ablk_cfg_s {struct bfa_ablk_cfg_inst_s* inst; } ;
struct bfa_ablk_cfg_inst_s {TYPE_1__* pf_cfg; } ;
struct TYPE_2__ {void* bw_max; void* bw_min; void* num_vectors; void* num_qpairs; void* pers; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1(struct bfa_ablk_cfg_s *VAR_2)
{
 struct bfa_ablk_cfg_inst_s *VAR_3;
 int VAR_4, VAR_5;
 u16 VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->inst[VAR_4];
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_6 = VAR_3->pf_cfg[VAR_5].pers;
   VAR_3->pf_cfg[VAR_5].pers = FUNC_0(VAR_6);
   VAR_6 = VAR_3->pf_cfg[VAR_5].num_qpairs;
   VAR_3->pf_cfg[VAR_5].num_qpairs = FUNC_0(VAR_6);
   VAR_6 = VAR_3->pf_cfg[VAR_5].num_vectors;
   VAR_3->pf_cfg[VAR_5].num_vectors = FUNC_0(VAR_6);
   VAR_6 = VAR_3->pf_cfg[VAR_5].bw_min;
   VAR_3->pf_cfg[VAR_5].bw_min = FUNC_0(VAR_6);
   VAR_6 = VAR_3->pf_cfg[VAR_5].bw_max;
   VAR_3->pf_cfg[VAR_5].bw_max = FUNC_0(VAR_6);
  }
 }
}

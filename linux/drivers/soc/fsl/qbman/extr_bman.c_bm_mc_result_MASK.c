
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bm_mc_result {int verb; } ;
struct bm_mc {int rridx; scalar_t__ state; int vbit; union bm_mc_result* rr; } ;
struct bm_portal {struct bm_mc mc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (union bm_mc_result*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline union bm_mc_result *FUNC_2(struct bm_portal *VAR_3)
{
 struct bm_mc *VAR_4 = &VAR_3->mc;
 union bm_mc_result *VAR_5 = VAR_4->rr + VAR_4->rridx;

 FUNC_0(VAR_4->state == VAR_1);





 if (!VAR_5->verb) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 VAR_4->rridx ^= 1;
 VAR_4->vbit ^= VAR_0;



 return VAR_5;
}

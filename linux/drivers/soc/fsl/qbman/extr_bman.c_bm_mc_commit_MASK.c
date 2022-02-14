
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union bm_mc_result {int dummy; } bm_mc_result ;
typedef int u8 ;
struct bm_mc {int rridx; scalar_t__ state; int vbit; TYPE_1__* cr; union bm_mc_result* rr; } ;
struct bm_portal {struct bm_mc mc; } ;
struct TYPE_2__ {int _ncw_verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (union bm_mc_result*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_4(struct bm_portal *VAR_2, u8 VAR_3)
{
 struct bm_mc *VAR_4 = &VAR_2->mc;
 union bm_mc_result *VAR_5 = VAR_4->rr + VAR_4->rridx;

 FUNC_0(VAR_4->state == VAR_1);
 FUNC_1();
 VAR_4->cr->_ncw_verb = VAR_3 | VAR_4->vbit;
 FUNC_2(VAR_4->cr);
 FUNC_3(VAR_5);



}

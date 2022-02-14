
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qm_mc_command {int dummy; } qm_mc_command ;
struct qm_mc {scalar_t__ state; union qm_mc_command* cr; } ;
struct qm_portal {struct qm_mc mc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (union qm_mc_command*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline union qm_mc_command *FUNC_2(struct qm_portal *VAR_2)
{
 struct qm_mc *VAR_3 = &VAR_2->mc;

 FUNC_0(VAR_3->state == VAR_0);



 FUNC_1(VAR_3->cr);
 return VAR_3->cr;
}

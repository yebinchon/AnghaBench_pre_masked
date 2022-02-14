
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_verifier_state {struct bpf_verifier_state* parent; scalar_t__ branches; } ;
struct bpf_verifier_env {int dummy; } ;


 int FUNC_0 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_0, struct bpf_verifier_state *VAR_1)
{
 while (VAR_1) {
  u32 VAR_2 = --VAR_1->branches;




  FUNC_0((int)VAR_2 < 0,
     "BUG update_branch_counts:branches_to_explore=%d\n",
     VAR_2);
  if (VAR_2)
   break;
  VAR_1 = VAR_1->parent;
 }
}

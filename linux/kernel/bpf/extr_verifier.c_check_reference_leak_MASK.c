
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_verifier_env {int dummy; } ;
struct bpf_func_state {int acquired_refs; TYPE_1__* refs; } ;
struct TYPE_2__ {int insn_idx; int id; } ;


 int VAR_0 ;
 struct bpf_func_state* FUNC_0 (struct bpf_verifier_env*) ;
 int FUNC_1 (struct bpf_verifier_env*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_verifier_env *VAR_1)
{
 struct bpf_func_state *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->acquired_refs; VAR_3++) {
  FUNC_1(VAR_1, "Unreleased reference id=%d alloc_insn=%d\n",
   VAR_2->refs[VAR_3].id, VAR_2->refs[VAR_3].insn_idx);
 }
 return VAR_2->acquired_refs ? -VAR_0 : 0;
}

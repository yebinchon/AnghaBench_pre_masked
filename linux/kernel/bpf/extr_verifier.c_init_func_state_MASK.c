
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_env {int dummy; } ;
struct bpf_func_state {int callsite; int frameno; int subprogno; } ;


 int FUNC_0 (struct bpf_verifier_env*,struct bpf_func_state*) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_env *VAR_0,
       struct bpf_func_state *VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 VAR_1->callsite = VAR_2;
 VAR_1->frameno = VAR_3;
 VAR_1->subprogno = VAR_4;
 FUNC_0(VAR_0, VAR_1);
}

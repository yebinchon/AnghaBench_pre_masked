
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {scalar_t__ jmp_history_cnt; int * jmp_history; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct bpf_verifier_state *VAR_0)
{
 FUNC_0(VAR_0->jmp_history);
 VAR_0->jmp_history = ((void*)0);
 VAR_0->jmp_history_cnt = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_func_state {struct bpf_func_state* stack; struct bpf_func_state* refs; } ;


 int FUNC_0 (struct bpf_func_state*) ;

__attribute__((used)) static void FUNC_1(struct bpf_func_state *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->refs);
 FUNC_0(VAR_0->stack);
 FUNC_0(VAR_0);
}

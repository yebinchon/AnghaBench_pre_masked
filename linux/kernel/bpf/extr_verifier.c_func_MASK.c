
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_verifier_state {struct bpf_func_state** frame; } ;
struct bpf_verifier_env {struct bpf_verifier_state* cur_state; } ;
struct bpf_reg_state {size_t frameno; } ;
struct bpf_func_state {int dummy; } ;



__attribute__((used)) static struct bpf_func_state *FUNC_0(struct bpf_verifier_env *VAR_0,
       const struct bpf_reg_state *VAR_1)
{
 struct bpf_verifier_state *VAR_2 = VAR_0->cur_state;

 return VAR_2->frame[VAR_1->frameno];
}

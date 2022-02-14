
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bpf_verifier_env {struct bpf_prog* prog; } ;
struct bpf_prog {scalar_t__ len; TYPE_1__* aux; } ;
struct bpf_line_info {scalar_t__ insn_off; } ;
struct TYPE_2__ {scalar_t__ nr_linfo; struct bpf_line_info* linfo; } ;



__attribute__((used)) static const struct bpf_line_info *
FUNC_0(const struct bpf_verifier_env *VAR_0, u32 VAR_1)
{
 const struct bpf_line_info *VAR_2;
 const struct bpf_prog *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_3 = VAR_0->prog;
 VAR_5 = VAR_3->aux->nr_linfo;

 if (!VAR_5 || VAR_1 >= VAR_3->len)
  return ((void*)0);

 VAR_2 = VAR_3->aux->linfo;
 for (VAR_4 = 1; VAR_4 < VAR_5; VAR_4++)
  if (VAR_1 < VAR_2[VAR_4].insn_off)
   break;

 return &VAR_2[VAR_4 - 1];
}

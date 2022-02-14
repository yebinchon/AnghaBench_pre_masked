
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_env {TYPE_2__* prog; } ;
struct bpf_prog_offload_ops {int (* replace_insn ) (struct bpf_verifier_env*,int ,struct bpf_insn*) ;} ;
struct bpf_prog_offload {int opt_failed; TYPE_3__* offdev; } ;
struct bpf_insn {int dummy; } ;
struct TYPE_6__ {struct bpf_prog_offload_ops* ops; } ;
struct TYPE_5__ {TYPE_1__* aux; } ;
struct TYPE_4__ {struct bpf_prog_offload* offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_verifier_env*,int ,struct bpf_insn*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct bpf_verifier_env *VAR_2, u32 VAR_3,
         struct bpf_insn *VAR_4)
{
 const struct bpf_prog_offload_ops *VAR_5;
 struct bpf_prog_offload *VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_1);
 VAR_6 = VAR_2->prog->aux->offload;
 if (VAR_6) {
  VAR_5 = VAR_6->offdev->ops;
  if (!VAR_6->opt_failed && VAR_5->replace_insn)
   VAR_7 = VAR_5->replace_insn(VAR_2, VAR_3, VAR_4);
  VAR_6->opt_failed |= VAR_7;
 }
 FUNC_2(&VAR_1);
}

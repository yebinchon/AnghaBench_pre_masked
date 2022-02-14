
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bpf_verifier_env {TYPE_4__* prog; } ;
struct bpf_prog_offload {int opt_failed; TYPE_2__* offdev; } ;
struct TYPE_8__ {TYPE_3__* aux; } ;
struct TYPE_7__ {struct bpf_prog_offload* offload; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* remove_insns ) (struct bpf_verifier_env*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_verifier_env*,int ,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct bpf_verifier_env *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct bpf_prog_offload *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_1);
 VAR_5 = VAR_2->prog->aux->offload;
 if (VAR_5) {
  if (!VAR_5->opt_failed && VAR_5->offdev->ops->remove_insns)
   VAR_6 = VAR_5->offdev->ops->remove_insns(VAR_2, VAR_3, VAR_4);
  VAR_5->opt_failed |= VAR_6;
 }
 FUNC_2(&VAR_1);
}

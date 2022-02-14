
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bpf_verifier_env {TYPE_2__* prog; } ;
struct bpf_prog_offload {TYPE_4__* offdev; } ;
struct TYPE_8__ {TYPE_3__* ops; } ;
struct TYPE_7__ {int (* insn_hook ) (struct bpf_verifier_env*,int,int) ;} ;
struct TYPE_6__ {TYPE_1__* aux; } ;
struct TYPE_5__ {struct bpf_prog_offload* offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_verifier_env*,int,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct bpf_verifier_env *VAR_2,
     int VAR_3, int VAR_4)
{
 struct bpf_prog_offload *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_1);
 VAR_5 = VAR_2->prog->aux->offload;
 if (VAR_5)
  VAR_6 = VAR_5->offdev->ops->insn_hook(VAR_2, VAR_3,
            VAR_4);
 FUNC_2(&VAR_1);

 return VAR_6;
}

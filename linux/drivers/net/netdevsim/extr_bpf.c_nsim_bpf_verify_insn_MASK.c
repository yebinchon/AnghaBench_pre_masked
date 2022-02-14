
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nsim_bpf_bound_prog {TYPE_3__* nsim_dev; } ;
struct bpf_verifier_env {TYPE_4__* prog; } ;
struct TYPE_8__ {int len; TYPE_2__* aux; } ;
struct TYPE_7__ {scalar_t__ bpf_bind_verifier_delay; } ;
struct TYPE_6__ {TYPE_1__* offload; } ;
struct TYPE_5__ {struct nsim_bpf_bound_prog* dev_priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bpf_verifier_env*,char*) ;

__attribute__((used)) static int
FUNC_2(struct bpf_verifier_env *VAR_0, int VAR_1, int VAR_2)
{
 struct nsim_bpf_bound_prog *VAR_3;

 VAR_3 = VAR_0->prog->aux->offload->dev_priv;
 if (VAR_3->nsim_dev->bpf_bind_verifier_delay && !VAR_1)
  FUNC_0(VAR_3->nsim_dev->bpf_bind_verifier_delay);

 if (VAR_1 == VAR_0->prog->len - 1)
  FUNC_1(VAR_0, "Hello from netdevsim!\n");

 return 0;
}

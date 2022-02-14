
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_prog {int is_loaded; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; } ;
struct TYPE_3__ {struct nsim_bpf_bound_prog* dev_priv; } ;



__attribute__((used)) static void FUNC_0(struct bpf_prog *VAR_0, bool VAR_1)
{
 struct nsim_bpf_bound_prog *VAR_2;

 if (!VAR_0 || !VAR_0->aux->offload)
  return;

 VAR_2 = VAR_0->aux->offload->dev_priv;
 VAR_2->is_loaded = VAR_1;
}

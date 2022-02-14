
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_bpf_bound_prog {int l; int ddir; int is_loaded; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; } ;
struct TYPE_3__ {struct nsim_bpf_bound_prog* dev_priv; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nsim_bpf_bound_prog*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct bpf_prog *VAR_0)
{
 struct nsim_bpf_bound_prog *VAR_1;

 VAR_1 = VAR_0->aux->offload->dev_priv;
 FUNC_0(VAR_1->is_loaded,
      "offload state destroyed while program still bound");
 FUNC_1(VAR_1->ddir);
 FUNC_3(&VAR_1->l);
 FUNC_2(VAR_1);
}

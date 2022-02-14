
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct nfp_prog {int insns; struct nfp_insn_meta* verifier_meta; } ;
struct nfp_insn_meta {int flags; int l; } ;
struct bpf_verifier_env {struct bpf_insn_aux_data* insn_aux_data; TYPE_3__* prog; } ;
struct bpf_insn_aux_data {int orig_idx; } ;
struct TYPE_6__ {TYPE_1__* aux; } ;
struct TYPE_5__ {struct nfp_prog* dev_priv; } ;
struct TYPE_4__ {TYPE_2__* offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 struct nfp_insn_meta* FUNC_1 (struct nfp_insn_meta*,int ) ;
 struct nfp_insn_meta* FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*,int ) ;

int FUNC_3(struct bpf_verifier_env *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nfp_prog *VAR_6 = VAR_3->prog->aux->offload->dev_priv;
 struct bpf_insn_aux_data *VAR_7 = VAR_3->insn_aux_data;
 struct nfp_insn_meta *VAR_8 = VAR_6->verifier_meta;
 unsigned int VAR_9;

 VAR_8 = FUNC_2(VAR_6, VAR_8, VAR_7[VAR_4].orig_idx);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (FUNC_0(&VAR_8->l == &VAR_6->insns))
   return -VAR_0;


  if (VAR_8->flags & VAR_1)
   VAR_9--;

  VAR_8->flags |= VAR_1;
  VAR_8 = FUNC_1(VAR_8, VAR_2);
 }

 return 0;
}

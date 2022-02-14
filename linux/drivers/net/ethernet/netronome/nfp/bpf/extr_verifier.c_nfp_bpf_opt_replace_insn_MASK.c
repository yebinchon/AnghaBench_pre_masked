
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct nfp_prog {struct nfp_insn_meta* verifier_meta; } ;
struct TYPE_9__ {int code; } ;
struct nfp_insn_meta {int jump_neg_op; TYPE_4__ insn; TYPE_5__* jmp_dst; } ;
struct bpf_verifier_env {struct bpf_insn_aux_data* insn_aux_data; TYPE_3__* prog; } ;
struct bpf_insn_aux_data {scalar_t__ orig_idx; } ;
struct bpf_insn {int code; size_t off; } ;
struct TYPE_10__ {scalar_t__ n; } ;
struct TYPE_8__ {TYPE_2__* aux; } ;
struct TYPE_7__ {TYPE_1__* offload; } ;
struct TYPE_6__ {struct nfp_prog* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nfp_insn_meta*) ;
 int VAR_4 ;
 TYPE_5__* FUNC_1 (struct nfp_insn_meta*,int ) ;
 struct nfp_insn_meta* FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*,scalar_t__) ;
 int FUNC_3 (struct bpf_verifier_env*,char*,size_t,int,...) ;

int FUNC_4(struct bpf_verifier_env *VAR_5, u32 VAR_6,
        struct bpf_insn *VAR_7)
{
 struct nfp_prog *VAR_8 = VAR_5->prog->aux->offload->dev_priv;
 struct bpf_insn_aux_data *VAR_9 = VAR_5->insn_aux_data;
 struct nfp_insn_meta *VAR_10 = VAR_8->verifier_meta;

 VAR_10 = FUNC_2(VAR_8, VAR_10, VAR_9[VAR_6].orig_idx);
 VAR_8->verifier_meta = VAR_10;


 if (FUNC_0(VAR_10) &&
     VAR_7->code == (VAR_1 | VAR_0 | VAR_2)) {
  unsigned int VAR_11;

  VAR_11 = VAR_6 + VAR_7->off + 1;

  if (!VAR_7->off) {
   VAR_10->jmp_dst = FUNC_1(VAR_10, VAR_4);
   VAR_10->jump_neg_op = 0;
  } else if (VAR_10->jmp_dst->n != VAR_9[VAR_11].orig_idx) {
   FUNC_3(VAR_5, "branch hard wire at %d changes target %d -> %d\n",
    VAR_6, VAR_10->jmp_dst->n,
    VAR_9[VAR_11].orig_idx);
   return -VAR_3;
  }
  return 0;
 }

 FUNC_3(VAR_5, "unsupported instruction replacement %hhx -> %hhx\n",
  VAR_10->insn.code, VAR_7->code);
 return -VAR_3;
}

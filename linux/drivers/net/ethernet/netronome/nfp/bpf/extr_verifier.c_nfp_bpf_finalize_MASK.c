
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfp_prog {int subprog_cnt; unsigned int stack_size; TYPE_4__* subprog; } ;
struct nfp_net {int dummy; } ;
struct bpf_verifier_env {int subprog_cnt; int insn_aux_data; TYPE_3__* prog; struct bpf_subprog_info* subprog_info; } ;
struct bpf_subprog_info {int stack_depth; } ;
struct TYPE_8__ {int stack_depth; scalar_t__ needs_reg_push; } ;
struct TYPE_7__ {TYPE_2__* aux; } ;
struct TYPE_6__ {TYPE_1__* offload; } ;
struct TYPE_5__ {int netdev; struct nfp_prog* dev_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__* FUNC_0 (int,int,int ) ;
 struct nfp_net* FUNC_1 (int ) ;
 int FUNC_2 (struct bpf_verifier_env*,struct nfp_prog*) ;
 unsigned int FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (struct nfp_prog*,int ) ;
 int FUNC_5 (struct nfp_net*,int ) ;
 int FUNC_6 (struct bpf_verifier_env*,char*,unsigned int,unsigned int) ;

int FUNC_7(struct bpf_verifier_env *VAR_6)
{
 struct bpf_subprog_info *VAR_7;
 struct nfp_prog *VAR_8;
 unsigned int VAR_9;
 struct nfp_net *VAR_10;
 int VAR_11;

 VAR_8 = VAR_6->prog->aux->offload->dev_priv;
 VAR_8->subprog_cnt = VAR_6->subprog_cnt;
 VAR_8->subprog = FUNC_0(VAR_8->subprog_cnt,
        sizeof(VAR_8->subprog[0]), VAR_3);
 if (!VAR_8->subprog)
  return -VAR_1;

 FUNC_2(VAR_6, VAR_8);

 VAR_7 = VAR_6->subprog_info;
 for (VAR_11 = 0; VAR_11 < VAR_8->subprog_cnt; VAR_11++) {
  VAR_8->subprog[VAR_11].stack_depth = VAR_7[VAR_11].stack_depth;

  if (VAR_11 == 0)
   continue;


  VAR_8->subprog[VAR_11].stack_depth += VAR_5;

  if (VAR_8->subprog[VAR_11].needs_reg_push)
   VAR_8->subprog[VAR_11].stack_depth += VAR_0 * 4;
 }

 VAR_10 = FUNC_1(VAR_6->prog->aux->offload->netdev);
 VAR_9 = FUNC_5(VAR_10, VAR_4) * 64;
 VAR_8->stack_size = FUNC_3(VAR_8);
 if (VAR_8->stack_size > VAR_9) {
  FUNC_6(VAR_6, "stack too large: program %dB > FW stack %dB\n",
   VAR_8->stack_size, VAR_9);
  return -VAR_2;
 }

 FUNC_4(VAR_8, VAR_6->insn_aux_data);
 return 0;
}

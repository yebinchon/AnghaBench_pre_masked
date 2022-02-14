
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {unsigned int n_insns; int insns; } ;
struct bpf_insn {int dummy; } ;
struct nfp_insn_meta {unsigned int n; int l; void* umin_dst; void* umin_src; struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (struct nfp_insn_meta*) ;
 struct nfp_insn_meta* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nfp_prog*) ;

__attribute__((used)) static int
FUNC_4(struct nfp_prog *VAR_3, const struct bpf_insn *VAR_4,
   unsigned int VAR_5)
{
 struct nfp_insn_meta *VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_6->insn = VAR_4[VAR_7];
  VAR_6->n = VAR_7;
  if (FUNC_0(VAR_6)) {
   VAR_6->umin_src = VAR_2;
   VAR_6->umin_dst = VAR_2;
  }

  FUNC_2(&VAR_6->l, &VAR_3->insns);
 }
 VAR_3->n_insns = VAR_5;

 FUNC_3(VAR_3);

 return 0;
}

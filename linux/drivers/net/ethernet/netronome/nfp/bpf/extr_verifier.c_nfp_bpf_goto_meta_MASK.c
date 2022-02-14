
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {unsigned int n_insns; } ;
struct nfp_insn_meta {unsigned int n; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct nfp_insn_meta* FUNC_1 (struct nfp_insn_meta*) ;
 struct nfp_insn_meta* FUNC_2 (struct nfp_insn_meta*) ;
 struct nfp_insn_meta* FUNC_3 (struct nfp_prog*) ;
 struct nfp_insn_meta* FUNC_4 (struct nfp_prog*) ;

struct nfp_insn_meta *
FUNC_5(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5;

 VAR_4 = VAR_1->n - VAR_2;
 VAR_3 = VAR_2 - VAR_1->n;

 if (FUNC_0(VAR_3, VAR_4) > VAR_0->n_insns - VAR_2 - 1) {
  VAR_4 = VAR_0->n_insns - VAR_2 - 1;
  VAR_1 = FUNC_4(VAR_0);
 }
 if (FUNC_0(VAR_3, VAR_4) > VAR_2 && VAR_4 > VAR_2) {
  VAR_3 = VAR_2;
  VAR_1 = FUNC_3(VAR_0);
 }

 if (VAR_3 < VAR_4)
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
   VAR_1 = FUNC_1(VAR_1);
 else
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
   VAR_1 = FUNC_2(VAR_1);

 return VAR_1;
}

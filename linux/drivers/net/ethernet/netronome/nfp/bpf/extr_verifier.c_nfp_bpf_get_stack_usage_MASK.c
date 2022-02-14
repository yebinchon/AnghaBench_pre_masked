
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_prog {TYPE_1__* subprog; } ;
struct TYPE_4__ {scalar_t__ imm; } ;
struct nfp_insn_meta {unsigned short subprog_idx; TYPE_2__ insn; scalar_t__ n; } ;
struct TYPE_3__ {unsigned short stack_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_insn_meta*) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 struct nfp_insn_meta* FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*,scalar_t__) ;
 struct nfp_insn_meta* FUNC_3 (struct nfp_insn_meta*) ;
 struct nfp_insn_meta* FUNC_4 (struct nfp_prog*) ;
 struct nfp_insn_meta* FUNC_5 (struct nfp_prog*) ;
 unsigned short FUNC_6 (unsigned short,int ) ;

__attribute__((used)) static unsigned int FUNC_7(struct nfp_prog *VAR_2)
{
 struct nfp_insn_meta *VAR_3 = FUNC_4(VAR_2);
 unsigned int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 struct nfp_insn_meta *VAR_7[VAR_0];
 unsigned short VAR_8[VAR_0];
 unsigned short VAR_9[VAR_0];
 unsigned short VAR_10 = VAR_3->subprog_idx;







process_subprog:
 VAR_8[VAR_6] = VAR_2->subprog[VAR_10].stack_depth;
 VAR_8[VAR_6] = FUNC_6(VAR_8[VAR_6], VAR_1);
 VAR_5 += VAR_8[VAR_6];
 VAR_4 = FUNC_1(VAR_4, VAR_5);

continue_subprog:
 for (; VAR_3 != FUNC_5(VAR_2) && VAR_3->subprog_idx == VAR_10;
      VAR_3 = FUNC_3(VAR_3)) {
  if (!FUNC_0(VAR_3))
   continue;




  VAR_7[VAR_6] = FUNC_3(VAR_3);
  VAR_9[VAR_6] = VAR_10;


  VAR_3 = FUNC_2(VAR_2, VAR_3,
      VAR_3->n + 1 + VAR_3->insn.imm);
  VAR_10 = VAR_3->subprog_idx;
  VAR_6++;
  goto process_subprog;
 }




 if (VAR_6 == 0)
  return VAR_4;

 VAR_5 -= VAR_8[VAR_6];
 VAR_6--;
 VAR_3 = VAR_7[VAR_6];
 VAR_10 = VAR_9[VAR_6];
 goto continue_subprog;
}

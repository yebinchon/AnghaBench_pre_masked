
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int stack_frame_depth; TYPE_1__* subprog; } ;
struct nfp_insn_meta {size_t subprog_idx; } ;
struct TYPE_2__ {unsigned int stack_depth; } ;


 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static void
FUNC_2(struct nfp_prog *VAR_0, struct nfp_insn_meta *VAR_1)
{
 unsigned int VAR_2 = VAR_0->subprog[VAR_1->subprog_idx].stack_depth;

 VAR_0->stack_frame_depth = FUNC_1(VAR_2, 4);
 FUNC_0(VAR_0, VAR_1);
}

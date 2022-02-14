
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {int ninstrs; struct nand_op_instr const* instrs; } ;
struct nand_op_instr {int dummy; } ;



__attribute__((used)) static inline const struct nand_op_instr *
FUNC_0(const struct nand_subop *VAR_0, int *VAR_1)
{
 if (*VAR_1 + 1 >= VAR_0->ninstrs)
  return ((void*)0);

 (*VAR_1)++;

 return &VAR_0->instrs[*VAR_1];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ninstrs; scalar_t__ last_instr_end_off; } ;
struct nand_op_parser_ctx {TYPE_1__ subop; } ;



__attribute__((used)) static int FUNC_0(const struct nand_op_parser_ctx *VAR_0,
      const struct nand_op_parser_ctx *VAR_1)
{
 if (VAR_0->subop.ninstrs < VAR_1->subop.ninstrs)
  return -1;
 else if (VAR_0->subop.ninstrs > VAR_1->subop.ninstrs)
  return 1;

 if (VAR_0->subop.last_instr_end_off < VAR_1->subop.last_instr_end_off)
  return -1;
 else if (VAR_0->subop.last_instr_end_off > VAR_1->subop.last_instr_end_off)
  return 1;

 return 0;
}

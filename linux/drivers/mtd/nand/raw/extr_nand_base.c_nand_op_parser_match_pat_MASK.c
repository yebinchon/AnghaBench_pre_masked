
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_op_parser_pattern {unsigned int nelems; TYPE_2__* elems; } ;
struct TYPE_3__ {unsigned int first_instr_start_off; unsigned int ninstrs; unsigned int last_instr_end_off; struct nand_op_instr* instrs; } ;
struct nand_op_parser_ctx {int ninstrs; TYPE_1__ subop; struct nand_op_instr* instrs; } ;
struct nand_op_instr {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ type; int optional; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,struct nand_op_instr const*,unsigned int*) ;

__attribute__((used)) static bool
FUNC_1(const struct nand_op_parser_pattern *VAR_0,
    struct nand_op_parser_ctx *VAR_1)
{
 unsigned int VAR_2 = VAR_1->subop.first_instr_start_off;
 const struct nand_op_instr *VAR_3 = VAR_1->instrs + VAR_1->ninstrs;
 const struct nand_op_instr *VAR_4 = VAR_1->subop.instrs;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_0->nelems && VAR_4 < VAR_3; VAR_5++) {







  if (VAR_4->type != VAR_0->elems[VAR_5].type) {
   if (!VAR_0->elems[VAR_5].optional)
    return 0;

   continue;
  }
  if (FUNC_0(&VAR_0->elems[VAR_5], VAR_4,
          &VAR_2)) {
   VAR_6++;
   VAR_5++;
   break;
  }

  VAR_4++;
  VAR_6++;
  VAR_2 = 0;
 }







 if (!VAR_6)
  return 0;






 for (; VAR_5 < VAR_0->nelems; VAR_5++) {
  if (!VAR_0->elems[VAR_5].optional)
   return 0;
 }





 VAR_1->subop.ninstrs = VAR_6;
 VAR_1->subop.last_instr_end_off = VAR_2;

 return 1;
}

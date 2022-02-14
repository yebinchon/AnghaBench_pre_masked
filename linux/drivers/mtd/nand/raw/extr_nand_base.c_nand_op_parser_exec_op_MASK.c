
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_operation {scalar_t__ instrs; scalar_t__ ninstrs; } ;
struct nand_op_parser_pattern {int (* exec ) (struct nand_chip*,TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ instrs; scalar_t__ ninstrs; scalar_t__ last_instr_end_off; scalar_t__ first_instr_start_off; } ;
struct nand_op_parser_ctx {scalar_t__ instrs; scalar_t__ ninstrs; TYPE_1__ subop; } ;
struct nand_op_parser {unsigned int npatterns; struct nand_op_parser_pattern* patterns; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nand_op_parser_ctx*,struct nand_op_parser_ctx*) ;
 int FUNC_1 (struct nand_op_parser_pattern const*,struct nand_op_parser_ctx*) ;
 int FUNC_2 (struct nand_op_parser_ctx*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct nand_chip*,TYPE_1__*) ;

int FUNC_5(struct nand_chip *VAR_1,
      const struct nand_op_parser *VAR_2,
      const struct nand_operation *VAR_3, bool VAR_4)
{
 struct nand_op_parser_ctx VAR_5 = {
  .subop.instrs = VAR_3->instrs,
  .instrs = VAR_3->instrs,
  .ninstrs = VAR_3->ninstrs,
 };
 unsigned int VAR_6;

 while (VAR_5.subop.instrs < VAR_3->instrs + VAR_3->ninstrs) {
  const struct nand_op_parser_pattern *VAR_7;
  struct nand_op_parser_ctx VAR_8;
  int VAR_9, VAR_10 = -1;

  for (VAR_6 = 0; VAR_6 < VAR_2->npatterns; VAR_6++) {
   struct nand_op_parser_ctx VAR_11 = VAR_5;

   VAR_7 = &VAR_2->patterns[VAR_6];
   if (!FUNC_1(VAR_7, &VAR_11))
    continue;

   if (VAR_10 >= 0 &&
       FUNC_0(&VAR_11, &VAR_8) <= 0)
    continue;

   VAR_10 = VAR_6;
   VAR_8 = VAR_11;
  }

  if (VAR_10 < 0) {
   FUNC_3("->exec_op() parser: pattern not found!\n");
   return -VAR_0;
  }

  VAR_5 = VAR_8;
  FUNC_2(&VAR_5);

  if (!VAR_4) {
   VAR_7 = &VAR_2->patterns[VAR_10];
   VAR_9 = VAR_7->exec(VAR_1, &VAR_5.subop);
   if (VAR_9)
    return VAR_9;
  }





  VAR_5.subop.instrs = VAR_5.subop.instrs + VAR_5.subop.ninstrs;
  if (VAR_5.subop.last_instr_end_off)
   VAR_5.subop.instrs -= 1;

  VAR_5.subop.first_instr_start_off = VAR_5.subop.last_instr_end_off;
 }

 return 0;
}

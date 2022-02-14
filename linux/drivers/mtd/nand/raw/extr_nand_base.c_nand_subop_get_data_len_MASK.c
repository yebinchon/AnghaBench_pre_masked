
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_subop {int ninstrs; int last_instr_end_off; TYPE_3__* instrs; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ ctx; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct nand_subop const*,unsigned int) ;
 int FUNC_3 (struct nand_subop const*,unsigned int) ;

unsigned int FUNC_4(const struct nand_subop *VAR_0,
         unsigned int VAR_1)
{
 int VAR_2 = 0, VAR_3;

 if (FUNC_0(!FUNC_3(VAR_0, VAR_1) ||
      !FUNC_1(&VAR_0->instrs[VAR_1])))
  return 0;

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (VAR_1 == VAR_0->ninstrs - 1 &&
     VAR_0->last_instr_end_off)
  VAR_3 = VAR_0->last_instr_end_off;
 else
  VAR_3 = VAR_0->instrs[VAR_1].ctx.data.len;

 return VAR_3 - VAR_2;
}

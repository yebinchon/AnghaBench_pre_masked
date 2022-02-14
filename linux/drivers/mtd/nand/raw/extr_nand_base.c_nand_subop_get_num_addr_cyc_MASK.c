
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nand_subop {int ninstrs; int last_instr_end_off; TYPE_3__* instrs; } ;
struct TYPE_4__ {int naddrs; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nand_subop const*,unsigned int) ;
 int FUNC_2 (struct nand_subop const*,unsigned int) ;

unsigned int FUNC_3(const struct nand_subop *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_0(!FUNC_2(VAR_1, VAR_2) ||
      VAR_1->instrs[VAR_2].type != VAR_0))
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_2 == VAR_1->ninstrs - 1 &&
     VAR_1->last_instr_end_off)
  VAR_4 = VAR_1->last_instr_end_off;
 else
  VAR_4 = VAR_1->instrs[VAR_2].ctx.addr.naddrs;

 return VAR_4 - VAR_3;
}

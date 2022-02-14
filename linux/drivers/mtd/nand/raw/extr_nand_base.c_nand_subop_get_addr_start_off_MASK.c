
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_subop {TYPE_1__* instrs; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct nand_subop const*,unsigned int) ;
 int FUNC_2 (struct nand_subop const*,unsigned int) ;

unsigned int FUNC_3(const struct nand_subop *VAR_1,
        unsigned int VAR_2)
{
 if (FUNC_0(!FUNC_2(VAR_1, VAR_2) ||
      VAR_1->instrs[VAR_2].type != VAR_0))
  return 0;

 return FUNC_1(VAR_1, VAR_2);
}

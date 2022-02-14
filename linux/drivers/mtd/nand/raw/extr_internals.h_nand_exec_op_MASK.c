
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_operation {scalar_t__ cs; } ;
struct nand_chip {TYPE_2__* controller; int base; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* exec_op ) (struct nand_chip*,struct nand_operation const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nand_chip*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct nand_chip*,struct nand_operation const*,int) ;

__attribute__((used)) static inline int FUNC_4(struct nand_chip *VAR_2,
          const struct nand_operation *VAR_3)
{
 if (!FUNC_1(VAR_2))
  return -VAR_1;

 if (FUNC_0(VAR_3->cs >= FUNC_2(&VAR_2->base)))
  return -VAR_0;

 return VAR_2->controller->ops->exec_op(VAR_2, VAR_3, 0);
}

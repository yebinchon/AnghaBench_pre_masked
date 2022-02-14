
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {TYPE_2__* controller; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int exec_op; } ;



__attribute__((used)) static inline bool FUNC_0(struct nand_chip *VAR_0)
{
 if (!VAR_0->controller || !VAR_0->controller->ops ||
     !VAR_0->controller->ops->exec_op)
  return 0;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nand_chip {TYPE_2__* controller; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* attach_chip ) (struct nand_chip*) ;} ;


 int FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_0)
{
 if (VAR_0->controller->ops && VAR_0->controller->ops->attach_chip)
  return VAR_0->controller->ops->attach_chip(VAR_0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* desc; } ;
struct nand_chip {TYPE_3__ manufacturer; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* init ) (struct nand_chip*) ;} ;


 int FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_0)
{
 if (!VAR_0->manufacturer.desc || !VAR_0->manufacturer.desc->ops ||
     !VAR_0->manufacturer.desc->ops->init)
  return 0;

 return VAR_0->manufacturer.desc->ops->init(VAR_0);
}

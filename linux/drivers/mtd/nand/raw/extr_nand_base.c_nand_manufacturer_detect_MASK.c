
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nand_memory_organization {int bits_per_cell; } ;
struct TYPE_7__ {TYPE_4__* desc; } ;
struct TYPE_5__ {int * data; } ;
struct nand_chip {TYPE_3__ manufacturer; TYPE_1__ id; int base; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_6__ {int (* detect ) (struct nand_chip*) ;} ;


 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ) ;
 struct nand_memory_organization* FUNC_2 (int *) ;
 int FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_0)
{




 if (VAR_0->manufacturer.desc && VAR_0->manufacturer.desc->ops &&
     VAR_0->manufacturer.desc->ops->detect) {
  struct nand_memory_organization *VAR_1;

  VAR_1 = FUNC_2(&VAR_0->base);


  VAR_1->bits_per_cell = FUNC_1(VAR_0->id.data[2]);
  VAR_0->manufacturer.desc->ops->detect(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }
}

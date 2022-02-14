
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * dev_ready; } ;
struct nand_chip {TYPE_2__ legacy; } ;
struct atmel_nand {int numcs; TYPE_3__* activecs; TYPE_3__* cs; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ rb; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 struct atmel_nand* FUNC_0 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_2, int VAR_3)
{
 struct atmel_nand *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 < 0 || VAR_3 >= VAR_4->numcs) {
  VAR_4->activecs = ((void*)0);
  VAR_2->legacy.dev_ready = ((void*)0);
  return;
 }

 VAR_4->activecs = &VAR_4->cs[VAR_3];

 if (VAR_4->activecs->rb.type == VAR_0)
  VAR_2->legacy.dev_ready = VAR_1;
}

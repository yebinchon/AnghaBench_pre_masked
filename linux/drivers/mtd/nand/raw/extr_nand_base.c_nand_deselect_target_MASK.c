
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* select_chip ) (struct nand_chip*,int) ;} ;
struct nand_chip {int cur_cs; TYPE_1__ legacy; } ;


 int FUNC_0 (struct nand_chip*,int) ;

void FUNC_1(struct nand_chip *VAR_0)
{
 if (VAR_0->legacy.select_chip)
  VAR_0->legacy.select_chip(VAR_0, -1);

 VAR_0->cur_cs = -1;
}

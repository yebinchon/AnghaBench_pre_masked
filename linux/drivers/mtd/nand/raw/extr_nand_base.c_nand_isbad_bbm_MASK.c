
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* block_bad ) (struct nand_chip*,int ) ;} ;
struct nand_chip {TYPE_1__ legacy; } ;
typedef int loff_t ;


 int FUNC_0 (struct nand_chip*,int ) ;
 int FUNC_1 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_0, loff_t VAR_1)
{
 if (VAR_0->legacy.block_bad)
  return VAR_0->legacy.block_bad(VAR_0, VAR_1);

 return FUNC_0(VAR_0, VAR_1);
}

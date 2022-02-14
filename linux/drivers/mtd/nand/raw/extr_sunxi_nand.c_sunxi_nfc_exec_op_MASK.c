
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_nand_chip {TYPE_1__* sels; } ;
struct nand_operation {size_t cs; } ;
struct nand_op_parser {int dummy; } ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ rb; } ;


 int FUNC_0 (struct nand_chip*,struct nand_op_parser const*,struct nand_operation const*,int) ;
 struct nand_op_parser VAR_0 ;
 struct nand_op_parser VAR_1 ;
 int FUNC_1 (struct nand_chip*,size_t) ;
 struct sunxi_nand_chip* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_2,
        const struct nand_operation *VAR_3, bool VAR_4)
{
 struct sunxi_nand_chip *VAR_5 = FUNC_2(VAR_2);
 const struct nand_op_parser *VAR_6;

 FUNC_1(VAR_2, VAR_3->cs);

 if (VAR_5->sels[VAR_3->cs].rb >= 0)
  VAR_6 = &VAR_1;
 else
  VAR_6 = &VAR_0;

 return FUNC_0(VAR_2, VAR_6, VAR_3, VAR_4);
}

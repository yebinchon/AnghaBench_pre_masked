
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; scalar_t__ algo; TYPE_2__* calc_buf; TYPE_2__* code_buf; scalar_t__ priv; } ;
struct nand_chip {TYPE_2__* badblock_pattern; TYPE_1__ ecc; TYPE_2__* data_buf; TYPE_2__* bbt; } ;
struct nand_bch_control {int dummy; } ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct nand_bch_control*) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*) ;

void FUNC_5(struct nand_chip *VAR_3)
{
 if (VAR_3->ecc.mode == VAR_2 &&
     VAR_3->ecc.algo == VAR_1)
  FUNC_1((struct nand_bch_control *)VAR_3->ecc.priv);


 FUNC_0(VAR_3->bbt);
 FUNC_0(VAR_3->data_buf);
 FUNC_0(VAR_3->ecc.code_buf);
 FUNC_0(VAR_3->ecc.calc_buf);


 if (VAR_3->badblock_pattern && VAR_3->badblock_pattern->options
   & VAR_0)
  FUNC_0(VAR_3->badblock_pattern);


 FUNC_3(VAR_3);


 FUNC_2(VAR_3);


 FUNC_4(VAR_3);
}

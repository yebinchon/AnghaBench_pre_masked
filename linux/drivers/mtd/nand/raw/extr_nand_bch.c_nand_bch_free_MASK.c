
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_bch_control {struct nand_bch_control* eccmask; struct nand_bch_control* errloc; int bch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_bch_control*) ;

void FUNC_2(struct nand_bch_control *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->bch);
  FUNC_1(VAR_0->errloc);
  FUNC_1(VAR_0->eccmask);
  FUNC_1(VAR_0);
 }
}

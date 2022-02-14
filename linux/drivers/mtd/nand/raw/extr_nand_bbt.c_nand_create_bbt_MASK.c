
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_options; int badblock_pattern; int * bbt_md; int * bbt_td; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*,int ) ;

int FUNC_2(struct nand_chip *VAR_6)
{
 int VAR_7;


 if (VAR_6->bbt_options & VAR_1) {

  if (!VAR_6->bbt_td) {
   if (VAR_6->bbt_options & VAR_0) {
    VAR_6->bbt_td = &VAR_3;
    VAR_6->bbt_md = &VAR_5;
   } else {
    VAR_6->bbt_td = &VAR_2;
    VAR_6->bbt_md = &VAR_4;
   }
  }
 } else {
  VAR_6->bbt_td = ((void*)0);
  VAR_6->bbt_md = ((void*)0);
 }

 if (!VAR_6->badblock_pattern) {
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 return FUNC_1(VAR_6, VAR_6->badblock_pattern);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int bbt_options; int options; struct nand_bbt_descr* badblock_pattern; int badblockpos; } ;
struct nand_bbt_descr {int options; int len; int pattern; int offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nand_bbt_descr* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct nand_chip *VAR_7)
{
 struct nand_bbt_descr *VAR_8;
 if (VAR_7->badblock_pattern) {
  FUNC_1("Bad block pattern already allocated; not replacing\n");
  return -VAR_1;
 }
 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 VAR_8->options = VAR_7->bbt_options & VAR_0;
 VAR_8->offs = VAR_7->badblockpos;
 VAR_8->len = (VAR_7->options & VAR_5) ? 2 : 1;
 VAR_8->pattern = VAR_6;
 VAR_8->options |= VAR_4;
 VAR_7->badblock_pattern = VAR_8;
 return 0;
}

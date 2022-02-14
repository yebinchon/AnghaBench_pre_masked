
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int page_buf; } ;
struct nand_bbt_descr {int dummy; } ;
struct mtd_info {struct onenand_chip* priv; } ;


 int FUNC_0 (struct mtd_info*,int ,struct nand_bbt_descr*,int) ;

__attribute__((used)) static inline int FUNC_1 (struct mtd_info *VAR_0, struct nand_bbt_descr *VAR_1)
{
 struct onenand_chip *VAR_2 = VAR_0->priv;

 return FUNC_0(VAR_0, VAR_2->page_buf, VAR_1, -1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int size; scalar_t__ postpad; scalar_t__ prepad; int bytes; } ;
struct nand_chip {int bbt_options; int * bbt_md; int * bbt_td; TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;
struct lpc32xx_nand_host {scalar_t__ data_buf; int * ecc_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mtd_info*,int *) ;
 struct lpc32xx_nand_host* FUNC_1 (struct nand_chip*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_2(VAR_6);
 struct lpc32xx_nand_host *VAR_8 = FUNC_1(VAR_6);


 VAR_8->ecc_buf = (uint32_t *)(VAR_8->data_buf + VAR_0);






 if (VAR_7->writesize <= 512)
  FUNC_0(VAR_7, &VAR_5);


 VAR_6->ecc.size = 256;
 VAR_6->ecc.bytes = VAR_1;
 VAR_6->ecc.prepad = 0;
 VAR_6->ecc.postpad = 0;






 if ((VAR_6->bbt_options & VAR_2) &&
     VAR_7->writesize <= 512) {
  VAR_6->bbt_td = &VAR_3;
  VAR_6->bbt_md = &VAR_4;
 }

 return 0;
}

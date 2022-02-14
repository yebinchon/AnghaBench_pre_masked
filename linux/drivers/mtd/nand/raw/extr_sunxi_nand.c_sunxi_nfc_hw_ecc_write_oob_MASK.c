
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* write_page ) (struct nand_chip*,int *,int,int) ;} ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_info {int writesize; } ;


 int FUNC_0 (int *,int,int ) ;
 int * FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_3(VAR_0);
 u8 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 FUNC_0(VAR_3, 0xff, VAR_2->writesize);
 VAR_4 = VAR_0->ecc.write_page(VAR_0, VAR_3, 1, VAR_1);
 if (VAR_4)
  return VAR_4;


 return FUNC_2(VAR_0);
}

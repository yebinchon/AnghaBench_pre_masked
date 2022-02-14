
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int oob_poi; } ;
struct mtd_info {int oobsize; int writesize; } ;
struct gpmi_nand_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct gpmi_nand_data*) ;
 int FUNC_1 (int ,int ,int) ;
 struct gpmi_nand_data* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int ,int ,int) ;
 struct mtd_info* FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_0, int VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_4(VAR_0);
 struct gpmi_nand_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;


 FUNC_1(VAR_0->oob_poi, ~0, VAR_2->oobsize);


 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2->writesize, VAR_0->oob_poi,
    VAR_2->oobsize);
 if (VAR_4)
  return VAR_4;






 if (FUNC_0(VAR_3)) {

  VAR_4 = FUNC_3(VAR_0, VAR_1, 0, VAR_0->oob_poi, 1);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}

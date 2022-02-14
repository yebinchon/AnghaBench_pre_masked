
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct mtd_oob_region {scalar_t__ length; scalar_t__ offset; } ;
struct mtd_info {scalar_t__ writesize; } ;
struct bch_geometry {scalar_t__ page_size; } ;
struct gpmi_nand_data {struct bch_geometry bch_geometry; } ;


 int VAR_0 ;
 struct nand_chip* FUNC_0 (struct mtd_info*) ;
 struct gpmi_nand_data* FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_1, int VAR_2,
         struct mtd_oob_region *VAR_3)
{
 struct nand_chip *VAR_4 = FUNC_0(VAR_1);
 struct gpmi_nand_data *VAR_5 = FUNC_1(VAR_4);
 struct bch_geometry *VAR_6 = &VAR_5->bch_geometry;

 if (VAR_2)
  return -VAR_0;

 VAR_3->offset = 0;
 VAR_3->length = VAR_6->page_size - VAR_1->writesize;

 return 0;
}

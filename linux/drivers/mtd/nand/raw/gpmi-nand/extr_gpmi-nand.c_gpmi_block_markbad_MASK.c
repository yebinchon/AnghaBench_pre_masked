
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nand_chip {int chip_shift; int page_shift; } ;
struct mtd_info {int writesize; } ;
struct gpmi_nand_data {scalar_t__* data_buffer_dma; } ;
typedef int loff_t ;


 int FUNC_0 (struct gpmi_nand_data*) ;
 int FUNC_1 (struct nand_chip*) ;
 struct gpmi_nand_data* FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (struct nand_chip*,int,int,scalar_t__*,int) ;
 int FUNC_4 (struct nand_chip*,int) ;
 struct mtd_info* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_0, loff_t VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_5(VAR_0);
 struct gpmi_nand_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;
 uint8_t *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = (int)(VAR_1 >> VAR_0->chip_shift);
 FUNC_4(VAR_0, VAR_8);

 VAR_6 = !FUNC_0(VAR_3) ? VAR_2->writesize : 0;


 VAR_5 = VAR_3->data_buffer_dma;
 VAR_5[0] = 0;


 VAR_7 = (int)(VAR_1 >> VAR_0->page_shift);

 VAR_4 = FUNC_3(VAR_0, VAR_7, VAR_6, VAR_5, 1);

 FUNC_1(VAR_0);

 return VAR_4;
}

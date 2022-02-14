
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int const* oob_poi; } ;
struct mtd_info {int writesize; } ;
struct bch_geometry {int page_size; int auxiliary_size; } ;
struct gpmi_nand_data {int bch; int * auxiliary_virt; int * data_buffer_dma; scalar_t__ swap_block_mark; int dev; struct bch_geometry bch_geometry; } ;


 int FUNC_0 (struct gpmi_nand_data*,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct gpmi_nand_data*) ;
 int FUNC_3 (int *,int const*,int ) ;
 struct gpmi_nand_data* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int,int ,int const*,int ) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, const uint8_t *VAR_1,
          int VAR_2, int VAR_3)
{
 struct mtd_info *VAR_4 = FUNC_6(VAR_0);
 struct gpmi_nand_data *VAR_5 = FUNC_4(VAR_0);
 struct bch_geometry *VAR_6 = &VAR_5->bch_geometry;
 int VAR_7;

 FUNC_1(VAR_5->dev, "ecc write page.\n");

 FUNC_2(VAR_5);
 VAR_5->bch = 1;

 FUNC_3(VAR_5->auxiliary_virt, VAR_0->oob_poi, VAR_6->auxiliary_size);

 if (VAR_5->swap_block_mark) {




  FUNC_3(VAR_5->data_buffer_dma, VAR_1, VAR_4->writesize);
  VAR_1 = VAR_5->data_buffer_dma;
  FUNC_0(VAR_5, VAR_5->data_buffer_dma,
        VAR_5->auxiliary_virt);
 }

 VAR_7 = FUNC_5(VAR_0, VAR_3, 0, VAR_1, VAR_6->page_size);

 return VAR_7;
}

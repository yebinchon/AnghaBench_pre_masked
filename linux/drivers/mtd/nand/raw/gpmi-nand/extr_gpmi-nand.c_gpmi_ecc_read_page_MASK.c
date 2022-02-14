
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int * oob_poi; } ;
struct mtd_info {int oobsize; } ;
struct bch_geometry {int auxiliary_status_offset; int ecc_chunk_count; int page_size; } ;
struct gpmi_nand_data {int bch; scalar_t__ auxiliary_virt; struct bch_geometry bch_geometry; } ;


 int FUNC_0 (struct gpmi_nand_data*,int *,scalar_t__) ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 unsigned int FUNC_2 (struct nand_chip*,int *,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 struct gpmi_nand_data* FUNC_4 (struct nand_chip*) ;
 int FUNC_5 (struct nand_chip*,int,int ,int *,int ) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_0, uint8_t *VAR_1,
         int VAR_2, int VAR_3)
{
 struct gpmi_nand_data *VAR_4 = FUNC_4(VAR_0);
 struct mtd_info *VAR_5 = FUNC_6(VAR_0);
 struct bch_geometry *VAR_6 = &VAR_4->bch_geometry;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_1(VAR_4);
 VAR_4->bch = 1;

 VAR_8 = FUNC_5(VAR_0, VAR_3, 0, VAR_1, VAR_6->page_size);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_2(VAR_0, VAR_1, 0,
        VAR_6->ecc_chunk_count,
        VAR_6->auxiliary_status_offset);


 FUNC_0(VAR_4, VAR_1, VAR_4->auxiliary_virt);

 if (VAR_2) {
  FUNC_3(VAR_0->oob_poi, ~0, VAR_5->oobsize);
  VAR_0->oob_poi[0] = ((uint8_t *)VAR_4->auxiliary_virt)[0];
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_geometry {int ecc_strength; unsigned int gf_len; unsigned int ecc_chunk_size; int page_size; int metadata_size; scalar_t__ ecc_chunk_count; } ;
struct gpmi_nand_data {int bch_flashlayout0; int bch_flashlayout1; struct bch_geometry bch_geometry; } ;


 int FUNC_0 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_1 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_2 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_6 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_7 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct gpmi_nand_data *VAR_0)
{
 struct bch_geometry *VAR_1 = &VAR_0->bch_geometry;
 unsigned int VAR_2 = VAR_1->ecc_strength >> 1;
 unsigned int VAR_3 = VAR_1->gf_len;
 unsigned int VAR_4 = VAR_1->ecc_chunk_size;

 VAR_0->bch_flashlayout0 =
  FUNC_4(VAR_1->ecc_chunk_count - 1) |
  FUNC_3(VAR_1->metadata_size) |
  FUNC_1(VAR_2, VAR_0) |
  FUNC_2(VAR_3, VAR_0) |
  FUNC_0(VAR_4, VAR_0);

 VAR_0->bch_flashlayout1 =
  FUNC_8(VAR_1->page_size) |
  FUNC_6(VAR_2, VAR_0) |
  FUNC_7(VAR_3, VAR_0) |
  FUNC_5(VAR_4, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int size; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct bch_geometry {int gf_len; int ecc_strength; int block_mark_byte_offset; int metadata_size; int ecc_chunk_size; } ;
struct gpmi_nand_data {int bch_flashlayout0; int bch_flashlayout1; int bch; int dev; scalar_t__ swap_block_mark; struct bch_geometry bch_geometry; } ;


 int FUNC_0 (int ,struct gpmi_nand_data*) ;
 int FUNC_1 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_2 (int,struct gpmi_nand_data*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct gpmi_nand_data*) ;
 int FUNC_6 (unsigned int,struct gpmi_nand_data*) ;
 int FUNC_7 (int,struct gpmi_nand_data*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int,int,int,int,...) ;
 unsigned int FUNC_10 (struct nand_chip*,int *,int,int,int) ;
 int FUNC_11 (struct nand_chip*,int *,int ,int) ;
 struct gpmi_nand_data* FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct nand_chip*,int,int,int *,int) ;

__attribute__((used)) static int FUNC_14(struct nand_chip *VAR_0, uint32_t VAR_1,
     uint32_t VAR_2, uint8_t *VAR_3, int VAR_4)
{
 struct gpmi_nand_data *VAR_5 = FUNC_12(VAR_0);
 struct bch_geometry *VAR_6 = &VAR_5->bch_geometry;
 int VAR_7 = VAR_0->ecc.size;
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18;


 VAR_16 = VAR_6->gf_len * VAR_6->ecc_strength / 8;


 VAR_13 = VAR_1 / VAR_7;
 VAR_14 = (VAR_1 + VAR_2 - 1) / VAR_7;

 if (VAR_5->swap_block_mark) {







  VAR_15 = VAR_6->block_mark_byte_offset / VAR_7;
  if (VAR_14 >= VAR_15 && VAR_13 <= VAR_15) {
   FUNC_9(VAR_5->dev,
    "page:%d, first:%d, last:%d, marker at:%d\n",
    VAR_4, VAR_13, VAR_14, VAR_15);
   return FUNC_11(VAR_0, VAR_3, 0, VAR_4);
  }
 }

 VAR_8 = VAR_6->metadata_size;
 if (VAR_13) {
  VAR_17 = VAR_8 + (VAR_7 + VAR_16) * VAR_13;
  VAR_8 = 0;
  VAR_3 = VAR_3 + VAR_13 * VAR_7;
 }

 VAR_16 = VAR_6->gf_len * VAR_6->ecc_strength / 8;

 VAR_9 = VAR_14 - VAR_13 + 1;
 VAR_10 = VAR_8 + (VAR_7 + VAR_16) * VAR_9;
 VAR_12 = VAR_6->ecc_strength >> 1;

 VAR_5->bch_flashlayout0 = FUNC_4(VAR_9 - 1) |
  FUNC_3(VAR_8) |
  FUNC_1(VAR_12, VAR_5) |
  FUNC_2(VAR_6->gf_len, VAR_5) |
  FUNC_0(VAR_6->ecc_chunk_size, VAR_5);

 VAR_5->bch_flashlayout1 = FUNC_8(VAR_10) |
  FUNC_6(VAR_12, VAR_5) |
  FUNC_7(VAR_6->gf_len, VAR_5) |
  FUNC_5(VAR_6->ecc_chunk_size, VAR_5);

 VAR_5->bch = 1;

 VAR_18 = FUNC_13(VAR_0, VAR_4, VAR_17, VAR_3, VAR_10);
 if (VAR_18)
  return VAR_18;

 FUNC_9(VAR_5->dev, "page:%d(%d:%d)%d, chunk:(%d:%d), BCH PG size:%d\n",
  VAR_4, VAR_1, VAR_2, VAR_17, VAR_13, VAR_9, VAR_10);

 VAR_11 = FUNC_10(VAR_0, VAR_3, VAR_13, VAR_14, VAR_8);

 return VAR_11;
}

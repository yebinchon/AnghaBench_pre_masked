
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int oobsize; int writesize; } ;
struct bch_geometry {int metadata_size; int gf_len; int ecc_chunk_size; int ecc_chunk_count; int ecc_strength; int page_size; int payload_size; unsigned int auxiliary_size; unsigned int auxiliary_status_offset; unsigned int block_mark_byte_offset; unsigned int block_mark_bit_offset; } ;
struct gpmi_nand_data {int swap_block_mark; TYPE_1__* devdata; int dev; int nand; struct bch_geometry bch_geometry; } ;
struct TYPE_2__ {int bch_max_ecc_strength; } ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (struct gpmi_nand_data*) ;
 int FUNC_3 (struct gpmi_nand_data*) ;
 struct mtd_info* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpmi_nand_data *VAR_1)
{
 struct bch_geometry *VAR_2 = &VAR_1->bch_geometry;
 struct mtd_info *VAR_3 = FUNC_4(&VAR_1->nand);
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;






 VAR_2->metadata_size = 10;


 VAR_2->gf_len = 13;


 VAR_2->ecc_chunk_size = 512;
 while (VAR_2->ecc_chunk_size < VAR_3->oobsize) {
  VAR_2->ecc_chunk_size *= 2;
  VAR_2->gf_len = 14;
 }

 VAR_2->ecc_chunk_count = VAR_3->writesize / VAR_2->ecc_chunk_size;


 VAR_2->ecc_strength = FUNC_2(VAR_1);
 if (!FUNC_3(VAR_1)) {
  FUNC_1(VAR_1->dev,
   "ecc strength: %d cannot be supported by the controller (%d)\n"
   "try to use minimum ecc strength that NAND chip required\n",
   VAR_2->ecc_strength,
   VAR_1->devdata->bch_max_ecc_strength);
  return -VAR_0;
 }

 VAR_2->page_size = VAR_3->writesize + VAR_2->metadata_size +
  (VAR_2->gf_len * VAR_2->ecc_strength * VAR_2->ecc_chunk_count) / 8;
 VAR_2->payload_size = VAR_3->writesize;







 VAR_4 = FUNC_0(VAR_2->metadata_size, 4);
 VAR_5 = FUNC_0(VAR_2->ecc_chunk_count, 4);

 VAR_2->auxiliary_size = VAR_4 + VAR_5;
 VAR_2->auxiliary_status_offset = VAR_4;

 if (!VAR_1->swap_block_mark)
  return 0;
 VAR_6 = VAR_3->writesize * 8 -
  (VAR_2->ecc_strength * VAR_2->gf_len * (VAR_2->ecc_chunk_count - 1)
    + VAR_2->metadata_size * 8);

 VAR_2->block_mark_byte_offset = VAR_6 / 8;
 VAR_2->block_mark_bit_offset = VAR_6 % 8;
 return 0;
}

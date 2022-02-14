
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_ecc_ctrl {int strength; int read_subpage; int size; int mode; int write_oob_raw; int read_oob_raw; int write_page_raw; int read_page_raw; int write_oob; int read_oob; int write_page; int read_page; } ;
struct nand_chip {int options; struct nand_ecc_ctrl ecc; } ;
struct mtd_info {int dummy; } ;
struct bch_geometry {int ecc_strength; int gf_len; int ecc_chunk_size; } ;
struct gpmi_nand_data {struct bch_geometry bch_geometry; struct nand_chip nand; } ;


 scalar_t__ FUNC_0 (struct gpmi_nand_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 int FUNC_2 (struct mtd_info*,int *) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct gpmi_nand_data *VAR_12)
{
 struct nand_chip *VAR_13 = &VAR_12->nand;
 struct mtd_info *VAR_14 = FUNC_3(VAR_13);
 struct nand_ecc_ctrl *VAR_15 = &VAR_13->ecc;
 struct bch_geometry *VAR_16 = &VAR_12->bch_geometry;
 int VAR_17;


 VAR_17 = FUNC_1(VAR_12);
 if (VAR_17)
  return VAR_17;


 VAR_15->read_page = VAR_4;
 VAR_15->write_page = VAR_9;
 VAR_15->read_oob = VAR_2;
 VAR_15->write_oob = VAR_7;
 VAR_15->read_page_raw = VAR_5;
 VAR_15->write_page_raw = VAR_10;
 VAR_15->read_oob_raw = VAR_3;
 VAR_15->write_oob_raw = VAR_8;
 VAR_15->mode = VAR_0;
 VAR_15->size = VAR_16->ecc_chunk_size;
 VAR_15->strength = VAR_16->ecc_strength;
 FUNC_2(VAR_14, &VAR_11);






 if (FUNC_0(VAR_12) &&
  ((VAR_16->gf_len * VAR_16->ecc_strength) % 8) == 0) {
  VAR_15->read_subpage = VAR_6;
  VAR_13->options |= VAR_1;
 }

 return 0;
}

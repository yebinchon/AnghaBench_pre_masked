
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int oobsize; } ;
struct bch_geometry {int metadata_size; int gf_len; int ecc_chunk_count; } ;
struct gpmi_nand_data {int nand; struct bch_geometry bch_geometry; } ;


 struct mtd_info* FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline int FUNC_2(struct gpmi_nand_data *VAR_0)
{
 struct bch_geometry *VAR_1 = &VAR_0->bch_geometry;
 struct mtd_info *VAR_2 = FUNC_0(&VAR_0->nand);
 int VAR_3;

 VAR_3 = ((VAR_2->oobsize - VAR_1->metadata_size) * 8)
   / (VAR_1->gf_len * VAR_1->ecc_chunk_count);


 return FUNC_1(VAR_3, 2);
}

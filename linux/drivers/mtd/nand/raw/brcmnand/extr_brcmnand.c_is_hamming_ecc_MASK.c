
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmnand_controller {int nand_version; } ;
struct brcmnand_cfg {scalar_t__ sector_size_1k; int spare_area_size; int ecc_level; } ;



__attribute__((used)) static inline bool FUNC_0(struct brcmnand_controller *VAR_0,
      struct brcmnand_cfg *VAR_1)
{
 if (VAR_0->nand_version <= 0x0701)
  return VAR_1->sector_size_1k == 0 && VAR_1->spare_area_size == 16 &&
   VAR_1->ecc_level == 15;
 else
  return VAR_1->sector_size_1k == 0 && ((VAR_1->spare_area_size == 16 &&
   VAR_1->ecc_level == 15) ||
   (VAR_1->spare_area_size == 28 && VAR_1->ecc_level == 16));
}

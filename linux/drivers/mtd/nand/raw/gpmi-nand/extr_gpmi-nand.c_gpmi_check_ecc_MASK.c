
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bch_geometry {int gf_len; scalar_t__ ecc_strength; } ;
struct gpmi_nand_data {TYPE_1__* devdata; struct bch_geometry bch_geometry; } ;
struct TYPE_2__ {scalar_t__ bch_max_ecc_strength; } ;


 scalar_t__ FUNC_0 (struct gpmi_nand_data*) ;

__attribute__((used)) static inline bool FUNC_1(struct gpmi_nand_data *VAR_0)
{
 struct bch_geometry *VAR_1 = &VAR_0->bch_geometry;


 if (FUNC_0(VAR_0)) {

  if (VAR_1->gf_len == 14)
   return 0;
 }
 return VAR_1->ecc_strength <= VAR_0->devdata->bch_max_ecc_strength;
}

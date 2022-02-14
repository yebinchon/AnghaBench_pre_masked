
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ecc_chunk_size; } ;
struct gpmi_nand_data {TYPE_1__ bch_geometry; scalar_t__ bch; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct gpmi_nand_data *VAR_0, int VAR_1)
{




 if (VAR_0->bch)
  return FUNC_0(VAR_1, VAR_0->bch_geometry.ecc_chunk_size);
 else
  return VAR_1;
}

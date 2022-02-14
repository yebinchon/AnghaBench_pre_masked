
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cfp_udf_layout {TYPE_1__* udfs; } ;
struct bcm_sf2_priv {int dummy; } ;
struct TYPE_2__ {int * slices; scalar_t__ base_offset; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct bcm_sf2_priv*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bcm_sf2_priv *VAR_1,
    const struct cfp_udf_layout *VAR_2,
    unsigned int VAR_3)
{
 u32 VAR_4 = VAR_2->udfs[VAR_3].base_offset;
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_0(VAR_1, VAR_2->udfs[VAR_3].slices[VAR_5],
       VAR_4 + VAR_5 * 4);
}

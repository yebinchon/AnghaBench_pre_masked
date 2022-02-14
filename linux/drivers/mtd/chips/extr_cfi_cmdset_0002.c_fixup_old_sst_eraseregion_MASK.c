
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int NumEraseRegions; } ;



__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_0)
{
 struct map_info *VAR_1 = VAR_0->priv;
 struct cfi_private *VAR_2 = VAR_1->fldrv_priv;







 VAR_2->cfiq->NumEraseRegions = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int flags; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {struct cfi_pri_intelext* cmdset_priv; } ;
struct cfi_pri_intelext {int FeatureSupport; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_1)
{
 struct map_info *VAR_2 = VAR_1->priv;
 struct cfi_private *VAR_3 = VAR_2->fldrv_priv;
 struct cfi_pri_intelext *VAR_4 = VAR_3->cmdset_priv;

 VAR_4->FeatureSupport |= (1 << 5);
 VAR_1->flags |= VAR_0;
}

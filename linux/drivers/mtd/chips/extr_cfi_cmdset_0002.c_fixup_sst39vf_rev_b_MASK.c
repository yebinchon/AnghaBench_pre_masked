
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {int addr_unlock1; int addr_unlock2; int sector_erase_cmd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0)
{
 struct map_info *VAR_1 = VAR_0->priv;
 struct cfi_private *VAR_2 = VAR_1->fldrv_priv;

 FUNC_1(VAR_0);

 VAR_2->addr_unlock1 = 0x555;
 VAR_2->addr_unlock2 = 0x2AA;

 VAR_2->sector_erase_cmd = FUNC_0(0x50);
}

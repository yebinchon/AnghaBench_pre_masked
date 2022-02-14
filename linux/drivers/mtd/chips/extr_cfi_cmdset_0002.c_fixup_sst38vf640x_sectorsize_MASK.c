
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {int name; struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct cfi_private {TYPE_1__* cfiq; } ;
struct TYPE_2__ {int* EraseRegionInfo; } ;


 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_0)
{
 struct map_info *VAR_1 = VAR_0->priv;
 struct cfi_private *VAR_2 = VAR_1->fldrv_priv;

 FUNC_0(VAR_0);





 VAR_2->cfiq->EraseRegionInfo[0] = 0x002003ff;
 FUNC_1("%s: Bad 38VF640x CFI data; adjusting sector size from 64 to 8KiB\n",
  VAR_0->name);
}

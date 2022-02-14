
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spear_snor_flash {int bank; int lock; } ;
struct spear_smi {int num_flashes; TYPE_1__* pdev; } ;
struct mtd_info {scalar_t__ erasesize; struct spear_smi* priv; } ;
struct erase_info {int addr; int len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct spear_snor_flash* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct spear_snor_flash*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct spear_smi*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_2, struct erase_info *VAR_3)
{
 struct spear_snor_flash *VAR_4 = FUNC_1(VAR_2);
 struct spear_smi *VAR_5 = VAR_2->priv;
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_4 || !VAR_5)
  return -VAR_1;

 VAR_8 = VAR_4->bank;
 if (VAR_8 > VAR_5->num_flashes - 1) {
  FUNC_0(&VAR_5->pdev->dev, "Invalid Bank Num");
  return -VAR_0;
 }

 VAR_6 = VAR_3->addr;
 VAR_9 = VAR_3->len;

 FUNC_3(&VAR_4->lock);


 while (VAR_9) {
  VAR_7 = FUNC_2(VAR_4, VAR_6);

  VAR_10 = FUNC_5(VAR_5, VAR_8, VAR_7, 4);
  if (VAR_10) {
   FUNC_4(&VAR_4->lock);
   return VAR_10;
  }
  VAR_6 += VAR_2->erasesize;
  VAR_9 -= VAR_2->erasesize;
 }

 FUNC_4(&VAR_4->lock);

 return 0;
}

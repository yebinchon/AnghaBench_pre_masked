
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {scalar_t__ erase_count; } ;
struct mtdswap_dev {scalar_t__ max_erase_count; int dev; struct mtd_info* mtd; } ;
struct mtd_info {int name; int erasesize; } ;
struct erase_info {int addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct erase_info*,int ,int) ;
 int FUNC_3 (struct mtd_info*,struct erase_info*) ;
 int FUNC_4 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_5 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct mtdswap_dev *VAR_2, struct swap_eb *VAR_3)
{
 struct mtd_info *VAR_4 = VAR_2->mtd;
 struct erase_info VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7;

 VAR_3->erase_count++;
 if (VAR_3->erase_count > VAR_2->max_erase_count)
  VAR_2->max_erase_count = VAR_3->erase_count;

retry:
 FUNC_2(&VAR_5, 0, sizeof(struct erase_info));
 VAR_5.addr = FUNC_4(VAR_2, VAR_3);
 VAR_5.len = VAR_4->erasesize;

 VAR_7 = FUNC_3(VAR_4, &VAR_5);
 if (VAR_7) {
  if (VAR_6++ < VAR_1) {
   FUNC_1(VAR_2->dev,
    "erase of erase block %#llx on %s failed",
    VAR_5.addr, VAR_4->name);
   FUNC_6();
   goto retry;
  }

  FUNC_0(VAR_2->dev, "Cannot erase erase block %#llx on %s\n",
   VAR_5.addr, VAR_4->name);

  FUNC_5(VAR_2, VAR_3);
  return -VAR_0;
 }

 return 0;
}

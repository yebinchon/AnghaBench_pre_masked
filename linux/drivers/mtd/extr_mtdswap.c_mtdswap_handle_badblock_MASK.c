
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_eb {int * root; int flags; } ;
struct mtdswap_dev {int dev; int mtd; int spare_eblks; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mtdswap_dev*,struct swap_eb*) ;
 int FUNC_4 (struct mtdswap_dev*,struct swap_eb*) ;

__attribute__((used)) static int FUNC_5(struct mtdswap_dev *VAR_1, struct swap_eb *VAR_2)
{
 int VAR_3;
 loff_t VAR_4;

 VAR_1->spare_eblks--;
 VAR_2->flags |= VAR_0;
 FUNC_3(VAR_1, VAR_2);
 VAR_2->root = ((void*)0);


 if (!FUNC_2(VAR_1->mtd))
  return 1;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 FUNC_0(VAR_1->dev, "Marking bad block at %08llx\n", VAR_4);
 VAR_3 = FUNC_1(VAR_1->mtd, VAR_4);

 if (VAR_3) {
  FUNC_0(VAR_1->dev, "Mark block bad failed for block at %08llx "
   "error %d\n", VAR_4, VAR_3);
  return VAR_3;
 }

 return 1;

}

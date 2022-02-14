
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u_long ;
struct page {int dummy; } ;
struct block2mtd_dev {TYPE_2__* blkdev; } ;
struct address_space {int dummy; } ;
typedef size_t loff_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (unsigned long*,int,int) ;
 unsigned long* FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

__attribute__((used)) static int FUNC_10(struct block2mtd_dev *VAR_2, loff_t VAR_3, size_t VAR_4)
{
 struct address_space *VAR_5 = VAR_2->blkdev->bd_inode->i_mapping;
 struct page *VAR_6;
 int VAR_7 = VAR_3 >> VAR_0;
 int VAR_8 = VAR_4 >> VAR_0;
 u_long *VAR_9;
 u_long *VAR_10;

 while (VAR_8) {
  VAR_6 = FUNC_6(VAR_5, VAR_7);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  VAR_10 = FUNC_5(VAR_6) + VAR_1;
  for (VAR_9=FUNC_5(VAR_6); VAR_9<VAR_10; VAR_9++)
   if (*VAR_9 != -1UL) {
    FUNC_3(VAR_6);
    FUNC_4(FUNC_5(VAR_6), 0xff, VAR_1);
    FUNC_8(VAR_6);
    FUNC_9(VAR_6);
    FUNC_2(VAR_5);
    break;
   }

  FUNC_7(VAR_6);
  VAR_8--;
  VAR_7++;
 }
 return 0;
}

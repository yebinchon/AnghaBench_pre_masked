
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct page {int dummy; } ;
struct mtd_info {struct block2mtd_dev* priv; } ;
struct block2mtd_dev {TYPE_2__* blkdev; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {int i_mapping; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
  size_t *VAR_5, u_char *VAR_6)
{
 struct block2mtd_dev *VAR_7 = VAR_2->priv;
 struct page *VAR_8;
 int VAR_9 = VAR_3 >> VAR_0;
 int VAR_10 = VAR_3 & (VAR_1-1);
 int VAR_11;

 while (VAR_4) {
  if ((VAR_10 + VAR_4) > VAR_1)
   VAR_11 = VAR_1 - VAR_10;
  else
   VAR_11 = VAR_4;
  VAR_4 = VAR_4 - VAR_11;

  VAR_8 = FUNC_4(VAR_7->blkdev->bd_inode->i_mapping, VAR_9);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);

  FUNC_2(VAR_6, FUNC_3(VAR_8) + VAR_10, VAR_11);
  FUNC_5(VAR_8);

  if (VAR_5)
   *VAR_5 += VAR_11;
  VAR_6 += VAR_11;
  VAR_10 = 0;
  VAR_9++;
 }
 return 0;
}

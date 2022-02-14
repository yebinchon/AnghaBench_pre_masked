
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct buffer_head {int b_size; } ;
struct block_device {struct inode* bd_inode; } ;
typedef int sector_t ;
typedef scalar_t__ pgoff_t ;
typedef int gfp_t ;
struct TYPE_3__ {int private_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_2 (struct page*,int,int) ;
 struct page* FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_4 (struct page*,struct block_device*,int,int) ;
 int FUNC_5 (struct page*,struct buffer_head*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 struct buffer_head* FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int
FUNC_14(struct block_device *VAR_3, sector_t VAR_4,
       pgoff_t VAR_5, int VAR_6, int VAR_7, gfp_t VAR_8)
{
 struct inode *VAR_9 = VAR_3->bd_inode;
 struct page *VAR_10;
 struct buffer_head *VAR_11;
 sector_t VAR_12;
 int VAR_13 = 0;
 gfp_t VAR_14;

 VAR_14 = FUNC_6(VAR_9->i_mapping, ~VAR_1) | VAR_8;







 VAR_14 |= VAR_2;

 VAR_10 = FUNC_3(VAR_9->i_mapping, VAR_5, VAR_14);

 FUNC_0(!FUNC_1(VAR_10));

 if (FUNC_8(VAR_10)) {
  VAR_11 = FUNC_7(VAR_10);
  if (VAR_11->b_size == VAR_6) {
   VAR_12 = FUNC_4(VAR_10, VAR_3,
      (sector_t)VAR_5 << VAR_7,
      VAR_6);
   goto done;
  }
  if (!FUNC_12(VAR_10))
   goto failed;
 }




 VAR_11 = FUNC_2(VAR_10, VAR_6, 1);






 FUNC_10(&VAR_9->i_mapping->private_lock);
 FUNC_5(VAR_10, VAR_11);
 VAR_12 = FUNC_4(VAR_10, VAR_3, (sector_t)VAR_5 << VAR_7,
   VAR_6);
 FUNC_11(&VAR_9->i_mapping->private_lock);
done:
 VAR_13 = (VAR_4 < VAR_12) ? 1 : -VAR_0;
failed:
 FUNC_13(VAR_10);
 FUNC_9(VAR_10);
 return VAR_13;
}

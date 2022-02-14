
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {unsigned long pr_entry_nr; struct buffer_head* pr_bitmap_bh; struct buffer_head* pr_desc_bh; } ;
struct nilfs_palloc_group_desc {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (struct inode*,unsigned long) ;
 struct nilfs_palloc_group_desc* FUNC_5 (struct inode*,unsigned long,struct buffer_head*,void*) ;
 unsigned long FUNC_6 (struct inode*) ;
 int FUNC_7 (unsigned char*,unsigned long,unsigned long,int *) ;
 int FUNC_8 (struct inode*,unsigned long,int,struct buffer_head**) ;
 int FUNC_9 (struct inode*,unsigned long,int,struct buffer_head**) ;
 int FUNC_10 (struct inode*,unsigned long,unsigned long*) ;
 int FUNC_11 (struct nilfs_palloc_group_desc*,int *,int) ;
 scalar_t__ FUNC_12 (struct nilfs_palloc_group_desc*,int *) ;
 unsigned long FUNC_13 (struct inode*) ;
 unsigned long FUNC_14 (struct inode*,unsigned long,unsigned long) ;

int FUNC_15(struct inode *VAR_1,
         struct nilfs_palloc_req *VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 struct nilfs_palloc_group_desc *VAR_5;
 unsigned char *VAR_6;
 void *VAR_7, *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 spinlock_t *VAR_18;
 int VAR_19, VAR_20;

 VAR_11 = FUNC_13(VAR_1);
 VAR_10 = VAR_11 - 1;
 VAR_9 = FUNC_10(VAR_1, VAR_2->pr_entry_nr, &VAR_12);
 VAR_15 = FUNC_6(VAR_1);

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16 += VAR_14) {
  if (VAR_9 >= VAR_11) {

   VAR_9 = 0;
   VAR_10 = FUNC_10(VAR_1, VAR_2->pr_entry_nr,
            &VAR_13) - 1;
  }
  VAR_20 = FUNC_9(VAR_1, VAR_9, 1, &VAR_3);
  if (VAR_20 < 0)
   return VAR_20;
  VAR_7 = FUNC_2(VAR_3->b_page);
  VAR_5 = FUNC_5(
   VAR_1, VAR_9, VAR_3, VAR_7);
  VAR_14 = FUNC_14(VAR_1, VAR_9,
          VAR_10);
  for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17++, VAR_5++, VAR_9++) {
   VAR_18 = FUNC_4(VAR_1, VAR_9);
   if (FUNC_12(VAR_5, VAR_18) > 0) {
    VAR_20 = FUNC_8(
     VAR_1, VAR_9, 1, &VAR_4);
    if (VAR_20 < 0)
     goto out_desc;
    VAR_8 = FUNC_2(VAR_4->b_page);
    VAR_6 = VAR_8 + FUNC_0(VAR_4);
    VAR_19 = FUNC_7(
     VAR_6, VAR_12,
     VAR_15, VAR_18);
    if (VAR_19 >= 0) {

     FUNC_11(
      VAR_5, VAR_18, -1);
     VAR_2->pr_entry_nr =
      VAR_15 * VAR_9 + VAR_19;
     FUNC_3(VAR_3->b_page);
     FUNC_3(VAR_4->b_page);

     VAR_2->pr_desc_bh = VAR_3;
     VAR_2->pr_bitmap_bh = VAR_4;
     return 0;
    }
    FUNC_3(VAR_4->b_page);
    FUNC_1(VAR_4);
   }

   VAR_12 = 0;
  }

  FUNC_3(VAR_3->b_page);
  FUNC_1(VAR_3);
 }


 return -VAR_0;

 out_desc:
 FUNC_3(VAR_3->b_page);
 FUNC_1(VAR_3);
 return VAR_20;
}

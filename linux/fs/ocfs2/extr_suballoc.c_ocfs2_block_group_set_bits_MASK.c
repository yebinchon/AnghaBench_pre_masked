
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_group_desc {int bg_free_bits_count; int bg_bits; int bg_blkno; void* bg_bitmap; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_group_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,unsigned long long,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_8 (struct inode*) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (int ,void*) ;
 int FUNC_12 (unsigned int,unsigned int) ;

int FUNC_13(handle_t *VAR_2,
          struct inode *VAR_3,
          struct ocfs2_group_desc *VAR_4,
          struct buffer_head *VAR_5,
          unsigned int VAR_6,
          unsigned int VAR_7)
{
 int VAR_8;
 void *VAR_9 = VAR_4->bg_bitmap;
 int VAR_10 = VAR_1;



 FUNC_0(!FUNC_2(VAR_4));
 FUNC_0(FUNC_4(VAR_4->bg_free_bits_count) < VAR_7);

 FUNC_12(VAR_6, VAR_7);

 if (FUNC_8(VAR_3))
  VAR_10 = VAR_0;

 VAR_8 = FUNC_9(VAR_2,
      FUNC_1(VAR_3),
      VAR_5,
      VAR_10);
 if (VAR_8 < 0) {
  FUNC_6(VAR_8);
  goto bail;
 }

 FUNC_3(&VAR_4->bg_free_bits_count, -VAR_7);
 if (FUNC_4(VAR_4->bg_free_bits_count) > FUNC_4(VAR_4->bg_bits)) {
  return FUNC_7(VAR_3->i_sb, "Group descriptor # %llu has bit count %u but claims %u are freed. num_bits %d\n",
       (unsigned long long)FUNC_5(VAR_4->bg_blkno),
       FUNC_4(VAR_4->bg_bits),
       FUNC_4(VAR_4->bg_free_bits_count),
       VAR_7);
 }
 while(VAR_7--)
  FUNC_11(VAR_6++, VAR_9);

 FUNC_10(VAR_2, VAR_5);

bail:
 return VAR_8;
}

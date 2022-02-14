
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_group_desc {int bg_free_bits_count; int bg_bits; int bg_blkno; scalar_t__ bg_bitmap; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ b_committed_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ocfs2_group_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned int,unsigned long*) ;
 int FUNC_11 (int ,char*,unsigned long long,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_2,
     struct inode *VAR_3,
     struct ocfs2_group_desc *VAR_4,
     struct buffer_head *VAR_5,
     unsigned int VAR_6,
     unsigned int VAR_7,
     void (*VAR_8)(unsigned int VAR_9,
       unsigned long *VAR_10))
{
 int VAR_11;
 unsigned int VAR_12;
 struct ocfs2_group_desc *VAR_13 = ((void*)0);



 FUNC_0(!FUNC_2(VAR_4));

 FUNC_15(VAR_6, VAR_7);

 FUNC_0(VAR_8 && !FUNC_12(VAR_3));
 VAR_11 = FUNC_13(VAR_2, FUNC_1(VAR_3),
      VAR_5,
      VAR_8 ?
      VAR_0 :
      VAR_1);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto bail;
 }

 if (VAR_8) {
  FUNC_4(VAR_5);
  VAR_13 = (struct ocfs2_group_desc *)
     FUNC_3(VAR_5)->b_committed_data;
  FUNC_0(!VAR_13);
 }

 VAR_12 = VAR_7;
 while(VAR_12--) {
  FUNC_10((VAR_6 + VAR_12),
    (unsigned long *) VAR_4->bg_bitmap);
  if (VAR_8)
   VAR_8(VAR_6 + VAR_12,
    (unsigned long *) VAR_13->bg_bitmap);
 }
 FUNC_6(&VAR_4->bg_free_bits_count, VAR_7);
 if (FUNC_7(VAR_4->bg_free_bits_count) > FUNC_7(VAR_4->bg_bits)) {
  if (VAR_8)
   FUNC_5(VAR_5);
  return FUNC_11(VAR_3->i_sb, "Group descriptor # %llu has bit count %u but claims %u are freed. num_bits %d\n",
       (unsigned long long)FUNC_8(VAR_4->bg_blkno),
       FUNC_7(VAR_4->bg_bits),
       FUNC_7(VAR_4->bg_free_bits_count),
       VAR_7);
 }

 if (VAR_8)
  FUNC_5(VAR_5);

 FUNC_14(VAR_2, VAR_5);
bail:
 return VAR_11;
}

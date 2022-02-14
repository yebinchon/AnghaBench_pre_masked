
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_cached_block_free {struct ocfs2_cached_block_free* free_next; int free_bit; scalar_t__ free_blk; scalar_t__ free_bg; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ocfs2_cached_block_free*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_super*,int *) ;
 int FUNC_9 (int *,struct inode*,struct buffer_head*,int ,scalar_t__,int) ;
 struct inode* FUNC_10 (struct ocfs2_super*,int,int) ;
 int FUNC_11 (struct inode*,struct buffer_head**,int) ;
 int FUNC_12 (struct inode*,int) ;
 int * FUNC_13 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (unsigned long long,int ) ;

__attribute__((used)) static int FUNC_16(struct ocfs2_super *VAR_2,
        int VAR_3,
        int VAR_4,
        struct ocfs2_cached_block_free *VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 handle_t *VAR_8;
 struct inode *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_cached_block_free *VAR_11;

 VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_4);
 if (!VAR_9) {
  VAR_6 = -VAR_0;
  FUNC_7(VAR_6);
  goto out;
 }

 FUNC_3(VAR_9);

 VAR_6 = FUNC_11(VAR_9, &VAR_10, 1);
 if (VAR_6) {
  FUNC_7(VAR_6);
  goto out_mutex;
 }

 while (VAR_5) {
  if (VAR_5->free_bg)
   VAR_7 = VAR_5->free_bg;
  else
   VAR_7 = FUNC_14(VAR_5->free_blk,
             VAR_5->free_bit);
  VAR_8 = FUNC_13(VAR_2, VAR_1);
  if (FUNC_0(VAR_8)) {
   VAR_6 = FUNC_1(VAR_8);
   FUNC_7(VAR_6);
   goto out_unlock;
  }

  FUNC_15(
       (unsigned long long)VAR_5->free_blk, VAR_5->free_bit);

  VAR_6 = FUNC_9(VAR_8, VAR_9, VAR_10,
            VAR_5->free_bit, VAR_7, 1);
  if (VAR_6)
   FUNC_7(VAR_6);

  FUNC_8(VAR_2, VAR_8);

  VAR_11 = VAR_5;
  VAR_5 = VAR_5->free_next;
  FUNC_6(VAR_11);
 }

out_unlock:
 FUNC_12(VAR_9, 1);
 FUNC_2(VAR_10);
out_mutex:
 FUNC_4(VAR_9);
 FUNC_5(VAR_9);
out:
 while(VAR_5) {

  VAR_11 = VAR_5;
  VAR_5 = VAR_5->free_next;
  FUNC_6(VAR_11);
 }

 return VAR_6;
}

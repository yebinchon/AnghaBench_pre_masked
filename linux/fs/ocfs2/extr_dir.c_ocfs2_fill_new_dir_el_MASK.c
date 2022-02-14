
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {TYPE_1__* sb; } ;
struct ocfs2_dir_entry {int rec_len; } ;
struct ocfs2_dir_block_trailer {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_blocks; TYPE_2__* i_sb; } ;
struct buffer_head {int b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {int s_blocksize; } ;
struct TYPE_3__ {unsigned int s_blocksize; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,int *,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,int *,struct buffer_head**) ;
 struct ocfs2_dir_entry* FUNC_9 (struct inode*,struct inode*,int ,unsigned int) ;
 int FUNC_10 (struct inode*,struct buffer_head*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,struct buffer_head*) ;
 int FUNC_17 (struct inode*,int) ;

__attribute__((used)) static int FUNC_18(struct ocfs2_super *VAR_1,
     handle_t *VAR_2,
     struct inode *VAR_3,
     struct inode *VAR_4,
     struct buffer_head *VAR_5,
     struct ocfs2_alloc_context *VAR_6,
     struct buffer_head **VAR_7)
{
 int VAR_8;
 unsigned int VAR_9 = VAR_1->sb->s_blocksize;
 struct buffer_head *VAR_10 = ((void*)0);
 struct ocfs2_dir_entry *VAR_11;

 if (FUNC_15(VAR_4))
  VAR_9 = FUNC_7(VAR_3->i_sb);

 VAR_8 = FUNC_8(VAR_1->sb, VAR_2, VAR_4, VAR_5,
         VAR_6, ((void*)0), &VAR_10);
 if (VAR_8 < 0) {
  FUNC_6(VAR_8);
  goto bail;
 }

 FUNC_16(FUNC_0(VAR_4), VAR_10);

 VAR_8 = FUNC_12(VAR_2, FUNC_0(VAR_4), VAR_10,
      VAR_0);
 if (VAR_8 < 0) {
  FUNC_6(VAR_8);
  goto bail;
 }
 FUNC_5(VAR_10->b_data, 0, VAR_1->sb->s_blocksize);

 VAR_11 = FUNC_9(VAR_4, VAR_3, VAR_10->b_data, VAR_9);
 if (FUNC_15(VAR_4)) {
  int VAR_12 = FUNC_4(VAR_11->rec_len);






  VAR_12 -= FUNC_1(2);
  VAR_12 -= sizeof(struct ocfs2_dir_block_trailer);

  FUNC_10(VAR_4, VAR_10, VAR_12);
 }

 FUNC_13(VAR_2, VAR_10);

 FUNC_3(VAR_4, VAR_4->i_sb->s_blocksize);
 FUNC_17(VAR_4, 2);
 VAR_4->i_blocks = FUNC_11(VAR_4);
 VAR_8 = FUNC_14(VAR_2, VAR_4, VAR_5);
 if (VAR_8 < 0) {
  FUNC_6(VAR_8);
  goto bail;
 }

 VAR_8 = 0;
 if (VAR_7) {
  *VAR_7 = VAR_10;
  VAR_10 = ((void*)0);
 }
bail:
 FUNC_2(VAR_10);

 return VAR_8;
}

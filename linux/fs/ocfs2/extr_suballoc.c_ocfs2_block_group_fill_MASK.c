
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef size_t u16 ;
struct super_block {int s_blocksize; } ;
struct ocfs2_super {int s_feature_incompat; int fs_generation; } ;
struct ocfs2_group_desc {void* bg_bits; void* bg_free_bits_count; scalar_t__ bg_bitmap; void* bg_blkno; void* bg_parent_dinode; int bg_next_group; void* bg_chain; void* bg_size; int bg_generation; int bg_signature; } ;
struct ocfs2_chain_list {void* cl_cpg; TYPE_1__* cl_recs; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {unsigned long long ip_blkno; } ;
struct TYPE_3__ {int c_blkno; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (unsigned long long) ;
 unsigned int FUNC_6 (void*) ;
 int FUNC_7 (struct ocfs2_group_desc*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,struct ocfs2_group_desc*,struct ocfs2_chain_list*,unsigned long long,unsigned int) ;
 unsigned int FUNC_10 (struct ocfs2_chain_list*) ;
 int FUNC_11 (struct super_block*,char*,unsigned long long,unsigned long long) ;
 unsigned int FUNC_12 (struct super_block*,int,int ) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,struct buffer_head*) ;
 int FUNC_15 (int ,unsigned long*) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_2,
      struct inode *VAR_3,
      struct buffer_head *VAR_4,
      u64 VAR_5,
      unsigned int VAR_6,
      u16 VAR_7,
      struct ocfs2_chain_list *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_super *VAR_10 = FUNC_2(VAR_3->i_sb);
 struct ocfs2_group_desc *VAR_11 = (struct ocfs2_group_desc *) VAR_4->b_data;
 struct super_block * VAR_12 = VAR_3->i_sb;

 if (((unsigned long long) VAR_4->b_blocknr) != VAR_5) {
  VAR_9 = FUNC_11(VAR_3->i_sb,
         "group block (%llu) != b_blocknr (%llu)\n",
         (unsigned long long)VAR_5,
         (unsigned long long) VAR_4->b_blocknr);
  goto bail;
 }

 VAR_9 = FUNC_13(VAR_2,
      FUNC_0(VAR_3),
      VAR_4,
      VAR_1);
 if (VAR_9 < 0) {
  FUNC_8(VAR_9);
  goto bail;
 }

 FUNC_7(VAR_11, 0, VAR_12->s_blocksize);
 FUNC_16(VAR_11->bg_signature, VAR_0);
 VAR_11->bg_generation = FUNC_4(VAR_10->fs_generation);
 VAR_11->bg_size = FUNC_3(FUNC_12(VAR_12, 1,
      VAR_10->s_feature_incompat));
 VAR_11->bg_chain = FUNC_3(VAR_7);
 VAR_11->bg_next_group = VAR_8->cl_recs[VAR_7].c_blkno;
 VAR_11->bg_parent_dinode = FUNC_5(FUNC_1(VAR_3)->ip_blkno);
 VAR_11->bg_blkno = FUNC_5(VAR_5);
 if (VAR_6 == FUNC_6(VAR_8->cl_cpg))
  VAR_11->bg_bits = FUNC_3(FUNC_10(VAR_8));
 else
  FUNC_9(VAR_10, VAR_11, VAR_8, VAR_5,
           VAR_6);


 FUNC_15(0, (unsigned long *)VAR_11->bg_bitmap);
 VAR_11->bg_free_bits_count = FUNC_3(FUNC_6(VAR_11->bg_bits) - 1);

 FUNC_14(VAR_2, VAR_4);






bail:
 if (VAR_9)
  FUNC_8(VAR_9);
 return VAR_9;
}

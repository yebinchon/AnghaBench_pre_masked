
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_extent_list {int l_count; int l_next_free_rec; } ;
struct ocfs2_group_desc {int bg_bits; struct ocfs2_extent_list bg_list; } ;
struct ocfs2_chain_list {int cl_bpc; int cl_cpg; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_group_desc*,struct ocfs2_chain_list*,int ,unsigned int) ;
 int FUNC_5 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_8 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4,
         struct ocfs2_alloc_context *VAR_5,
         struct ocfs2_chain_list *VAR_6,
         unsigned int VAR_7)
{
 int VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_1(VAR_3->i_sb);
 struct ocfs2_group_desc *VAR_10 =
  (struct ocfs2_group_desc *)VAR_4->b_data;
 unsigned int VAR_11 = FUNC_2(VAR_6->cl_cpg) -
    FUNC_2(VAR_10->bg_bits) / FUNC_2(VAR_6->cl_bpc);
 u32 VAR_12, VAR_13;
 u64 VAR_14;
 struct ocfs2_extent_list *VAR_15 = &VAR_10->bg_list;

 VAR_8 = FUNC_7(VAR_2,
      FUNC_0(VAR_3),
      VAR_4,
      VAR_1);
 if (VAR_8 < 0) {
  FUNC_3(VAR_8);
  goto bail;
 }

 while ((VAR_11 > 0) && (FUNC_2(VAR_15->l_next_free_rec) <
    FUNC_2(VAR_15->l_count))) {
  if (VAR_7 > VAR_11)
   VAR_7 = VAR_11;
  VAR_8 = FUNC_5(VAR_9, VAR_2, VAR_5,
            VAR_7, &VAR_12,
            &VAR_13);
  if (VAR_8 < 0) {
   if (VAR_8 != -VAR_0)
    FUNC_3(VAR_8);
   goto bail;
  }
  VAR_14 = FUNC_6(VAR_9->sb, VAR_12);
  FUNC_4(VAR_9, VAR_10, VAR_6, VAR_14,
           VAR_13);

  VAR_7 = VAR_13;
  VAR_11 = FUNC_2(VAR_6->cl_cpg) -
    FUNC_2(VAR_10->bg_bits) / FUNC_2(VAR_6->cl_bpc);
 }

 if (VAR_11 > 0) {




  VAR_8 = -VAR_0;
  goto bail;
 }

 FUNC_8(VAR_2, VAR_4);

bail:
 return VAR_8;
}

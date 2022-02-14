
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_group_desc {struct ocfs2_extent_list bg_list; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_blkno; } ;
struct ocfs2_alloc_context {int ac_bh; int ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ,int ,int) ;
 int FUNC_6 (int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_7(handle_t *VAR_0,
       struct ocfs2_alloc_context *VAR_1,
       struct inode *VAR_2,
       struct buffer_head *VAR_3)
{
 int VAR_4, VAR_5;
 struct ocfs2_group_desc *VAR_6;
 struct ocfs2_extent_list *VAR_7;
 struct ocfs2_extent_rec *VAR_8;

 if (!VAR_3)
  return;

 VAR_6 = (struct ocfs2_group_desc *)VAR_3->b_data;
 VAR_7 = &VAR_6->bg_list;
 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_7->l_next_free_rec); VAR_4++) {
  VAR_8 = &VAR_7->l_recs[VAR_4];
  VAR_5 = FUNC_5(VAR_0, VAR_1->ac_inode,
       VAR_1->ac_bh,
       FUNC_3(VAR_8->e_blkno),
       FUNC_2(VAR_8->e_leaf_clusters));
  if (VAR_5)
   FUNC_4(VAR_5);

 }

 FUNC_6(FUNC_0(VAR_2), VAR_3);
 FUNC_1(VAR_3);
}

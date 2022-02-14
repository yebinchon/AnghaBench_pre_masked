
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {TYPE_4__* p_node; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_list {int l_next_free_rec; TYPE_5__* l_recs; } ;
struct TYPE_7__ {TYPE_1__* l_recs; } ;
struct ocfs2_extent_block {TYPE_2__ h_list; int h_next_leaf_blk; } ;
struct ocfs2_caching_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_10__ {int e_cpos; int e_blkno; } ;
struct TYPE_9__ {TYPE_3__* bh; struct ocfs2_extent_list* el; } ;
struct TYPE_8__ {scalar_t__ b_blocknr; } ;
struct TYPE_6__ {int e_cpos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct super_block*,struct ocfs2_path*,int *) ;
 int FUNC_6 (struct ocfs2_caching_info*,struct ocfs2_path*,int ) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*) ;
 int FUNC_8 (struct ocfs2_path*) ;
 int FUNC_9 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;
 struct super_block* FUNC_10 (struct ocfs2_caching_info*) ;
 struct ocfs2_path* FUNC_11 (struct ocfs2_extent_tree*) ;
 struct ocfs2_path* FUNC_12 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_caching_info *VAR_2,
           struct buffer_head *VAR_3,
           struct ocfs2_extent_block *VAR_4,
           struct ocfs2_extent_list *VAR_5,
           int VAR_6, u32 *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;
 u64 VAR_12;
 struct super_block *VAR_13 = FUNC_10(VAR_2);
 struct ocfs2_path *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct ocfs2_extent_tree VAR_16;
 struct ocfs2_extent_list *VAR_17;

 if (VAR_6 < FUNC_1(VAR_5->l_next_free_rec) - 1) {




  *VAR_7 = FUNC_2(VAR_5->l_recs[VAR_6+1].e_cpos);
  return 0;
 }

 if (!VAR_4 || (VAR_4 && !VAR_4->h_next_leaf_blk)) {




  *VAR_7 = VAR_1;
  return 0;
 }







 FUNC_9(&VAR_16, VAR_2, VAR_3);

 VAR_14 = FUNC_11(&VAR_16);
 if (!VAR_14) {
  VAR_8 = -VAR_0;
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_11 = FUNC_2(VAR_4->h_list.l_recs[VAR_6].e_cpos);
 VAR_8 = FUNC_6(VAR_2, VAR_14, VAR_11);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_15 = FUNC_12(VAR_14);
 if (!VAR_15) {
  VAR_8 = -VAR_0;
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_5(VAR_13, VAR_14, &VAR_11);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_8 = FUNC_6(VAR_2, VAR_15, VAR_11);
 if (VAR_8) {
  FUNC_4(VAR_8);
  goto out;
 }

 VAR_10 = FUNC_7(&VAR_16, VAR_14,
            VAR_15);

 VAR_17 = VAR_14->p_node[VAR_10].el;
 VAR_12 = VAR_14->p_node[VAR_10+1].bh->b_blocknr;
 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_17->l_next_free_rec); VAR_9++) {
  if (FUNC_3(VAR_17->l_recs[VAR_9].e_blkno) == VAR_12) {
   *VAR_7 = FUNC_2(VAR_17->l_recs[VAR_9+1].e_cpos);
   break;
  }
 }

 FUNC_0(VAR_9 == FUNC_1(VAR_17->l_next_free_rec));

out:
 FUNC_8(VAR_14);
 FUNC_8(VAR_15);
 return VAR_8;
}

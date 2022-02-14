
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_value_tree_metas {int credits; int num_recs; scalar_t__ num_metas; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_reflink_xattr_tree_args {TYPE_2__* reflink; } ;
struct TYPE_7__ {int l_next_free_rec; int l_tree_depth; } ;
struct ocfs2_refcount_block {TYPE_3__ rf_list; int rf_flags; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int metas ;
struct TYPE_8__ {int i_sb; } ;
struct TYPE_6__ {TYPE_1__* ref_root_bh; TYPE_4__* old_inode; } ;
struct TYPE_5__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_value_tree_metas*,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ocfs2_alloc_context*) ;
 int FUNC_8 (TYPE_4__*,int ,int,int ,struct ocfs2_value_tree_metas*) ;
 int FUNC_9 (struct ocfs2_extent_tree*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_12 (struct ocfs2_super*,scalar_t__,struct ocfs2_alloc_context**) ;

__attribute__((used)) static int FUNC_13(
    struct ocfs2_reflink_xattr_tree_args *VAR_3,
    struct ocfs2_extent_tree *VAR_4,
    u64 VAR_5, u32 VAR_6, int *VAR_7,
    struct ocfs2_alloc_context **VAR_8,
    struct ocfs2_alloc_context **VAR_9)
{
 int VAR_10, VAR_11;
 struct ocfs2_value_tree_metas VAR_12;
 struct ocfs2_super *VAR_13 = FUNC_0(VAR_3->reflink->old_inode->i_sb);
 struct ocfs2_refcount_block *VAR_14;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 VAR_10 = FUNC_8(VAR_3->reflink->old_inode, VAR_5, VAR_6,
       VAR_2, &VAR_12);
 if (VAR_10) {
  FUNC_4(VAR_10);
  goto out;
 }

 *VAR_7 = VAR_12.credits;
 VAR_14 = (struct ocfs2_refcount_block *)VAR_3->reflink->ref_root_bh->b_data;
 VAR_12.num_recs =
  (VAR_12.num_recs + FUNC_10(VAR_13->sb) - 1) /
   FUNC_10(VAR_13->sb) * 2;
 VAR_12.num_metas += VAR_12.num_recs;
 *VAR_7 += VAR_12.num_recs +
      VAR_12.num_recs * VAR_0;
 if (FUNC_2(VAR_14->rf_flags) & VAR_1)
  *VAR_7 += FUNC_1(VAR_14->rf_list.l_tree_depth) *
       FUNC_1(VAR_14->rf_list.l_next_free_rec) + 1;
 else
  *VAR_7 += 1;


 VAR_11 = FUNC_9(VAR_4);
 if (VAR_11 < 0) {
  VAR_10 = VAR_11;
  FUNC_4(VAR_10);
  goto out;
 }

 if (VAR_11 < VAR_6)
  VAR_12.num_metas += FUNC_6(VAR_4->et_root_el);

 *VAR_7 += FUNC_5(VAR_13->sb,
           VAR_4->et_root_el);

 if (VAR_12.num_metas) {
  VAR_10 = FUNC_12(VAR_13, VAR_12.num_metas,
       VAR_8);
  if (VAR_10) {
   FUNC_4(VAR_10);
   goto out;
  }
 }

 if (VAR_6) {
  VAR_10 = FUNC_11(VAR_13, VAR_6, VAR_9);
  if (VAR_10)
   FUNC_4(VAR_10);
 }
out:
 if (VAR_10) {
  if (*VAR_8) {
   FUNC_7(*VAR_8);
   *VAR_8 = ((void*)0);
  }
 }

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_xattr_value_root {int xr_list; int xr_clusters; } ;
struct ocfs2_refcount_rec {int r_clusters; int r_refcount; } ;
struct TYPE_2__ {int rl_count; int rl_used; } ;
struct ocfs2_refcount_block {int rf_flags; TYPE_1__ rf_records; } ;
struct ocfs2_extent_tree {int et_root_el; } ;
struct ocfs2_caching_info {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ocfs2_caching_info*,struct buffer_head*,int,int,struct ocfs2_refcount_rec*,int*,struct buffer_head**) ;
 int FUNC_7 (struct ocfs2_extent_tree*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_8 (struct inode*,int,int*,int*,int *,int *) ;

int FUNC_9(struct inode *VAR_2,
           struct ocfs2_caching_info *VAR_3,
           struct buffer_head *VAR_4,
           struct ocfs2_xattr_value_root *VAR_5,
           int *VAR_6, int *VAR_7)
{
 int VAR_8 = 0, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12;
 u32 VAR_13 = 0, VAR_14 = FUNC_3(VAR_5->xr_clusters);
 struct ocfs2_refcount_block *VAR_15;
 struct ocfs2_refcount_rec VAR_16;
 struct buffer_head *VAR_17 = ((void*)0);

 while (VAR_13 < VAR_14) {
  VAR_8 = FUNC_8(VAR_2, VAR_13, &VAR_11,
            &VAR_12, &VAR_5->xr_list,
            ((void*)0));
  if (VAR_8) {
   FUNC_4(VAR_8);
   goto out;
  }

  VAR_13 += VAR_12;

  while (VAR_12) {
   VAR_8 = FUNC_6(VAR_3, VAR_4,
           VAR_11, VAR_12,
           &VAR_16, &VAR_9,
           &VAR_17);
   if (VAR_8) {
    FUNC_4(VAR_8);
    goto out;
   }

   FUNC_0(!VAR_16.r_refcount);

   VAR_15 = (struct ocfs2_refcount_block *)VAR_17->b_data;
   if (FUNC_2(VAR_15->rf_records.rl_used) + VAR_14 * 2 >
       FUNC_2(VAR_15->rf_records.rl_count))
    VAR_10++;

   *VAR_7 += 1;
   FUNC_1(VAR_17);
   VAR_17 = ((void*)0);

   if (VAR_12 <= FUNC_3(VAR_16.r_clusters))
    break;
   else
    VAR_12 -= FUNC_3(VAR_16.r_clusters);
   VAR_11 += VAR_12;
  }
 }

 *VAR_6 += VAR_10;
 if (!VAR_10)
  goto out;

 VAR_15 = (struct ocfs2_refcount_block *)VAR_4->b_data;
 if (FUNC_3(VAR_15->rf_flags) & VAR_1)
  *VAR_7 += VAR_0;
 else {
  struct ocfs2_extent_tree VAR_18;

  FUNC_7(&VAR_18, VAR_3, VAR_4);
  *VAR_7 += FUNC_5(VAR_2->i_sb,
            VAR_18.et_root_el);
 }

out:
 FUNC_1(VAR_17);
 return VAR_8;
}

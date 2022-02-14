
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_extent_list {int l_next_free_rec; } ;
struct ocfs2_xattr_tree_root {struct ocfs2_extent_list xt_list; } ;
struct ocfs2_xattr_search {int dummy; } ;
struct TYPE_3__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {TYPE_1__ xb_attrs; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_4__ {int ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,int,char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct ocfs2_xattr_search*) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,struct ocfs2_extent_list*) ;
 scalar_t__ FUNC_6 (struct inode*,char const*,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char const*,int,scalar_t__,unsigned long long,int) ;
 int FUNC_9 (int ,char const*,int,scalar_t__,unsigned long long,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_1,
     struct buffer_head *VAR_2,
     int VAR_3,
     const char *VAR_4,
     struct ocfs2_xattr_search *VAR_5)
{
 int VAR_6;
 struct ocfs2_xattr_block *VAR_7 =
   (struct ocfs2_xattr_block *)VAR_2->b_data;
 struct ocfs2_xattr_tree_root *VAR_8 = &VAR_7->xb_attrs.xb_root;
 struct ocfs2_extent_list *VAR_9 = &VAR_8->xt_list;
 u64 VAR_10 = 0;
 u32 VAR_11, VAR_12 = 0;
 u32 VAR_13 = FUNC_6(VAR_1, VAR_4, FUNC_7(VAR_4));

 if (FUNC_2(VAR_9->l_next_free_rec) == 0)
  return -VAR_0;

 FUNC_8(FUNC_1(VAR_1)->ip_blkno,
     VAR_4, VAR_3, VAR_13,
     (unsigned long long)VAR_2->b_blocknr,
     -1);

 VAR_6 = FUNC_5(VAR_1, VAR_13, &VAR_10, &VAR_11,
      &VAR_12, VAR_9);
 if (VAR_6) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_0(VAR_10 == 0 || VAR_12 == 0 || VAR_11 > VAR_13);

 FUNC_9(FUNC_1(VAR_1)->ip_blkno,
     VAR_4, VAR_3, VAR_11,
     (unsigned long long)VAR_10,
     VAR_12);

 VAR_6 = FUNC_4(VAR_1, VAR_3, VAR_4, VAR_13,
          VAR_10, VAR_11, VAR_12, VAR_5);

out:
 return VAR_6;
}

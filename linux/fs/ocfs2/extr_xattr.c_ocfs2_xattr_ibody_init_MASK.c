
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_xattr_set_ctxt {int handle; } ;
struct ocfs2_super {unsigned int s_xattr_inline_size; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_inline_data {int id_count; } ;
struct ocfs2_extent_rec {int dummy; } ;
struct ocfs2_extent_list {int l_count; } ;
struct TYPE_2__ {struct ocfs2_extent_list i_list; struct ocfs2_inline_data i_data; } ;
struct ocfs2_dinode {void* i_dyn_features; void* i_xattr_inline_size; TYPE_1__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ,int ,struct buffer_head*,int ) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_5,
      struct buffer_head *VAR_6,
      struct ocfs2_xattr_set_ctxt *VAR_7)
{
 int VAR_8;
 struct ocfs2_inode_info *VAR_9 = FUNC_1(VAR_5);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct ocfs2_super *VAR_11 = FUNC_2(VAR_5->i_sb);
 unsigned int VAR_12 = VAR_11->s_xattr_inline_size;

 if (!FUNC_9(VAR_5, VAR_10)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_7(VAR_7->handle, FUNC_0(VAR_5), VAR_6,
          VAR_4);
 if (VAR_8) {
  FUNC_5(VAR_8);
  goto out;
 }





 if (VAR_9->ip_dyn_features & VAR_2) {
  struct ocfs2_inline_data *VAR_13 = &VAR_10->id2.i_data;
  FUNC_4(&VAR_13->id_count, -VAR_12);
 } else if (!(FUNC_6(VAR_5))) {
  struct ocfs2_extent_list *VAR_14 = &VAR_10->id2.i_list;
  FUNC_4(&VAR_14->l_count, -(VAR_12 /
          sizeof(struct ocfs2_extent_rec)));
 }
 VAR_10->i_xattr_inline_size = FUNC_3(VAR_12);

 FUNC_10(&VAR_9->ip_lock);
 VAR_9->ip_dyn_features |= VAR_3|VAR_1;
 VAR_10->i_dyn_features = FUNC_3(VAR_9->ip_dyn_features);
 FUNC_11(&VAR_9->ip_lock);

 FUNC_8(VAR_7->handle, VAR_6);

out:
 return VAR_8;
}

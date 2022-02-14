
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_search {int not_found; struct buffer_head* inode_bh; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_dinode {scalar_t__ i_xattr_loc; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int,char const*,void*,size_t,struct ocfs2_xattr_search*) ;
 int FUNC_4 (struct inode*,int,char const*,void*,size_t,struct ocfs2_xattr_search*) ;

int FUNC_5(struct inode *VAR_3,
      struct buffer_head *VAR_4,
      int VAR_5,
      const char *VAR_6,
      void *VAR_7,
      size_t VAR_8)
{
 int VAR_9;
 struct ocfs2_dinode *VAR_10 = ((void*)0);
 struct ocfs2_inode_info *VAR_11 = FUNC_0(VAR_3);
 struct ocfs2_xattr_search VAR_12 = {
  .not_found = -VAR_0,
 };
 struct ocfs2_xattr_search VAR_13 = {
  .not_found = -VAR_0,
 };

 if (!FUNC_2(FUNC_1(VAR_3->i_sb)))
  return -VAR_1;

 if (!(VAR_11->ip_dyn_features & VAR_2))
  return -VAR_0;

 VAR_12.inode_bh = VAR_13.inode_bh = VAR_4;
 VAR_10 = (struct ocfs2_dinode *)VAR_4->b_data;

 VAR_9 = FUNC_4(VAR_3, VAR_5, VAR_6, VAR_7,
        VAR_8, &VAR_12);
 if (VAR_9 == -VAR_0 && VAR_10->i_xattr_loc)
  VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_6, VAR_7,
         VAR_8, &VAR_13);

 return VAR_9;
}

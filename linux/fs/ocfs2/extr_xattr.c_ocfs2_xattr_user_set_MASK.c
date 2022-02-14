
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct ocfs2_super {int s_mount_opt; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int ,char const*,void const*,size_t,int) ;

__attribute__((used)) static int FUNC_2(const struct xattr_handler *VAR_3,
    struct dentry *VAR_4, struct inode *VAR_5,
    const char *VAR_6, const void *VAR_7,
    size_t VAR_8, int VAR_9)
{
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_5->i_sb);

 if (VAR_10->s_mount_opt & VAR_1)
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_2,
          VAR_6, VAR_7, VAR_8, VAR_9);
}

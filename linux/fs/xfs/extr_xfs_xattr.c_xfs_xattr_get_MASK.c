
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct xfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct xfs_inode*,char const*,unsigned char**,int*,int) ;

__attribute__((used)) static int
FUNC_2(const struct xattr_handler *VAR_1, struct dentry *VAR_2,
  struct inode *VAR_3, const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 int VAR_7 = VAR_1->flags;
 struct xfs_inode *VAR_8 = FUNC_0(VAR_3);
 int VAR_9, VAR_10 = VAR_6;


 if (!VAR_6) {
  VAR_7 |= VAR_0;
  VAR_5 = ((void*)0);
 }

 VAR_9 = FUNC_1(VAR_8, VAR_4, (unsigned char **)&VAR_5, &VAR_10, VAR_7);
 if (VAR_9)
  return VAR_9;
 return VAR_10;
}

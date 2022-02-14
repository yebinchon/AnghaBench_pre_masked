
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xattr_handler {int flags; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct xfs_inode*,unsigned char*,int) ;
 int FUNC_2 (struct xfs_inode*,unsigned char*,void*,size_t,int) ;
 int FUNC_3 (struct inode*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const struct xattr_handler *VAR_4, struct dentry *VAR_5,
  struct inode *VAR_6, const char *VAR_7, const void *VAR_8,
  size_t VAR_9, int VAR_10)
{
 int VAR_11 = VAR_4->flags;
 struct xfs_inode *VAR_12 = FUNC_0(VAR_6);
 int VAR_13;


 if (VAR_10 & VAR_2)
  VAR_11 |= VAR_0;
 if (VAR_10 & VAR_3)
  VAR_11 |= VAR_1;

 if (!VAR_8)
  return FUNC_1(VAR_12, (unsigned char *)VAR_7, VAR_11);
 VAR_13 = FUNC_2(VAR_12, (unsigned char *)VAR_7,
    (void *)VAR_8, VAR_9, VAR_11);
 if (!VAR_13)
  FUNC_3(VAR_6, VAR_7, VAR_11);

 return VAR_13;
}

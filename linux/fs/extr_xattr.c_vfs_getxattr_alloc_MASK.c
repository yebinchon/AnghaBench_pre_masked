
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int (* get ) (struct xattr_handler const*,struct dentry*,struct inode*,char const*,char*,int) ;} ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
typedef int ssize_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xattr_handler const*) ;
 int VAR_2 ;
 int FUNC_1 (struct xattr_handler const*) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct xattr_handler const*,struct dentry*,struct inode*,char const*,char*,int) ;
 int FUNC_5 (struct xattr_handler const*,struct dentry*,struct inode*,char const*,char*,int) ;
 int FUNC_6 (struct inode*,char const*,int ) ;
 struct xattr_handler* FUNC_7 (struct inode*,char const**) ;

ssize_t
FUNC_8(struct dentry *VAR_3, const char *VAR_4, char **VAR_5,
     size_t VAR_6, gfp_t VAR_7)
{
 const struct xattr_handler *VAR_8;
 struct inode *VAR_9 = VAR_3->d_inode;
 char *VAR_10 = *VAR_5;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_9, VAR_4, VAR_2);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_7(VAR_9, &VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 if (!VAR_8->get)
  return -VAR_1;
 VAR_11 = VAR_8->get(VAR_8, VAR_3, VAR_9, VAR_4, ((void*)0), 0);
 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_10 || (VAR_11 > VAR_6)) {
  VAR_10 = FUNC_2(*VAR_5, VAR_11 + 1, VAR_7);
  if (!VAR_10)
   return -VAR_0;
  FUNC_3(VAR_10, 0, VAR_11 + 1);
 }

 VAR_11 = VAR_8->get(VAR_8, VAR_3, VAR_9, VAR_4, VAR_10, VAR_11);
 *VAR_5 = VAR_10;
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct inode {int i_ino; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,char const*,int ,struct dentry*,size_t) ;
 int FUNC_1 (struct inode*,char const*) ;
 int FUNC_2 (struct inode*,char const*,void const*,size_t,int,int) ;
 char* FUNC_3 (struct xattr_handler const*,char const*) ;

__attribute__((used)) static int FUNC_4(const struct xattr_handler *VAR_0,
      struct dentry *VAR_1, struct inode *VAR_2,
      const char *VAR_3, const void *VAR_4,
      size_t VAR_5, int VAR_6)
{
 FUNC_0("xattr '%s', host ino %lu ('%pd'), size %zd",
  VAR_3, VAR_2->i_ino, VAR_1, VAR_5);

 VAR_3 = FUNC_3(VAR_0, VAR_3);

 if (VAR_4)
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 1);
 else
  return FUNC_1(VAR_2, VAR_3);
}

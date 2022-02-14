
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,char const*,void const*,size_t,int) ;
 char* FUNC_1 (struct xattr_handler const*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct xattr_handler *VAR_0,
      struct dentry *VAR_1, struct inode *VAR_2,
      const char *VAR_3, const void *VAR_4,
      size_t VAR_5, int VAR_6)
{
 const char *VAR_7 = FUNC_1(VAR_0, VAR_3);

 return FUNC_0(VAR_1, VAR_7, VAR_4, VAR_5, VAR_6);
}

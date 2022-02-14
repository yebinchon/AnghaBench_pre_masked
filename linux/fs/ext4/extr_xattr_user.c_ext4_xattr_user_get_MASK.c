
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ,char const*,void*,size_t) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const struct xattr_handler *VAR_3,
      struct dentry *VAR_4, struct inode *VAR_5,
      const char *VAR_6, void *VAR_7, size_t VAR_8)
{
 if (!FUNC_1(VAR_5->i_sb, VAR_2))
  return -VAR_0;
 return FUNC_0(VAR_5, VAR_1,
         VAR_6, VAR_7, VAR_8);
}

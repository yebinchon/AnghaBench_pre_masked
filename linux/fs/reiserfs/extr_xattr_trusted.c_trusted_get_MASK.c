
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,void*,size_t) ;
 int FUNC_3 (struct xattr_handler const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const struct xattr_handler *VAR_2, struct dentry *VAR_3,
     struct inode *VAR_4, const char *VAR_5, void *VAR_6, size_t VAR_7)
{
 if (!FUNC_1(VAR_0) || FUNC_0(VAR_4))
  return -VAR_1;

 return FUNC_2(VAR_4, FUNC_3(VAR_2, VAR_5),
      VAR_6, VAR_7);
}

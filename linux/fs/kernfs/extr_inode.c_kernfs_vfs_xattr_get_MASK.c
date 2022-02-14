
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr_handler {int dummy; } ;
struct kernfs_node {int dummy; } ;
struct inode {struct kernfs_node* i_private; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct kernfs_node*,char const*,void*,size_t) ;
 char* FUNC_1 (struct xattr_handler const*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct xattr_handler *VAR_0,
    struct dentry *VAR_1, struct inode *VAR_2,
    const char *VAR_3, void *VAR_4, size_t VAR_5)
{
 const char *VAR_6 = FUNC_1(VAR_0, VAR_3);
 struct kernfs_node *VAR_7 = VAR_2->i_private;

 return FUNC_0(VAR_7, VAR_6, VAR_4, VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct dentry {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ,int ,char const*,void*,size_t) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct dentry *VAR_0, struct inode *VAR_1,
    const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 return FUNC_1(FUNC_0(VAR_0),
           FUNC_2(VAR_1),
           VAR_2, VAR_3, VAR_4);
}

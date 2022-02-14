
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_ino; } ;
struct dentry {int d_name; int d_parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,struct inode*,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_0, struct inode *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0->d_parent), &VAR_0->d_name,
    VAR_1, VAR_1->i_ino, VAR_1->i_mode);
}

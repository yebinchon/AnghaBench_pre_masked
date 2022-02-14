
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {unsigned int parent; } ;


 struct inode* FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ,unsigned int) ;
 TYPE_1__* FUNC_2 (struct inode*) ;

__attribute__((used)) static struct dentry *FUNC_3(struct dentry *VAR_0)
{
 struct inode *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = FUNC_2(VAR_1)->parent;

 return FUNC_1(VAR_1->i_sb, VAR_2);
}

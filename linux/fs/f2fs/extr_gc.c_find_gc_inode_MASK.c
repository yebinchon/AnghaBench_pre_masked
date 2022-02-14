
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_entry {struct inode* inode; } ;
struct inode {int dummy; } ;
struct gc_inode_list {int iroot; } ;
typedef int nid_t ;


 struct inode_entry* FUNC_0 (int *,int ) ;

__attribute__((used)) static struct inode *FUNC_1(struct gc_inode_list *VAR_0, nid_t VAR_1)
{
 struct inode_entry *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->iroot, VAR_1);
 if (VAR_2)
  return VAR_2->inode;
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_entry {int list; struct inode* inode; } ;
struct inode {int i_ino; } ;
struct gc_inode_list {int ilist; int iroot; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode_entry* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,struct inode_entry*) ;
 struct inode* FUNC_2 (struct gc_inode_list*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct gc_inode_list *VAR_2, struct inode *VAR_3)
{
 struct inode_entry *VAR_4;

 if (VAR_3 == FUNC_2(VAR_2, VAR_3->i_ino)) {
  FUNC_3(VAR_3);
  return;
 }
 VAR_4 = FUNC_0(VAR_1, VAR_0);
 VAR_4->inode = VAR_3;

 FUNC_1(&VAR_2->iroot, VAR_3->i_ino, VAR_4);
 FUNC_4(&VAR_4->list, &VAR_2->ilist);
}

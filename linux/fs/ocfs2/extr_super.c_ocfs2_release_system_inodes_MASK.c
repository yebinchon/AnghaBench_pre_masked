
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; struct inode** local_system_inodes; struct inode* root_inode; struct inode* sys_root_inode; struct inode** global_system_inodes; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode**) ;

__attribute__((used)) static void FUNC_2(struct ocfs2_super *VAR_2)
{
 int VAR_3;
 struct inode *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = VAR_2->global_system_inodes[VAR_3];
  if (VAR_4) {
   FUNC_0(VAR_4);
   VAR_2->global_system_inodes[VAR_3] = ((void*)0);
  }
 }

 VAR_4 = VAR_2->sys_root_inode;
 if (VAR_4) {
  FUNC_0(VAR_4);
  VAR_2->sys_root_inode = ((void*)0);
 }

 VAR_4 = VAR_2->root_inode;
 if (VAR_4) {
  FUNC_0(VAR_4);
  VAR_2->root_inode = ((void*)0);
 }

 if (!VAR_2->local_system_inodes)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1 * VAR_2->max_slots; VAR_3++) {
  if (VAR_2->local_system_inodes[VAR_3]) {
   FUNC_0(VAR_2->local_system_inodes[VAR_3]);
   VAR_2->local_system_inodes[VAR_3] = ((void*)0);
  }
 }

 FUNC_1(VAR_2->local_system_inodes);
 VAR_2->local_system_inodes = ((void*)0);
}

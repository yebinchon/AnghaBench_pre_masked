
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {int ino_lock; int ino_num; int ino_root; } ;
struct ino_entry {int list; } ;
struct f2fs_sb_info {struct inode_management* im; } ;
typedef int nid_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ino_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct ino_entry* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_1, nid_t VAR_2, int VAR_3)
{
 struct inode_management *VAR_4 = &VAR_1->im[VAR_3];
 struct ino_entry *VAR_5;

 FUNC_4(&VAR_4->ino_lock);
 VAR_5 = FUNC_3(&VAR_4->ino_root, VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_5->list);
  FUNC_2(&VAR_4->ino_root, VAR_2);
  VAR_4->ino_num--;
  FUNC_5(&VAR_4->ino_lock);
  FUNC_0(VAR_0, VAR_5);
  return;
 }
 FUNC_5(&VAR_4->ino_lock);
}

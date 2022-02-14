
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {int ino_lock; int ino_root; } ;
struct ino_entry {int dummy; } ;
struct f2fs_sb_info {struct inode_management* im; } ;
typedef int nid_t ;


 struct ino_entry* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct f2fs_sb_info *VAR_0, nid_t VAR_1, int VAR_2)
{
 struct inode_management *VAR_3 = &VAR_0->im[VAR_2];
 struct ino_entry *VAR_4;

 FUNC_1(&VAR_3->ino_lock);
 VAR_4 = FUNC_0(&VAR_3->ino_root, VAR_1);
 FUNC_2(&VAR_3->ino_lock);
 return VAR_4 ? 1 : 0;
}

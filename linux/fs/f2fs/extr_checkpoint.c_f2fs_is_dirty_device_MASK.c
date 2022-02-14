
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {int ino_lock; int ino_root; } ;
struct ino_entry {int dirty_device; } ;
struct f2fs_sb_info {struct inode_management* im; } ;
typedef int nid_t ;


 scalar_t__ FUNC_0 (unsigned int,char*) ;
 struct ino_entry* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct f2fs_sb_info *VAR_0, nid_t VAR_1,
     unsigned int VAR_2, int VAR_3)
{
 struct inode_management *VAR_4 = &VAR_0->im[VAR_3];
 struct ino_entry *VAR_5;
 bool VAR_6 = 0;

 FUNC_2(&VAR_4->ino_lock);
 VAR_5 = FUNC_1(&VAR_4->ino_root, VAR_1);
 if (VAR_5 && FUNC_0(VAR_2, (char *)&VAR_5->dirty_device))
  VAR_6 = 1;
 FUNC_3(&VAR_4->ino_lock);
 return VAR_6;
}

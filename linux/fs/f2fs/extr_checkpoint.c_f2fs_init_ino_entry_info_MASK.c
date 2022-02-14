
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {scalar_t__ ino_num; int ino_list; int ino_lock; int ino_root; } ;
struct f2fs_sb_info {int max_orphans; int blocks_per_seg; struct inode_management* im; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct f2fs_sb_info *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct inode_management *VAR_7 = &VAR_5->im[VAR_6];

  FUNC_1(&VAR_7->ino_root, VAR_2);
  FUNC_3(&VAR_7->ino_lock);
  FUNC_0(&VAR_7->ino_list);
  VAR_7->ino_num = 0;
 }

 VAR_5->max_orphans = (VAR_5->blocks_per_seg - VAR_0 -
   VAR_4 - FUNC_2(VAR_5)) *
    VAR_1;
}

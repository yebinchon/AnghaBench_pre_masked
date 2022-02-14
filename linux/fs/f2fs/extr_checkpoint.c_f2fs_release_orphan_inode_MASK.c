
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {scalar_t__ ino_num; int ino_lock; } ;
struct f2fs_sb_info {struct inode_management* im; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct f2fs_sb_info*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct f2fs_sb_info *VAR_1)
{
 struct inode_management *VAR_2 = &VAR_1->im[VAR_0];

 FUNC_1(&VAR_2->ino_lock);
 FUNC_0(VAR_1, VAR_2->ino_num == 0);
 VAR_2->ino_num--;
 FUNC_2(&VAR_2->ino_lock);
}

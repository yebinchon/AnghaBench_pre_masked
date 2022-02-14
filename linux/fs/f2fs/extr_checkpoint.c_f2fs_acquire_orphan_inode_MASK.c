
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_management {scalar_t__ ino_num; int ino_lock; } ;
struct f2fs_sb_info {scalar_t__ max_orphans; struct inode_management* im; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct f2fs_sb_info *VAR_3)
{
 struct inode_management *VAR_4 = &VAR_3->im[VAR_2];
 int VAR_5 = 0;

 FUNC_1(&VAR_4->ino_lock);

 if (FUNC_3(VAR_3, VAR_1)) {
  FUNC_2(&VAR_4->ino_lock);
  FUNC_0(VAR_1);
  return -VAR_0;
 }

 if (FUNC_4(VAR_4->ino_num >= VAR_3->max_orphans))
  VAR_5 = -VAR_0;
 else
  VAR_4->ino_num++;
 FUNC_2(&VAR_4->ino_lock);

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int s_umount; } ;
struct btrfs_fs_info {struct super_block* sb; } ;
struct TYPE_2__ {int journal_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int) ;
 int FUNC_1 (struct btrfs_fs_info*,int,int ,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct super_block*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct btrfs_fs_info *VAR_2,
      unsigned long VAR_3, int VAR_4)
{
 struct super_block *VAR_5 = VAR_2->sb;

 if (FUNC_2(&VAR_5->s_umount)) {
  FUNC_4(VAR_5, VAR_3, VAR_0);
  FUNC_3(&VAR_5->s_umount);
 } else {







  FUNC_0(VAR_2, VAR_4);
  if (!VAR_1->journal_info)
   FUNC_1(VAR_2, VAR_4, 0, (u64)-1);
 }
}

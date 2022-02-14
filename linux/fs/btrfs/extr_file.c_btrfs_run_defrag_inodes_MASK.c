
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode_defrag {scalar_t__ root; scalar_t__ ino; } ;
struct btrfs_fs_info {int transaction_wait; int defrag_running; int fs_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct inode_defrag*) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct inode_defrag* FUNC_4 (struct btrfs_fs_info*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct btrfs_fs_info *VAR_1)
{
 struct inode_defrag *VAR_2;
 u64 VAR_3 = 0;
 u64 VAR_4 = 0;

 FUNC_3(&VAR_1->defrag_running);
 while (1) {

  if (FUNC_5(VAR_0,
        &VAR_1->fs_state))
   break;

  if (!FUNC_1(VAR_1))
   break;


  VAR_2 = FUNC_4(VAR_1, VAR_4,
       VAR_3);
  if (!VAR_2) {
   if (VAR_4 || VAR_3) {
    VAR_4 = 0;
    VAR_3 = 0;
    continue;
   } else {
    break;
   }
  }

  VAR_3 = VAR_2->ino + 1;
  VAR_4 = VAR_2->root;

  FUNC_0(VAR_1, VAR_2);
 }
 FUNC_2(&VAR_1->defrag_running);





 FUNC_6(&VAR_1->transaction_wait);
 return 0;
}

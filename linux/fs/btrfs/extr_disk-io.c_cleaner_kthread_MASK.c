
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int flags; int cleaner_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_fs_info*) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(void *VAR_4)
{
 struct btrfs_root *VAR_5 = VAR_4;
 struct btrfs_fs_info *VAR_6 = VAR_5->fs_info;
 int VAR_7;

 while (1) {
  VAR_7 = 0;

  FUNC_13(VAR_0, &VAR_6->flags);


  if (FUNC_3(VAR_6))
   goto sleep;





  if (!FUNC_15(VAR_1, &VAR_6->flags))
   goto sleep;

  if (!FUNC_10(&VAR_6->cleaner_mutex))
   goto sleep;





  if (FUNC_3(VAR_6)) {
   FUNC_11(&VAR_6->cleaner_mutex);
   goto sleep;
  }

  FUNC_5(VAR_6);

  VAR_7 = FUNC_1(VAR_5);
  FUNC_11(&VAR_6->cleaner_mutex);





  FUNC_4(VAR_6);
  FUNC_2(VAR_6);
sleep:
  FUNC_6(VAR_0, &VAR_6->flags);
  if (FUNC_8())
   FUNC_7();
  if (FUNC_9())
   return 0;
  if (!VAR_7) {
   FUNC_14(VAR_2);
   FUNC_12();
   FUNC_0(VAR_3);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {unsigned long mount_opt; int sb; int defrag_running; int transaction_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static inline void FUNC_4(struct btrfs_fs_info *VAR_2,
           unsigned long VAR_3, int VAR_4)
{
 if (FUNC_1(VAR_3, VAR_0) &&
     (!FUNC_1(VAR_2->mount_opt, VAR_0) ||
      (VAR_4 & VAR_1))) {

  FUNC_3(VAR_2->transaction_wait,
      (FUNC_0(&VAR_2->defrag_running) == 0));
  if (VAR_4 & VAR_1)
   FUNC_2(VAR_2->sb);
 }
}

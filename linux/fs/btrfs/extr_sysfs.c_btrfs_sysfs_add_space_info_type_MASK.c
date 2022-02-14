
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_space_info {int kobj; int flags; } ;
struct btrfs_fs_info {int space_info_kobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int FUNC_3(struct btrfs_fs_info *VAR_1,
        struct btrfs_space_info *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->kobj, &VAR_0,
       VAR_1->space_info_kobj, "%s",
       FUNC_0(VAR_2->flags));
 if (VAR_3) {
  FUNC_2(&VAR_2->kobj);
  return VAR_3;
 }

 return 0;
}

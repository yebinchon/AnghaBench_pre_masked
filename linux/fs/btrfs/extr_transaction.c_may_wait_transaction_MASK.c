
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct btrfs_fs_info *VAR_2, int VAR_3)
{
 if (FUNC_0(VAR_0, &VAR_2->flags))
  return 0;

 if (VAR_3 == VAR_1)
  return 1;

 return 0;
}

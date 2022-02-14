
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * values; } ;
struct btrfs_qgroup {TYPE_1__ rsv; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_qgroup*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct btrfs_fs_info *VAR_1,
         struct btrfs_qgroup *VAR_2,
         struct btrfs_qgroup *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_1, VAR_2, VAR_3->rsv.values[VAR_4], VAR_4);
}

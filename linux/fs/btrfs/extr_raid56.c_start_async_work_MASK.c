
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_raid_bio {int work; TYPE_1__* fs_info; } ;
typedef int btrfs_func_t ;
struct TYPE_2__ {int rmw_workers; } ;


 int FUNC_0 (int *,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct btrfs_raid_bio *VAR_1, btrfs_func_t VAR_2)
{
 FUNC_0(&VAR_1->work, VAR_0, VAR_2, ((void*)0), ((void*)0));
 FUNC_1(VAR_1->fs_info->rmw_workers, &VAR_1->work);
}

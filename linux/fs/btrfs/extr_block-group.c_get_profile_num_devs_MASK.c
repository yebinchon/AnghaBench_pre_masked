
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct TYPE_4__ {scalar_t__ devs_max; } ;
struct TYPE_3__ {scalar_t__ rw_devices; } ;


 size_t FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static u64 FUNC_1(struct btrfs_fs_info *VAR_1, u64 VAR_2)
{
 u64 VAR_3;

 VAR_3 = VAR_0[FUNC_0(VAR_2)].devs_max;
 if (!VAR_3)
  VAR_3 = VAR_1->fs_devices->rw_devices;

 return VAR_3;
}

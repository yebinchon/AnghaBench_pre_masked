
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int objectid; } ;
struct btrfs_root {int dedupe_in_progress; TYPE_1__ root_key; int fs_info; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct btrfs_root *VAR_0)
{
 FUNC_0(VAR_0->fs_info,
"cannot use root %llu for send while deduplications on it are in progress (%d in progress)",
        VAR_0->root_key.objectid, VAR_0->dedupe_in_progress);
}

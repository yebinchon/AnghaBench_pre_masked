
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {scalar_t__ highest_objectid; int objectid_mutex; TYPE_1__ root_key; int fs_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct btrfs_root *VAR_2, u64 *VAR_3)
{
 int VAR_4;
 FUNC_1(&VAR_2->objectid_mutex);

 if (FUNC_3(VAR_2->highest_objectid >= VAR_0)) {
  FUNC_0(VAR_2->fs_info,
      "the objectid of root %llu reaches its highest value",
      VAR_2->root_key.objectid);
  VAR_4 = -VAR_1;
  goto out;
 }

 *VAR_3 = ++VAR_2->highest_objectid;
 VAR_4 = 0;
out:
 FUNC_2(&VAR_2->objectid_mutex);
 return VAR_4;
}

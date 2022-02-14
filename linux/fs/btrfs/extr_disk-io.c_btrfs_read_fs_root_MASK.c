
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {int root_item; int state; TYPE_1__ root_key; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (int *) ;
 struct btrfs_root* FUNC_2 (struct btrfs_root*,struct btrfs_key*) ;
 int FUNC_3 (int ,int *) ;

struct btrfs_root *FUNC_4(struct btrfs_root *VAR_2,
          struct btrfs_key *VAR_3)
{
 struct btrfs_root *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return VAR_4;

 if (VAR_4->root_key.objectid != VAR_1) {
  FUNC_3(VAR_0, &VAR_4->state);
  FUNC_1(&VAR_4->root_item);
 }

 return VAR_4;
}

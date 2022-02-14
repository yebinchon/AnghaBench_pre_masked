
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int root_item; } ;
struct btrfs_fs_info {int subvol_srcu; int fs_roots_radix; } ;


 int FUNC_0 (struct btrfs_root**) ;
 struct btrfs_root* FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_root*) ;
 scalar_t__ FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *,void**,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(struct btrfs_fs_info *VAR_0)
{
 u64 VAR_1 = 0;
 struct btrfs_root *VAR_2[8];
 int VAR_3 = 0;
 int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 int VAR_6;

 while (1) {
  VAR_6 = FUNC_6(&VAR_0->subvol_srcu);
  VAR_5 = FUNC_5(&VAR_0->fs_roots_radix,
          (void **)VAR_2, VAR_1,
          FUNC_0(VAR_2));
  if (!VAR_5) {
   FUNC_7(&VAR_0->subvol_srcu, VAR_6);
   break;
  }
  VAR_1 = VAR_2[VAR_5 - 1]->root_key.objectid + 1;

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {

   if (FUNC_4(&VAR_2[VAR_3]->root_item) == 0) {
    VAR_2[VAR_3] = ((void*)0);
    continue;
   }

   VAR_2[VAR_3] = FUNC_1(VAR_2[VAR_3]);
  }
  FUNC_7(&VAR_0->subvol_srcu, VAR_6);

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   if (!VAR_2[VAR_3])
    continue;
   VAR_1 = VAR_2[VAR_3]->root_key.objectid;
   VAR_4 = FUNC_2(VAR_2[VAR_3]);
   if (VAR_4)
    break;
   FUNC_3(VAR_2[VAR_3]);
  }
  VAR_1++;
 }


 for (; VAR_3 < VAR_5; VAR_3++) {
  if (VAR_2[VAR_3])
   FUNC_3(VAR_2[VAR_3]);
 }
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_changeset {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;
struct TYPE_3__ {int sectorsize; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct inode*,struct extent_changeset*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

void FUNC_5(struct inode *VAR_0,
   struct extent_changeset *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct btrfs_root *VAR_4 = FUNC_0(VAR_0)->root;


 VAR_3 = FUNC_4(VAR_2 + VAR_3, VAR_4->fs_info->sectorsize) -
       FUNC_3(VAR_2, VAR_4->fs_info->sectorsize);
 VAR_2 = FUNC_3(VAR_2, VAR_4->fs_info->sectorsize);

 FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bio_counter; int replace_wait; } ;
struct btrfs_fs_info {TYPE_1__ dev_replace; int fs_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->fs_state);
 FUNC_2(VAR_1->dev_replace.replace_wait, !FUNC_0(
     &VAR_1->dev_replace.bio_counter));
}

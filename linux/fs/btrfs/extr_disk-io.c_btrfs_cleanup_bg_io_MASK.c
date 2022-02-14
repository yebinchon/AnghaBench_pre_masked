
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct TYPE_3__ {struct inode* inode; } ;
struct btrfs_block_group_cache {TYPE_1__ io_ctl; } ;
struct TYPE_4__ {scalar_t__ generation; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static void FUNC_4(struct btrfs_block_group_cache *VAR_0)
{
 struct inode *VAR_1;

 VAR_1 = VAR_0->io_ctl.inode;
 if (VAR_1) {
  FUNC_2(VAR_1->i_mapping);
  FUNC_0(VAR_1)->generation = 0;
  VAR_0->io_ctl.inode = ((void*)0);
  FUNC_3(VAR_1);
 }
 FUNC_1(VAR_0);
}

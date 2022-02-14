
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root_item {int inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root_item*,int ) ;
 int FUNC_1 (struct btrfs_root_item*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_root_item *VAR_1)
{
 u64 VAR_2 = FUNC_3(&VAR_1->inode);

 if (!(VAR_2 & VAR_0)) {
  VAR_2 |= VAR_0;
  FUNC_2(&VAR_1->inode, VAR_2);
  FUNC_0(VAR_1, 0);
  FUNC_1(VAR_1, 0);
 }
}

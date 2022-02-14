
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_rsv {unsigned short type; int lock; } ;


 int FUNC_0 (struct btrfs_block_rsv*,int ,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_block_rsv *VAR_0, unsigned short VAR_1)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 FUNC_1(&VAR_0->lock);
 VAR_0->type = VAR_1;
}

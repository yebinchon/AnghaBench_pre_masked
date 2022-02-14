
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {scalar_t__ reserved; scalar_t__ size; } ;
struct TYPE_7__ {scalar_t__ size; scalar_t__ reserved; } ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ reserved; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ reserved; } ;
struct btrfs_fs_info {TYPE_4__ delayed_refs_rsv; TYPE_3__ delayed_block_rsv; TYPE_2__ chunk_block_rsv; TYPE_1__ trans_block_rsv; int global_block_rsv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_fs_info*,int *,int ) ;

void FUNC_2(struct btrfs_fs_info *VAR_0)
{
 FUNC_1(VAR_0, &VAR_0->global_block_rsv, (u64)-1);
 FUNC_0(VAR_0->trans_block_rsv.size > 0);
 FUNC_0(VAR_0->trans_block_rsv.reserved > 0);
 FUNC_0(VAR_0->chunk_block_rsv.size > 0);
 FUNC_0(VAR_0->chunk_block_rsv.reserved > 0);
 FUNC_0(VAR_0->delayed_block_rsv.size > 0);
 FUNC_0(VAR_0->delayed_block_rsv.reserved > 0);
 FUNC_0(VAR_0->delayed_refs_rsv.reserved > 0);
 FUNC_0(VAR_0->delayed_refs_rsv.size > 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct btrfs_space_info {int dummy; } ;
struct TYPE_15__ {struct btrfs_space_info* space_info; } ;
struct TYPE_13__ {struct btrfs_space_info* space_info; } ;
struct TYPE_21__ {struct btrfs_space_info* space_info; } ;
struct TYPE_18__ {struct btrfs_space_info* space_info; } ;
struct TYPE_17__ {struct btrfs_space_info* space_info; } ;
struct TYPE_16__ {struct btrfs_space_info* space_info; } ;
struct btrfs_fs_info {TYPE_12__ chunk_block_rsv; TYPE_11__* chunk_root; TYPE_10__ global_block_rsv; TYPE_9__* quota_root; TYPE_8__* tree_root; TYPE_7__* dev_root; TYPE_6__ delayed_refs_rsv; TYPE_5__* csum_root; TYPE_4__* extent_root; TYPE_3__ delayed_block_rsv; TYPE_2__ empty_block_rsv; TYPE_1__ trans_block_rsv; } ;
struct TYPE_24__ {TYPE_10__* block_rsv; } ;
struct TYPE_23__ {TYPE_10__* block_rsv; } ;
struct TYPE_22__ {TYPE_10__* block_rsv; } ;
struct TYPE_20__ {TYPE_6__* block_rsv; } ;
struct TYPE_19__ {TYPE_6__* block_rsv; } ;
struct TYPE_14__ {TYPE_12__* block_rsv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_space_info* FUNC_0 (struct btrfs_fs_info*,int ) ;
 int FUNC_1 (struct btrfs_fs_info*) ;

void FUNC_2(struct btrfs_fs_info *VAR_2)
{
 struct btrfs_space_info *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_2->chunk_block_rsv.space_info = VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_2->global_block_rsv.space_info = VAR_3;
 VAR_2->trans_block_rsv.space_info = VAR_3;
 VAR_2->empty_block_rsv.space_info = VAR_3;
 VAR_2->delayed_block_rsv.space_info = VAR_3;
 VAR_2->delayed_refs_rsv.space_info = VAR_3;

 VAR_2->extent_root->block_rsv = &VAR_2->delayed_refs_rsv;
 VAR_2->csum_root->block_rsv = &VAR_2->delayed_refs_rsv;
 VAR_2->dev_root->block_rsv = &VAR_2->global_block_rsv;
 VAR_2->tree_root->block_rsv = &VAR_2->global_block_rsv;
 if (VAR_2->quota_root)
  VAR_2->quota_root->block_rsv = &VAR_2->global_block_rsv;
 VAR_2->chunk_root->block_rsv = &VAR_2->chunk_block_rsv;

 FUNC_1(VAR_2);
}

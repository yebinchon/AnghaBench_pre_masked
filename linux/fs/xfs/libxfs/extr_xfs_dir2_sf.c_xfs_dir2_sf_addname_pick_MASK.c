
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ if_data; } ;
struct TYPE_18__ {TYPE_1__ if_u1; } ;
struct TYPE_21__ {TYPE_3__* d_ops; TYPE_2__ i_df; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_22__ {int count; } ;
typedef TYPE_6__ xfs_dir2_sf_hdr_t ;
struct TYPE_23__ {int namelen; } ;
typedef TYPE_7__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
typedef int xfs_dir2_block_tail_t ;
struct TYPE_24__ {TYPE_4__* geo; int namelen; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
typedef int uint ;
struct TYPE_20__ {int blksize; } ;
struct TYPE_19__ {int (* data_entsize ) (int ) ;int data_first_offset; TYPE_7__* (* sf_nextentry ) (TYPE_6__*,TYPE_7__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_6__*,TYPE_7__*) ;
 TYPE_7__* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static int
FUNC_5(
 xfs_da_args_t *VAR_0,
 int VAR_1,
 xfs_dir2_sf_entry_t **VAR_2,
 xfs_dir2_data_aoff_t *VAR_3)
{
 xfs_inode_t *VAR_4;
 int VAR_5;
 int VAR_6;
 xfs_dir2_data_aoff_t VAR_7;
 xfs_dir2_sf_entry_t *VAR_8;
 xfs_dir2_sf_hdr_t *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_4 = VAR_0->dp;

 VAR_9 = (xfs_dir2_sf_hdr_t *)VAR_4->i_df.if_u1.if_data;
 VAR_10 = VAR_4->d_ops->data_entsize(VAR_0->namelen);
 VAR_7 = VAR_4->d_ops->data_first_offset;
 VAR_8 = FUNC_3(VAR_9);
 VAR_5 = 0;





 for (VAR_6 = 0; VAR_6 < VAR_9->count; VAR_6++) {
  if (!VAR_5)
   VAR_5 = VAR_7 + VAR_10 <= FUNC_4(VAR_8);
  VAR_7 = FUNC_4(VAR_8) +
    VAR_4->d_ops->data_entsize(VAR_8->namelen);
  VAR_8 = VAR_4->d_ops->sf_nextentry(VAR_9, VAR_8);
 }




 VAR_11 = VAR_7 +
        (VAR_9->count + 3) * (uint)sizeof(xfs_dir2_leaf_entry_t) +
        (uint)sizeof(xfs_dir2_block_tail_t);





 if (VAR_11 + (VAR_5 ? 0 : VAR_10) > VAR_0->geo->blksize)
  return 0;



 if (VAR_1)
  return 2;



 if (VAR_11 + VAR_10 > VAR_0->geo->blksize)
  return 2;



 *VAR_2 = VAR_8;
 *VAR_3 = VAR_7;
 return 1;
}

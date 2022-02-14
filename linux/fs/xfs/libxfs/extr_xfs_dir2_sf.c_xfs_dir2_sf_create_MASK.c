
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int di_size; scalar_t__ di_format; } ;
struct TYPE_14__ {scalar_t__ if_data; } ;
struct TYPE_15__ {int if_flags; scalar_t__ if_bytes; TYPE_1__ if_u1; } ;
struct TYPE_18__ {TYPE_4__ i_d; TYPE_3__* d_ops; TYPE_2__ i_df; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef int xfs_ino_t ;
struct TYPE_19__ {int i8count; scalar_t__ count; } ;
typedef TYPE_6__ xfs_dir2_sf_hdr_t ;
struct TYPE_20__ {int trans; TYPE_5__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct TYPE_16__ {int (* sf_put_parent_ino ) (TYPE_6__*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int,int ) ;
 int FUNC_6 (int ,TYPE_5__*,int) ;

int
FUNC_7(
 xfs_da_args_t *VAR_8,
 xfs_ino_t VAR_9)
{
 xfs_inode_t *VAR_10;
 int VAR_11;
 xfs_dir2_sf_hdr_t *VAR_12;
 int VAR_13;

 FUNC_2(VAR_8);

 VAR_10 = VAR_8->dp;

 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(VAR_10->i_d.di_size == 0);




 if (VAR_10->i_d.di_format == VAR_1) {
  VAR_10->i_df.if_flags &= ~VAR_4;
  VAR_10->i_d.di_format = VAR_2;
  FUNC_6(VAR_8->trans, VAR_10, VAR_6);
  VAR_10->i_df.if_flags |= VAR_5;
 }
 FUNC_0(VAR_10->i_df.if_flags & VAR_5);
 FUNC_0(VAR_10->i_df.if_bytes == 0);
 VAR_11 = VAR_9 > VAR_3;
 VAR_13 = FUNC_4(VAR_11);



 FUNC_5(VAR_10, VAR_13, VAR_0);



 VAR_12 = (xfs_dir2_sf_hdr_t *)VAR_10->i_df.if_u1.if_data;
 VAR_12->i8count = VAR_11;



 VAR_10->d_ops->sf_put_parent_ino(VAR_12, VAR_9);
 VAR_12->count = 0;
 VAR_10->i_d.di_size = VAR_13;
 FUNC_3(VAR_8);
 FUNC_6(VAR_8->trans, VAR_10, VAR_6 | VAR_7);
 return 0;
}

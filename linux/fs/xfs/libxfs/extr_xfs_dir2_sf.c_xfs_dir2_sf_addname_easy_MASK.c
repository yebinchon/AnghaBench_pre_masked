
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int di_size; } ;
struct TYPE_18__ {scalar_t__ if_data; } ;
struct TYPE_19__ {TYPE_1__ if_u1; } ;
struct TYPE_22__ {TYPE_4__ i_d; TYPE_3__* d_ops; TYPE_2__ i_df; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_23__ {int i8count; int count; } ;
typedef TYPE_6__ xfs_dir2_sf_hdr_t ;
struct TYPE_24__ {int namelen; int name; } ;
typedef TYPE_7__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_25__ {scalar_t__ inumber; int filetype; int name; int namelen; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
struct TYPE_20__ {int (* sf_put_ftype ) (TYPE_7__*,int ) ;int (* sf_put_ino ) (TYPE_6__*,TYPE_7__*,scalar_t__) ;int (* sf_entsize ) (TYPE_6__*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*,scalar_t__) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(
 xfs_da_args_t *VAR_2,
 xfs_dir2_sf_entry_t *VAR_3,
 xfs_dir2_data_aoff_t VAR_4,
 int VAR_5)
{
 int VAR_6;
 xfs_inode_t *VAR_7;
 xfs_dir2_sf_hdr_t *VAR_8;

 VAR_7 = VAR_2->dp;

 VAR_8 = (xfs_dir2_sf_hdr_t *)VAR_7->i_df.if_u1.if_data;
 VAR_6 = (int)((char *)VAR_3 - (char *)VAR_8);



 FUNC_6(VAR_7, VAR_7->d_ops->sf_entsize(VAR_8, VAR_2->namelen),
     VAR_0);



 VAR_8 = (xfs_dir2_sf_hdr_t *)VAR_7->i_df.if_u1.if_data;
 VAR_3 = (xfs_dir2_sf_entry_t *)((char *)VAR_8 + VAR_6);



 VAR_3->namelen = VAR_2->namelen;
 FUNC_5(VAR_3, VAR_4);
 FUNC_0(VAR_3->name, VAR_2->name, VAR_3->namelen);
 VAR_7->d_ops->sf_put_ino(VAR_8, VAR_3, VAR_2->inumber);
 VAR_7->d_ops->sf_put_ftype(VAR_3, VAR_2->filetype);




 VAR_8->count++;
 if (VAR_2->inumber > VAR_1)
  VAR_8->i8count++;
 VAR_7->i_d.di_size = VAR_5;
 FUNC_4(VAR_2);
}

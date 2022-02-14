
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_30__ {int di_size; } ;
struct TYPE_27__ {scalar_t__ if_data; } ;
struct TYPE_28__ {TYPE_1__ if_u1; } ;
struct TYPE_31__ {TYPE_4__ i_d; TYPE_3__* d_ops; TYPE_2__ i_df; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_32__ {int namelen; int i8count; int count; struct TYPE_32__* name; } ;
typedef TYPE_6__ xfs_dir2_sf_hdr_t ;
typedef TYPE_6__ xfs_dir2_sf_entry_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct TYPE_33__ {int namelen; scalar_t__ inumber; int filetype; TYPE_6__* name; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
struct TYPE_29__ {scalar_t__ data_first_offset; int (* data_entsize ) (int) ;TYPE_6__* (* sf_nextentry ) (TYPE_6__*,TYPE_6__*) ;int (* sf_put_ftype ) (TYPE_6__*,int ) ;int (* sf_put_ino ) (TYPE_6__*,TYPE_6__*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 TYPE_6__* FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*,scalar_t__) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 TYPE_6__* FUNC_8 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_8__*) ;
 TYPE_6__* FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,scalar_t__) ;
 int FUNC_13 (TYPE_5__*,int,int ) ;

__attribute__((used)) static void
FUNC_14(
 xfs_da_args_t *VAR_2,
 int VAR_3,
 int VAR_4)
{
 int VAR_5;
 char *VAR_6;
 xfs_inode_t *VAR_7;
 int VAR_8;
 int VAR_9;
 xfs_dir2_data_aoff_t VAR_10;
 xfs_dir2_data_aoff_t VAR_11;
 int VAR_12;
 xfs_dir2_sf_entry_t *VAR_13;
 xfs_dir2_sf_hdr_t *VAR_14;
 xfs_dir2_sf_entry_t *VAR_15;
 xfs_dir2_sf_hdr_t *VAR_16;




 VAR_7 = VAR_2->dp;

 VAR_16 = (xfs_dir2_sf_hdr_t *)VAR_7->i_df.if_u1.if_data;
 VAR_12 = (int)VAR_7->i_d.di_size;
 VAR_6 = FUNC_0(VAR_12, 0);
 VAR_14 = (xfs_dir2_sf_hdr_t *)VAR_6;
 FUNC_2(VAR_14, VAR_16, VAR_12);





 for (VAR_11 = VAR_7->d_ops->data_first_offset,
       VAR_13 = FUNC_10(VAR_14),
       VAR_5 = VAR_7->d_ops->data_entsize(VAR_2->namelen),
       VAR_8 = (char *)VAR_13 == &VAR_6[VAR_12];
      !VAR_8;
      VAR_11 = VAR_10 + VAR_7->d_ops->data_entsize(VAR_13->namelen),
       VAR_13 = VAR_7->d_ops->sf_nextentry(VAR_14, VAR_13),
       VAR_8 = (char *)VAR_13 == &VAR_6[VAR_12]) {
  VAR_10 = FUNC_11(VAR_13);
  if (VAR_11 + VAR_5 <= VAR_10)
   break;
 }





 FUNC_13(VAR_7, -VAR_12, VAR_0);
 FUNC_13(VAR_7, VAR_4, VAR_0);



 VAR_16 = (xfs_dir2_sf_hdr_t *)VAR_7->i_df.if_u1.if_data;



 VAR_9 = (int)((char *)VAR_13 - (char *)VAR_14);
 FUNC_2(VAR_16, VAR_14, VAR_9);
 VAR_15 = (xfs_dir2_sf_entry_t *)((char *)VAR_16 + VAR_9);



 VAR_15->namelen = VAR_2->namelen;
 FUNC_12(VAR_15, VAR_11);
 FUNC_2(VAR_15->name, VAR_2->name, VAR_15->namelen);
 VAR_7->d_ops->sf_put_ino(VAR_16, VAR_15, VAR_2->inumber);
 VAR_7->d_ops->sf_put_ftype(VAR_15, VAR_2->filetype);
 VAR_16->count++;
 if (VAR_2->inumber > VAR_1 && !VAR_3)
  VAR_16->i8count++;



 if (!VAR_8) {
  VAR_15 = VAR_7->d_ops->sf_nextentry(VAR_16, VAR_15);
  FUNC_2(VAR_15, VAR_13, VAR_12 - VAR_9);
 }
 FUNC_1(VAR_6);
 VAR_7->i_d.di_size = VAR_4;
 FUNC_9(VAR_2);
}

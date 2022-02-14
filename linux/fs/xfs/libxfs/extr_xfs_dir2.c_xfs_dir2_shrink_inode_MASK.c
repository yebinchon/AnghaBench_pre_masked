
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef scalar_t__ xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_5__ {scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct xfs_da_args {TYPE_2__* geo; struct xfs_trans* trans; struct xfs_inode* dp; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_6__ {scalar_t__ datablk; int fsbcount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_da_args*,scalar_t__) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_inode*,scalar_t__*,int ) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_inode*,scalar_t__,int ,int ,int ,int*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (struct xfs_trans*,struct xfs_buf*) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_10(
 struct xfs_da_args *VAR_3,
 xfs_dir2_db_t VAR_4,
 struct xfs_buf *VAR_5)
{
 xfs_fileoff_t VAR_6;
 xfs_dablk_t VAR_7;
 int VAR_8;
 struct xfs_inode *VAR_9;
 int VAR_10;
 struct xfs_mount *VAR_11;
 struct xfs_trans *VAR_12;

 FUNC_2(VAR_3, VAR_4);

 VAR_9 = VAR_3->dp;
 VAR_11 = VAR_9->i_mount;
 VAR_12 = VAR_3->trans;
 VAR_7 = FUNC_7(VAR_3->geo, VAR_4);


 VAR_10 = FUNC_4(VAR_12, VAR_9, VAR_7, VAR_3->geo->fsbcount, 0, 0, &VAR_8);
 if (VAR_10) {
  return VAR_10;
 }
 FUNC_0(VAR_8);



 FUNC_8(VAR_12, VAR_5);



 if (VAR_4 >= FUNC_5(VAR_3->geo, VAR_1))
  return 0;



 if (VAR_9->i_d.di_size > FUNC_6(VAR_3->geo, VAR_4 + 1, 0))
  return 0;
 VAR_6 = VAR_7;
 if ((VAR_10 = FUNC_3(VAR_12, VAR_9, &VAR_6, VAR_0))) {



  return VAR_10;
 }
 if (VAR_4 == VAR_3->geo->datablk)
  FUNC_0(VAR_6 == 0);
 else
  FUNC_0(VAR_6 > 0);



 VAR_9->i_d.di_size = FUNC_1(VAR_11, VAR_6);
 FUNC_9(VAR_12, VAR_9, VAR_2);
 return 0;
}

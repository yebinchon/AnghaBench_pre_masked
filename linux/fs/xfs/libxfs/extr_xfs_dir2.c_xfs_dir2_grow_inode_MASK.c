
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_fsize_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_dir2_db_t ;
typedef int xfs_dablk_t ;
struct xfs_mount {int dummy; } ;
struct TYPE_3__ {scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct xfs_da_args {int trans; TYPE_2__* geo; struct xfs_inode* dp; } ;
struct TYPE_4__ {int fsbcount; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_da_args*,int) ;
 int FUNC_3 (struct xfs_da_args*,scalar_t__*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int ,struct xfs_inode*,int ) ;

int
FUNC_6(
 struct xfs_da_args *VAR_3,
 int VAR_4,
 xfs_dir2_db_t *VAR_5)
{
 struct xfs_inode *VAR_6 = VAR_3->dp;
 struct xfs_mount *VAR_7 = VAR_6->i_mount;
 xfs_fileoff_t VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_2(VAR_3, VAR_4);




 VAR_8 = FUNC_0(VAR_7, VAR_4 * VAR_1);
 VAR_9 = VAR_3->geo->fsbcount;

 VAR_10 = FUNC_3(VAR_3, &VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 *VAR_5 = FUNC_4(VAR_3->geo, (xfs_dablk_t)VAR_8);




 if (VAR_4 == VAR_0) {
  xfs_fsize_t VAR_11;

  VAR_11 = FUNC_1(VAR_7, VAR_8 + VAR_9);
  if (VAR_11 > VAR_6->i_d.di_size) {
   VAR_6->i_d.di_size = VAR_11;
   FUNC_5(VAR_3->trans, VAR_6, VAR_2);
  }
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ xfs_dir2_db_t ;
struct TYPE_5__ {int geo; struct xfs_trans* trans; struct xfs_inode* dp; } ;
typedef TYPE_1__ xfs_da_args_t ;
typedef int uint16_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_ino; struct xfs_mount* i_mount; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct xfs_mount*,struct xfs_trans*,struct xfs_buf*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,struct xfs_buf*) ;
 int FUNC_6 (TYPE_1__*,struct xfs_buf*) ;

int
FUNC_7(
 xfs_da_args_t *VAR_5,
 xfs_dir2_db_t VAR_6,
 struct xfs_buf **VAR_7,
 uint16_t VAR_8)
{
 struct xfs_inode *VAR_9 = VAR_5->dp;
 struct xfs_trans *VAR_10 = VAR_5->trans;
 struct xfs_mount *VAR_11 = VAR_9->i_mount;
 struct xfs_buf *VAR_12;
 int VAR_13;

 FUNC_0(VAR_8 == VAR_2 || VAR_8 == VAR_3);
 FUNC_0(VAR_6 >= FUNC_2(VAR_5->geo, VAR_4) &&
        VAR_6 < FUNC_2(VAR_5->geo, VAR_1));

 VAR_13 = FUNC_1(VAR_10, VAR_9, FUNC_3(VAR_5->geo, VAR_6),
          -1, &VAR_12, VAR_0);
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_11, VAR_10, VAR_12, VAR_9->i_ino, VAR_8);
 FUNC_5(VAR_5, VAR_12);
 if (VAR_8 == VAR_2)
  FUNC_6(VAR_5, VAR_12);
 *VAR_7 = VAR_12;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_4__ {int di_flags; } ;
struct xfs_inode {TYPE_1__ i_d; int i_mount; } ;
typedef enum xfs_prealloc_flags { ____Placeholder_xfs_prealloc_flags } xfs_prealloc_flags ;
struct TYPE_6__ {int tr_writeid; } ;
struct TYPE_5__ {int i_mode; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct xfs_inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (int ,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_4 (struct xfs_trans*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_trans*) ;

int
FUNC_9(
 struct xfs_inode *VAR_12,
 enum xfs_prealloc_flags VAR_13)
{
 struct xfs_trans *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_12->i_mount, &FUNC_0(VAR_12->i_mount)->tr_writeid,
   0, 0, 0, &VAR_14);
 if (VAR_15)
  return VAR_15;

 FUNC_2(VAR_12, VAR_6);
 FUNC_6(VAR_14, VAR_12, VAR_6);

 if (!(VAR_13 & VAR_9)) {
  FUNC_1(VAR_12)->i_mode &= ~VAR_1;
  if (FUNC_1(VAR_12)->i_mode & VAR_2)
   FUNC_1(VAR_12)->i_mode &= ~VAR_0;
  FUNC_5(VAR_14, VAR_12, VAR_5 | VAR_4);
 }

 if (VAR_13 & VAR_10)
  VAR_12->i_d.di_flags |= VAR_3;
 if (VAR_13 & VAR_8)
  VAR_12->i_d.di_flags &= ~VAR_3;

 FUNC_7(VAR_14, VAR_12, VAR_7);
 if (VAR_13 & VAR_11)
  FUNC_8(VAR_14);
 return FUNC_4(VAR_14);
}

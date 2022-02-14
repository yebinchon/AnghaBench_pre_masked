
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_3__ {scalar_t__ di_aformat; } ;
struct xfs_inode {scalar_t__ i_afp; TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct TYPE_4__ {int tr_attrinval; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct xfs_mount*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct xfs_inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct xfs_mount*,struct xfs_inode*) ;
 int FUNC_4 (struct xfs_trans**,struct xfs_inode*) ;
 int FUNC_5 (struct xfs_inode*,struct xfs_trans*) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int) ;
 scalar_t__ FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (struct xfs_trans**,struct xfs_inode*,int ,int ) ;
 int FUNC_10 (struct xfs_inode*,int) ;
 int FUNC_11 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_12 (struct xfs_trans*) ;
 int FUNC_13 (struct xfs_trans*) ;
 int FUNC_14 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_15(
 struct xfs_inode *VAR_4)
{
 struct xfs_trans *VAR_5;
 struct xfs_mount *VAR_6;
 int VAR_7 = VAR_3;
 int VAR_8 = 0;

 VAR_6 = VAR_4->i_mount;
 FUNC_0(! FUNC_3(VAR_6, VAR_4));

 FUNC_7(VAR_4, VAR_7);
 if (!FUNC_2(VAR_4))
  goto out_destroy_fork;
 FUNC_10(VAR_4, VAR_7);

 VAR_7 = 0;

 VAR_8 = FUNC_11(VAR_6, &FUNC_1(VAR_6)->tr_attrinval, 0, 0, 0, &VAR_5);
 if (VAR_8)
  goto out_destroy_fork;

 VAR_7 = VAR_2;
 FUNC_7(VAR_4, VAR_7);

 if (!FUNC_2(VAR_4))
  goto out_cancel;





 FUNC_14(VAR_5, VAR_4, 0);







 if (FUNC_8(VAR_4) &&
     VAR_4->i_d.di_aformat != VAR_1) {
  VAR_8 = FUNC_4(&VAR_5, VAR_4);
  if (VAR_8)
   goto out_cancel;

  VAR_8 = FUNC_9(&VAR_5, VAR_4, VAR_0, 0);
  if (VAR_8)
   goto out_cancel;
 }


 FUNC_5(VAR_4, VAR_5);

 VAR_8 = FUNC_13(VAR_5);
 FUNC_10(VAR_4, VAR_7);
 return VAR_8;

out_cancel:
 FUNC_12(VAR_5);
out_destroy_fork:

 if (VAR_4->i_afp)
  FUNC_6(VAR_4, VAR_0);
 if (VAR_7)
  FUNC_10(VAR_4, VAR_7);
 return VAR_8;
}

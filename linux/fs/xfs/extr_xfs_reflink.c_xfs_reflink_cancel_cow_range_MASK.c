
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_off_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {int i_mount; int i_cowfp; } ;
struct TYPE_2__ {int tr_write; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct xfs_inode*,int,int ) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*,struct xfs_trans**,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_10 (struct xfs_trans*) ;
 int FUNC_11 (struct xfs_trans*) ;
 int FUNC_12 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_13(
 struct xfs_inode *VAR_3,
 xfs_off_t VAR_4,
 xfs_off_t VAR_5,
 bool VAR_6)
{
 struct xfs_trans *VAR_7;
 xfs_fileoff_t VAR_8;
 xfs_fileoff_t VAR_9;
 int VAR_10;

 FUNC_4(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_3->i_cowfp);

 VAR_8 = FUNC_3(VAR_3->i_mount, VAR_4);
 if (VAR_5 == VAR_0)
  VAR_9 = VAR_0;
 else
  VAR_9 = FUNC_2(VAR_3->i_mount, VAR_4 + VAR_5);


 VAR_10 = FUNC_9(VAR_3->i_mount, &FUNC_1(VAR_3->i_mount)->tr_write,
   0, 0, 0, &VAR_7);
 if (VAR_10)
  goto out;

 FUNC_6(VAR_3, VAR_1);
 FUNC_12(VAR_7, VAR_3, 0);


 VAR_10 = FUNC_8(VAR_3, &VAR_7, VAR_8, VAR_9,
   VAR_6);
 if (VAR_10)
  goto out_cancel;

 VAR_10 = FUNC_11(VAR_7);

 FUNC_7(VAR_3, VAR_1);
 return VAR_10;

out_cancel:
 FUNC_10(VAR_7);
 FUNC_7(VAR_3, VAR_1);
out:
 FUNC_5(VAR_3, VAR_10, VAR_2);
 return VAR_10;
}

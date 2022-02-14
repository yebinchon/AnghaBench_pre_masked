
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_pdquot; int i_gdquot; int i_udquot; struct xfs_mount* i_mount; } ;
struct TYPE_2__ {int tr_write; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct xfs_mount*) ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_3 (struct xfs_mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct xfs_trans*,struct xfs_inode*,int ,int ,int ,int,int*) ;
 int FUNC_5 (struct xfs_inode*,int ) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_8 (struct xfs_trans*) ;
 int FUNC_9 (struct xfs_trans*) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_mount*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(
 struct xfs_inode *VAR_3,
 xfs_fileoff_t VAR_4,
 xfs_filblks_t VAR_5,
 int *VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_3->i_mount;
 struct xfs_trans *VAR_8;
 uint VAR_9 = FUNC_2(VAR_7, 0);
 int VAR_10;

 VAR_10 = FUNC_7(VAR_7, &FUNC_1(VAR_7)->tr_write, VAR_9, 0, 0, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_10 == -VAR_0 || FUNC_3(VAR_7));
  return VAR_10;
 }

 FUNC_5(VAR_3, VAR_1);
 VAR_10 = FUNC_11(VAR_8, VAR_7, VAR_3->i_udquot, VAR_3->i_gdquot,
   VAR_3->i_pdquot, VAR_9, 0, VAR_2);
 if (VAR_10)
  goto out_trans_cancel;

 FUNC_10(VAR_8, VAR_3, 0);

 VAR_10 = FUNC_4(VAR_8, VAR_3, VAR_4, VAR_5, 0, 2, VAR_6);
 if (VAR_10)
  goto out_trans_cancel;

 VAR_10 = FUNC_9(VAR_8);
out_unlock:
 FUNC_6(VAR_3, VAR_1);
 return VAR_10;

out_trans_cancel:
 FUNC_8(VAR_8);
 goto out_unlock;
}

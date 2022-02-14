
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {int dummy; } ;
struct TYPE_2__ {scalar_t__ di_format; scalar_t__ di_nextents; } ;
struct xfs_inode {int i_imap; TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct xfs_dinode {int dummy; } ;
struct xfs_buf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct xfs_mount*) ;
 scalar_t__ FUNC_2 (struct xfs_inode*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_buf*) ;
 int FUNC_6 (struct xfs_mount*,int ) ;
 scalar_t__ FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*,int) ;
 int FUNC_9 (struct xfs_inode*,struct xfs_buf*) ;
 int FUNC_10 (struct xfs_inode*,struct xfs_buf*) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_mount*,int *,int *,struct xfs_dinode**,struct xfs_buf**,int ,int ) ;
 int FUNC_13 (struct xfs_inode*) ;
 int FUNC_14 (struct xfs_inode*,int) ;
 int FUNC_15 (struct xfs_inode*) ;
 int FUNC_16 (struct xfs_mount*,int ) ;
 int VAR_9 ;

int
FUNC_17(
 struct xfs_inode *VAR_10,
 struct xfs_buf **VAR_11)
{
 struct xfs_mount *VAR_12 = VAR_10->i_mount;
 struct xfs_buf *VAR_13 = ((void*)0);
 struct xfs_dinode *VAR_14;
 int VAR_15;

 FUNC_3(VAR_12, VAR_9);

 FUNC_0(FUNC_14(VAR_10, VAR_6|VAR_7));
 FUNC_0(FUNC_13(VAR_10));
 FUNC_0(VAR_10->i_d.di_format != VAR_5 ||
        VAR_10->i_d.di_nextents > FUNC_2(VAR_10, VAR_4));

 *VAR_11 = ((void*)0);

 FUNC_15(VAR_10);
 if (FUNC_7(VAR_10, VAR_8)) {
  FUNC_11(VAR_10);
  return 0;
 }
 if (FUNC_1(VAR_12)) {
  VAR_15 = -VAR_1;
  goto abort_out;
 }
 VAR_15 = FUNC_12(VAR_12, ((void*)0), &VAR_10->i_imap, &VAR_14, &VAR_13, VAR_3,
          0);
 if (VAR_15 == -VAR_0) {
  FUNC_11(VAR_10);
  return VAR_15;
 }
 if (VAR_15)
  goto corrupt_out;




 VAR_15 = FUNC_10(VAR_10, VAR_13);
 if (VAR_15)
  goto corrupt_out;





 if (FUNC_4(VAR_13))
  FUNC_16(VAR_12, 0);
 VAR_15 = FUNC_9(VAR_10, VAR_13);
 if (VAR_15)
  return VAR_15;

 *VAR_11 = VAR_13;
 return 0;

corrupt_out:
 if (VAR_13)
  FUNC_5(VAR_13);
 FUNC_6(VAR_12, VAR_2);
abort_out:

 FUNC_8(VAR_10, 0);
 return VAR_15;
}

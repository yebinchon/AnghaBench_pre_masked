
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
typedef int loff_t ;
struct TYPE_2__ {int tr_write; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct xfs_mount*) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct xfs_inode*) ;
 int FUNC_4 (struct xfs_inode*,int ,int ) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_inode*,int *,int ,int*,int ) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*,int ) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_11 (struct xfs_trans*) ;
 int FUNC_12 (struct xfs_trans*) ;
 int FUNC_13 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_14(
 struct xfs_inode *VAR_4,
 loff_t VAR_5,
 loff_t VAR_6)
{
 struct xfs_mount *VAR_7 = VAR_4->i_mount;
 struct xfs_trans *VAR_8;
 int VAR_9;
 xfs_fileoff_t VAR_10 = FUNC_2(VAR_7, VAR_5);
 xfs_fileoff_t VAR_11 = VAR_0;
 xfs_fileoff_t VAR_12 = FUNC_2(VAR_7, VAR_6);
 bool VAR_13 = 0;

 FUNC_0(FUNC_8(VAR_4, VAR_2));
 FUNC_0(FUNC_8(VAR_4, VAR_3));

 FUNC_3(VAR_4);

 VAR_9 = FUNC_4(VAR_4, VAR_10, VAR_12);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_9(VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;






 VAR_9 = FUNC_6(VAR_4, VAR_10);
 if (VAR_9)
  return VAR_9;

 while (!VAR_9 && !VAR_13) {
  VAR_9 = FUNC_10(VAR_7, &FUNC_1(VAR_7)->tr_write, 0, 0, 0,
     &VAR_8);
  if (VAR_9)
   break;

  FUNC_7(VAR_4, VAR_1);
  FUNC_13(VAR_8, VAR_4, VAR_1);
  VAR_9 = FUNC_5(VAR_8, VAR_4, &VAR_11, VAR_12,
    &VAR_13, VAR_10);
  if (VAR_9)
   goto out_trans_cancel;

  VAR_9 = FUNC_12(VAR_8);
 }

 return VAR_9;

out_trans_cancel:
 FUNC_11(VAR_8);
 return VAR_9;
}

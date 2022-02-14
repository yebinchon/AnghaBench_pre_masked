
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_off_t ;
typedef int xfs_fileoff_t ;
typedef int xfs_filblks_t ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct TYPE_4__ {int i_mapping; } ;


 TYPE_1__* FUNC_0 (struct xfs_inode*) ;
 int FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct xfs_inode*,int,int ) ;
 int FUNC_8 (struct xfs_inode*,int ) ;
 int FUNC_9 (struct xfs_inode*) ;
 int FUNC_10 (struct xfs_inode*,int ) ;
 int FUNC_11 (struct xfs_inode*,int ,int ,scalar_t__) ;
 int FUNC_12 (struct xfs_inode*) ;

int
FUNC_13(
 struct xfs_inode *VAR_2,
 xfs_off_t VAR_3,
 xfs_off_t VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_2->i_mount;
 xfs_fileoff_t VAR_6;
 xfs_filblks_t VAR_7;
 xfs_off_t VAR_8;
 int VAR_9;

 if (!FUNC_9(VAR_2))
  return 0;

 FUNC_6(VAR_2, VAR_3, VAR_4);

 FUNC_5(FUNC_0(VAR_2));


 FUNC_8(VAR_2, VAR_0);
 VAR_6 = FUNC_2(VAR_5, VAR_3);
 VAR_8 = FUNC_4(FUNC_0(VAR_2));
 VAR_7 = FUNC_1(VAR_5, VAR_3 + VAR_4);
 VAR_9 = FUNC_11(VAR_2, VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  goto out_unlock;
 FUNC_10(VAR_2, VAR_0);


 VAR_9 = FUNC_3(FUNC_0(VAR_2)->i_mapping);
 if (VAR_9)
  goto out;


 VAR_9 = FUNC_12(VAR_2);
 if (VAR_9)
  goto out;

 return 0;

out_unlock:
 FUNC_10(VAR_2, VAR_0);
out:
 FUNC_7(VAR_2, VAR_9, VAR_1);
 return VAR_9;
}

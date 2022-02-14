
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {int dummy; } ;
struct xfs_da_args {int whichfork; TYPE_1__* geo; struct xfs_trans* trans; struct xfs_inode* dp; } ;
struct xfs_buf {int dummy; } ;
struct TYPE_2__ {int fsbcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_da_args*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct xfs_trans*,struct xfs_inode*,int ,int,int ,int ,int*) ;
 int FUNC_3 (struct xfs_da_args*,int *,struct xfs_buf**) ;
 int FUNC_4 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_5(
 struct xfs_da_args *VAR_2,
 xfs_dablk_t VAR_3,
 struct xfs_buf *VAR_4)
{
 struct xfs_inode *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 struct xfs_trans *VAR_10;

 FUNC_0(VAR_2);

 VAR_5 = VAR_2->dp;
 VAR_8 = VAR_2->whichfork;
 VAR_10 = VAR_2->trans;
 VAR_9 = VAR_2->geo->fsbcount;
 for (;;) {




  VAR_7 = FUNC_2(VAR_10, VAR_5, VAR_3, VAR_9,
        FUNC_1(VAR_8), 0, &VAR_6);
  if (VAR_7 == -VAR_0) {
   if (VAR_8 != VAR_1)
    break;
   VAR_7 = FUNC_3(VAR_2, &VAR_3,
            &VAR_4);
   if (VAR_7)
    break;
  } else {
   break;
  }
 }
 FUNC_4(VAR_10, VAR_4);
 return VAR_7;
}

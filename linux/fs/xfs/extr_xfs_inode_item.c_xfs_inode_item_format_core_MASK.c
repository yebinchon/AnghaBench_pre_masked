
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_log_vec {int dummy; } ;
struct xfs_log_iovec {int dummy; } ;
struct xfs_log_dinode {int dummy; } ;
struct TYPE_6__ {int di_version; } ;
struct xfs_inode {TYPE_3__ i_d; TYPE_2__* i_itemp; } ;
struct TYPE_4__ {int li_lsn; } ;
struct TYPE_5__ {TYPE_1__ ili_item; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_inode*,struct xfs_log_dinode*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_log_vec*,struct xfs_log_iovec*,int ) ;
 struct xfs_log_dinode* FUNC_3 (struct xfs_log_vec*,struct xfs_log_iovec**,int ) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_inode *VAR_1,
 struct xfs_log_vec *VAR_2,
 struct xfs_log_iovec **VAR_3)
{
 struct xfs_log_dinode *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_0);
 FUNC_0(VAR_1, VAR_4, VAR_1->i_itemp->ili_item.li_lsn);
 FUNC_2(VAR_2, *VAR_3, FUNC_1(VAR_1->i_d.di_version));
}

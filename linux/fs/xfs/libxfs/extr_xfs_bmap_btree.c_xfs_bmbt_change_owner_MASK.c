
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_ino_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_6__ {scalar_t__ di_format; scalar_t__ di_aformat; } ;
struct xfs_inode {int i_mount; TYPE_3__ i_d; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ b; } ;
struct xfs_btree_cur {TYPE_2__ bc_private; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct xfs_btree_cur* FUNC_1 (int ,struct xfs_trans*,struct xfs_inode*,int) ;
 int FUNC_2 (struct xfs_btree_cur*,int ,struct list_head*) ;
 int FUNC_3 (struct xfs_btree_cur*,int) ;

int
FUNC_4(
 struct xfs_trans *VAR_4,
 struct xfs_inode *VAR_5,
 int VAR_6,
 xfs_ino_t VAR_7,
 struct list_head *VAR_8)
{
 struct xfs_btree_cur *VAR_9;
 int VAR_10;

 FUNC_0(VAR_4 || VAR_8);
 FUNC_0(!(VAR_4 && VAR_8));
 if (VAR_6 == VAR_2)
  FUNC_0(VAR_5->i_d.di_format == VAR_3);
 else
  FUNC_0(VAR_5->i_d.di_aformat == VAR_3);

 VAR_9 = FUNC_1(VAR_5->i_mount, VAR_4, VAR_5, VAR_6);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->bc_private.b.flags |= VAR_1;

 VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_8);
 FUNC_3(VAR_9, VAR_10);
 return VAR_10;
}

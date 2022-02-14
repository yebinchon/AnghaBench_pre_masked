
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct inode {int i_state; TYPE_1__* i_sb; } ;
struct TYPE_4__ {int tr_fsyncts; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 int VAR_2 ;
 struct xfs_inode* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 scalar_t__ FUNC_3 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_4 (struct xfs_trans*) ;
 int FUNC_5 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_6 (struct xfs_trans*,struct xfs_inode*,int ) ;

__attribute__((used)) static void
FUNC_7(
 struct inode *VAR_5,
 int VAR_6)
{
 struct xfs_inode *VAR_7 = FUNC_1(VAR_5);
 struct xfs_mount *VAR_8 = VAR_7->i_mount;
 struct xfs_trans *VAR_9;

 if (!(VAR_5->i_sb->s_flags & VAR_2))
  return;
 if (VAR_6 != VAR_0 || !(VAR_5->i_state & VAR_1))
  return;

 if (FUNC_3(VAR_8, &FUNC_0(VAR_8)->tr_fsyncts, 0, 0, 0, &VAR_9))
  return;
 FUNC_2(VAR_7, VAR_3);
 FUNC_5(VAR_9, VAR_7, VAR_3);
 FUNC_6(VAR_9, VAR_7, VAR_4);
 FUNC_4(VAR_9);
}

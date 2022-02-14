
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pag_ici_lock; int pag_ici_root; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_flags_lock; int i_ino; struct xfs_mount* i_mount; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct xfs_inode*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct xfs_perag* FUNC_6 (struct xfs_mount*,int ) ;
 int FUNC_7 (struct xfs_perag*) ;
 int FUNC_8 (struct xfs_perag*) ;

void
FUNC_9(
 struct xfs_inode *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->i_mount;
 struct xfs_perag *VAR_4;

 VAR_4 = FUNC_6(VAR_3, FUNC_1(VAR_3, VAR_2->i_ino));
 FUNC_4(&VAR_4->pag_ici_lock);
 FUNC_4(&VAR_2->i_flags_lock);

 FUNC_3(&VAR_4->pag_ici_root, FUNC_0(VAR_3, VAR_2->i_ino),
      VAR_0);
 FUNC_8(VAR_4);
 FUNC_2(VAR_2, VAR_1);

 FUNC_5(&VAR_2->i_flags_lock);
 FUNC_5(&VAR_4->pag_ici_lock);
 FUNC_7(VAR_4);
}

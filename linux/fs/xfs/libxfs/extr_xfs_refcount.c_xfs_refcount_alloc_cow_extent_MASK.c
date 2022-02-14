
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct xfs_trans {struct xfs_mount* t_mountp; } ;
struct xfs_mount {int m_sb; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct xfs_trans*,int ,int ,int ) ;
 int FUNC_3 (struct xfs_trans*,int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(
 struct xfs_trans *VAR_2,
 xfs_fsblock_t VAR_3,
 xfs_extlen_t VAR_4)
{
 struct xfs_mount *VAR_5 = VAR_2->t_mountp;

 if (!FUNC_4(&VAR_5->m_sb))
  return;

 FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4);


 FUNC_3(VAR_2, FUNC_1(VAR_5, VAR_3),
   FUNC_0(VAR_5, VAR_3), VAR_4, VAR_1);
}

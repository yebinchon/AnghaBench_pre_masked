
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_extlen_t ;
typedef int xfs_agblock_t ;
struct xfs_mount {scalar_t__* m_refc_mxr; } ;


 int FUNC_0 (struct xfs_mount*,int ) ;

xfs_extlen_t
FUNC_1(
 struct xfs_mount *VAR_0,
 xfs_agblock_t VAR_1)
{

 if (VAR_0->m_refc_mxr[0] == 0)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}

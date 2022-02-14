
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
struct xfs_mount {int m_flags; scalar_t__ m_dalign; scalar_t__ m_swidth; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (struct xfs_inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

xfs_extlen_t
FUNC_4(
 struct xfs_inode *VAR_1,
 xfs_extlen_t VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_1->i_mount;
 xfs_extlen_t VAR_4 = 0;

 if (!FUNC_2(VAR_1)) {
  if (VAR_3->m_swidth && (VAR_3->m_flags & VAR_0))
   VAR_4 = VAR_3->m_swidth;
  else if (VAR_3->m_dalign)
   VAR_4 = VAR_3->m_dalign;

  if (VAR_4 && FUNC_1(VAR_1) < FUNC_0(VAR_3, VAR_4))
   VAR_4 = 0;
 }





 if (VAR_2) {
  if (VAR_4)
   VAR_4 = FUNC_3(VAR_4, VAR_2);
  else
   VAR_4 = VAR_2;
 }

 return VAR_4;
}

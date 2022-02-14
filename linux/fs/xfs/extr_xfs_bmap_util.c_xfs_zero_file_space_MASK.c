
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_off_t ;
typedef int uint ;
struct TYPE_2__ {int sb_blocklog; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct xfs_inode*) ;
 int FUNC_3 (struct xfs_inode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct xfs_inode*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct xfs_inode*) ;

int
FUNC_6(
 struct xfs_inode *VAR_1,
 xfs_off_t VAR_2,
 xfs_off_t VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_1->i_mount;
 uint VAR_5;
 int VAR_6;

 FUNC_2(VAR_1);

 VAR_5 = 1 << VAR_4->m_sb.sb_blocklog;
 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_6 || FUNC_5(VAR_1))
  return VAR_6;

 return FUNC_3(VAR_1, FUNC_0(VAR_2, VAR_5),
         FUNC_1(VAR_2 + VAR_3, VAR_5) -
         FUNC_0(VAR_2, VAR_5),
         VAR_0);
}

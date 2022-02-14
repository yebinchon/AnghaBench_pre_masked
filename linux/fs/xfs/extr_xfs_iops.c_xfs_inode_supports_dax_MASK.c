
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sb_blocksize; } ;
struct xfs_mount {int m_flags; TYPE_2__ m_sb; } ;
struct TYPE_5__ {int di_flags2; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct TYPE_7__ {int i_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct xfs_inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (struct xfs_inode*) ;

__attribute__((used)) static bool
FUNC_4(
 struct xfs_inode *VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_3->i_mount;


 if (!FUNC_0(FUNC_1(VAR_3)->i_mode) || FUNC_3(VAR_3))
  return 0;


 if (!(VAR_4->m_flags & VAR_2) &&
     !(VAR_3->i_d.di_flags2 & VAR_1))
  return 0;


 if (VAR_4->m_sb.sb_blocksize != VAR_0)
  return 0;


 return FUNC_2(FUNC_1(VAR_3)) != ((void*)0);
}

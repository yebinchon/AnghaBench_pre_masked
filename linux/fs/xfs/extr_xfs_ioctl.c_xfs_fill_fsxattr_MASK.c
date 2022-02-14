
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int di_extsize; int di_cowextsize; void* di_nextents; void* di_anextents; } ;
struct TYPE_8__ {int if_flags; } ;
struct xfs_inode {TYPE_3__ i_d; TYPE_4__ i_df; TYPE_4__* i_afp; TYPE_2__* i_mount; } ;
struct fsxattr {int fsx_extsize; int fsx_cowextsize; void* fsx_nextents; int fsx_projid; } ;
struct TYPE_5__ {int sb_blocklog; } ;
struct TYPE_6__ {TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsxattr*,int ) ;
 int FUNC_1 (struct xfs_inode*) ;
 void* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct xfs_inode*) ;

__attribute__((used)) static void
FUNC_4(
 struct xfs_inode *VAR_1,
 bool VAR_2,
 struct fsxattr *VAR_3)
{
 FUNC_0(VAR_3, FUNC_3(VAR_1));
 VAR_3->fsx_extsize = VAR_1->i_d.di_extsize << VAR_1->i_mount->m_sb.sb_blocklog;
 VAR_3->fsx_cowextsize = VAR_1->i_d.di_cowextsize <<
   VAR_1->i_mount->m_sb.sb_blocklog;
 VAR_3->fsx_projid = FUNC_1(VAR_1);

 if (VAR_2) {
  if (VAR_1->i_afp) {
   if (VAR_1->i_afp->if_flags & VAR_0)
    VAR_3->fsx_nextents = FUNC_2(VAR_1->i_afp);
   else
    VAR_3->fsx_nextents = VAR_1->i_d.di_anextents;
  } else
   VAR_3->fsx_nextents = 0;
 } else {
  if (VAR_1->i_df.if_flags & VAR_0)
   VAR_3->fsx_nextents = FUNC_2(&VAR_1->i_df);
  else
   VAR_3->fsx_nextents = VAR_1->i_d.di_nextents;
 }
}

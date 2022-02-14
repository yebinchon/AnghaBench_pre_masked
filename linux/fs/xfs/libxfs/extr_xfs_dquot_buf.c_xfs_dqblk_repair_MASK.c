
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_dqid_t ;
typedef int xfs_dqblk_t ;
typedef int uint ;
struct TYPE_4__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_2__ m_sb; } ;
struct TYPE_3__ {int d_id; int d_flags; int d_version; int d_magic; } ;
struct xfs_dqblk {int dd_uuid; TYPE_1__ dd_diskdq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xfs_dqblk*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,int,int ) ;

void
FUNC_7(
 struct xfs_mount *VAR_3,
 struct xfs_dqblk *VAR_4,
 xfs_dqid_t VAR_5,
 uint VAR_6)
{



 FUNC_0(VAR_5 != -1);
 FUNC_3(VAR_4, 0, sizeof(xfs_dqblk_t));

 VAR_4->dd_diskdq.d_magic = FUNC_1(VAR_1);
 VAR_4->dd_diskdq.d_version = VAR_2;
 VAR_4->dd_diskdq.d_flags = VAR_6;
 VAR_4->dd_diskdq.d_id = FUNC_2(VAR_5);

 if (FUNC_5(&VAR_3->m_sb)) {
  FUNC_4(&VAR_4->dd_uuid, &VAR_3->m_sb.sb_meta_uuid);
  FUNC_6((char *)VAR_4, sizeof(struct xfs_dqblk),
     VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_failaddr_t ;
typedef int xfs_dqid_t ;
typedef int uint ;
struct TYPE_2__ {int sb_meta_uuid; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_dqblk {int dd_diskdq; int dd_uuid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct xfs_mount*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

xfs_failaddr_t
FUNC_3(
 struct xfs_mount *VAR_1,
 struct xfs_dqblk *VAR_2,
 xfs_dqid_t VAR_3,
 uint VAR_4)
{
 if (FUNC_2(&VAR_1->m_sb) &&
     !FUNC_0(&VAR_2->dd_uuid, &VAR_1->m_sb.sb_meta_uuid))
  return VAR_0;

 return FUNC_1(VAR_1, &VAR_2->dd_diskdq, VAR_3, VAR_4);
}

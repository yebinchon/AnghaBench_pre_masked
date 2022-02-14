
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xfs_failaddr_t ;
typedef int xfs_dqid_t ;
struct TYPE_3__ {scalar_t__ d_magic; scalar_t__ d_version; scalar_t__ d_flags; int d_rtbtimer; scalar_t__ d_rtb_softlimit; scalar_t__ d_rtbcount; int d_itimer; scalar_t__ d_ino_softlimit; scalar_t__ d_icount; int d_btimer; scalar_t__ d_blk_softlimit; scalar_t__ d_bcount; int d_id; } ;
typedef TYPE_1__ xfs_disk_dquot_t ;
typedef scalar_t__ uint ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

xfs_failaddr_t
FUNC_3(
 struct xfs_mount *VAR_6,
 xfs_disk_dquot_t *VAR_7,
 xfs_dqid_t VAR_8,
 uint VAR_9)
{
 if (VAR_7->d_magic != FUNC_2(VAR_0))
  return VAR_5;
 if (VAR_7->d_version != VAR_1)
  return VAR_5;

 if (VAR_9 && VAR_7->d_flags != VAR_9)
  return VAR_5;
 if (VAR_7->d_flags != VAR_4 &&
     VAR_7->d_flags != VAR_3 &&
     VAR_7->d_flags != VAR_2)
  return VAR_5;

 if (VAR_8 != -1 && VAR_8 != FUNC_0(VAR_7->d_id))
  return VAR_5;

 if (!VAR_7->d_id)
  return ((void*)0);

 if (VAR_7->d_blk_softlimit &&
     FUNC_1(VAR_7->d_bcount) > FUNC_1(VAR_7->d_blk_softlimit) &&
     !VAR_7->d_btimer)
  return VAR_5;

 if (VAR_7->d_ino_softlimit &&
     FUNC_1(VAR_7->d_icount) > FUNC_1(VAR_7->d_ino_softlimit) &&
     !VAR_7->d_itimer)
  return VAR_5;

 if (VAR_7->d_rtb_softlimit &&
     FUNC_1(VAR_7->d_rtbcount) > FUNC_1(VAR_7->d_rtb_softlimit) &&
     !VAR_7->d_rtbtimer)
  return VAR_5;

 return ((void*)0);
}

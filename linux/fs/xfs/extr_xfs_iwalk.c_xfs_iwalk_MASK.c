
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_iwalk_fn ;
typedef int xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_iwalk_ag {void* data; int trim_start; int skip_empty; int startino; int pwork; int sz_recs; int iwalk_fn; struct xfs_trans* tp; struct xfs_mount* mp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*,scalar_t__,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct xfs_iwalk_ag*) ;
 int FUNC_4 (struct xfs_iwalk_ag*) ;
 int FUNC_5 (struct xfs_iwalk_ag*) ;
 int FUNC_6 (unsigned int) ;

int
FUNC_7(
 struct xfs_mount *VAR_3,
 struct xfs_trans *VAR_4,
 xfs_ino_t VAR_5,
 unsigned int VAR_6,
 xfs_iwalk_fn VAR_7,
 unsigned int VAR_8,
 void *VAR_9)
{
 struct xfs_iwalk_ag VAR_10 = {
  .mp = VAR_3,
  .tp = VAR_4,
  .iwalk_fn = VAR_7,
  .data = VAR_9,
  .startino = VAR_5,
  .sz_recs = FUNC_6(VAR_8),
  .trim_start = 1,
  .skip_empty = 1,
  .pwork = VAR_2,
 };
 xfs_agnumber_t VAR_11 = FUNC_2(VAR_3, VAR_5);
 int VAR_12;

 FUNC_0(VAR_11 < VAR_3->m_sb.sb_agcount);
 FUNC_0(!(VAR_6 & ~VAR_1));

 VAR_12 = FUNC_4(&VAR_10);
 if (VAR_12)
  return VAR_12;

 for (; VAR_11 < VAR_3->m_sb.sb_agcount; VAR_11++) {
  VAR_12 = FUNC_3(&VAR_10);
  if (VAR_12)
   break;
  VAR_10.startino = FUNC_1(VAR_3, VAR_11 + 1, 0);
  if (VAR_6 & VAR_0)
   break;
 }

 FUNC_5(&VAR_10);
 return VAR_12;
}

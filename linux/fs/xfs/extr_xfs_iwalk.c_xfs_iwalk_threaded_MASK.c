
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_iwalk_fn ;
typedef int xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
struct xfs_pwork_ctl {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_iwalk_ag {int pwork; int sz_recs; int startino; void* data; int iwalk_fn; struct xfs_mount* mp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xfs_mount*,scalar_t__,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int ) ;
 unsigned int VAR_1 ;
 struct xfs_iwalk_ag* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (struct xfs_pwork_ctl*) ;
 int FUNC_6 (struct xfs_pwork_ctl*) ;
 unsigned int FUNC_7 (struct xfs_mount*) ;
 int FUNC_8 (struct xfs_mount*,struct xfs_pwork_ctl*,int ,char*,unsigned int) ;
 int FUNC_9 (struct xfs_pwork_ctl*) ;
 int FUNC_10 (struct xfs_pwork_ctl*,int *) ;

int
FUNC_11(
 struct xfs_mount *VAR_3,
 xfs_ino_t VAR_4,
 unsigned int VAR_5,
 xfs_iwalk_fn VAR_6,
 unsigned int VAR_7,
 bool VAR_8,
 void *VAR_9)
{
 struct xfs_pwork_ctl VAR_10;
 xfs_agnumber_t VAR_11 = FUNC_2(VAR_3, VAR_4);
 unsigned int VAR_12;
 int VAR_13;

 FUNC_0(VAR_11 < VAR_3->m_sb.sb_agcount);
 FUNC_0(!(VAR_5 & ~VAR_1));

 VAR_12 = FUNC_7(VAR_3);
 VAR_13 = FUNC_8(VAR_3, &VAR_10, VAR_2, "xfs_iwalk",
   VAR_12);
 if (VAR_13)
  return VAR_13;

 for (; VAR_11 < VAR_3->m_sb.sb_agcount; VAR_11++) {
  struct xfs_iwalk_ag *VAR_14;

  if (FUNC_5(&VAR_10))
   break;

  VAR_14 = FUNC_3(sizeof(struct xfs_iwalk_ag), 0);
  VAR_14->mp = VAR_3;
  VAR_14->iwalk_fn = VAR_6;
  VAR_14->data = VAR_9;
  VAR_14->startino = VAR_4;
  VAR_14->sz_recs = FUNC_4(VAR_7);
  FUNC_10(&VAR_10, &VAR_14->pwork);
  VAR_4 = FUNC_1(VAR_3, VAR_11 + 1, 0);
  if (VAR_5 & VAR_0)
   break;
 }

 if (VAR_8)
  FUNC_9(&VAR_10);
 return FUNC_6(&VAR_10);
}

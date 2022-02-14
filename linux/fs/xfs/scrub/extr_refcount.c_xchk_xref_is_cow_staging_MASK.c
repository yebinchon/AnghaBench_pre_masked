
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef scalar_t__ xfs_agblock_t ;
struct TYPE_2__ {int refc_cur; } ;
struct xfs_scrub {TYPE_1__ sa; int sm; } ;
struct xfs_refcount_irec {int rc_startblock; int rc_refcount; scalar_t__ rc_blockcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_scrub*,int ,int ) ;
 int FUNC_1 (struct xfs_scrub*,int*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,struct xfs_refcount_irec*,int*) ;
 int FUNC_4 (int ,scalar_t__,int*) ;

void
FUNC_5(
 struct xfs_scrub *VAR_1,
 xfs_agblock_t VAR_2,
 xfs_extlen_t VAR_3)
{
 struct xfs_refcount_irec VAR_4;
 bool VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_1->sa.refc_cur || FUNC_2(VAR_1->sm))
  return;


 VAR_7 = FUNC_4(VAR_1->sa.refc_cur,
   VAR_2 + VAR_0, &VAR_6);
 if (!FUNC_1(VAR_1, &VAR_7, &VAR_1->sa.refc_cur))
  return;
 if (!VAR_6) {
  FUNC_0(VAR_1, VAR_1->sa.refc_cur, 0);
  return;
 }

 VAR_7 = FUNC_3(VAR_1->sa.refc_cur, &VAR_4, &VAR_6);
 if (!FUNC_1(VAR_1, &VAR_7, &VAR_1->sa.refc_cur))
  return;
 if (!VAR_6) {
  FUNC_0(VAR_1, VAR_1->sa.refc_cur, 0);
  return;
 }


 VAR_5 = (VAR_4.rc_startblock & VAR_0);
 if (!VAR_5 || VAR_4.rc_refcount != 1)
  FUNC_0(VAR_1, VAR_1->sa.refc_cur, 0);


 if (VAR_4.rc_blockcount < VAR_3)
  FUNC_0(VAR_1, VAR_1->sa.refc_cur, 0);
}

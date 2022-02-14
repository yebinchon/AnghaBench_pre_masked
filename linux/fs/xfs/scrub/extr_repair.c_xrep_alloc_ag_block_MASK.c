
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fsblock_t ;
typedef int xfs_agblock_t ;
struct TYPE_2__ {int agno; int agf_bp; } ;
struct xfs_scrub {TYPE_1__ sa; int mp; int tp; } ;
struct xfs_owner_info {int dummy; } ;
struct xfs_alloc_arg {scalar_t__ fsbno; int minlen; int maxlen; int prod; int resv; int len; int type; int mp; struct xfs_owner_info oinfo; int tp; int member_0; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ,int ,int ) ;


 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (struct xfs_alloc_arg*) ;
 int FUNC_5 (int ,int ,int ,int,int) ;

int
FUNC_6(
 struct xfs_scrub *VAR_4,
 const struct xfs_owner_info *VAR_5,
 xfs_fsblock_t *VAR_6,
 enum xfs_ag_resv_type VAR_7)
{
 struct xfs_alloc_arg VAR_8 = {0};
 xfs_agblock_t VAR_9;
 int VAR_10;

 switch (VAR_7) {
 case 129:
 case 128:
  VAR_10 = FUNC_3(VAR_4->tp, VAR_4->sa.agf_bp, &VAR_9, 1);
  if (VAR_10)
   return VAR_10;
  if (VAR_9 == VAR_1)
   return -VAR_0;
  FUNC_5(VAR_4->mp, VAR_4->sa.agno, VAR_9,
    1, 0);
  *VAR_6 = FUNC_1(VAR_4->mp, VAR_4->sa.agno, VAR_9);
  if (VAR_7 == 128)
   FUNC_2(VAR_4->mp, VAR_4->sa.agno);
  return 0;
 default:
  break;
 }

 VAR_8.tp = VAR_4->tp;
 VAR_8.mp = VAR_4->mp;
 VAR_8.oinfo = *VAR_5;
 VAR_8.fsbno = FUNC_1(VAR_8.mp, VAR_4->sa.agno, 0);
 VAR_8.minlen = 1;
 VAR_8.maxlen = 1;
 VAR_8.prod = 1;
 VAR_8.type = VAR_3;
 VAR_8.resv = VAR_7;

 VAR_10 = FUNC_4(&VAR_8);
 if (VAR_10)
  return VAR_10;
 if (VAR_8.fsbno == VAR_2)
  return -VAR_0;
 FUNC_0(VAR_8.len == 1);
 *VAR_6 = VAR_8.fsbno;

 return 0;
}

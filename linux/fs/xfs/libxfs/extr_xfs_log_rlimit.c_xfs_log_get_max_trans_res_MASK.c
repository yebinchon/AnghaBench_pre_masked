
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans_res {int tr_logcount; int tr_logres; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {struct xfs_trans_res tr_attrsetm; } ;


 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;

void
FUNC_2(
 struct xfs_mount *VAR_0,
 struct xfs_trans_res *VAR_1)
{
 struct xfs_trans_res *VAR_2;
 struct xfs_trans_res *VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0);

 VAR_2 = (struct xfs_trans_res *)FUNC_0(VAR_0);
 VAR_3 = (struct xfs_trans_res *)(FUNC_0(VAR_0) + 1);
 for (; VAR_2 < VAR_3; VAR_2++) {
  int VAR_6 = VAR_2->tr_logcount > 1 ?
          VAR_2->tr_logres * VAR_2->tr_logcount :
          VAR_2->tr_logres;
  if (VAR_4 < VAR_6) {
   VAR_4 = VAR_6;
   *VAR_1 = *VAR_2;
  }
 }

 if (VAR_5 > VAR_4) {
  *VAR_1 = FUNC_0(VAR_0)->tr_attrsetm;
  VAR_1->tr_logres = VAR_5;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans_res {int tr_logflags; int tr_logcount; int tr_logres; } ;
struct xfs_trans {int t_log_count; int t_log_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*,int) ;
 int FUNC_1 (struct xfs_trans*,int ) ;
 struct xfs_trans* FUNC_2 (struct xfs_trans*) ;
 int FUNC_3 (struct xfs_trans*,struct xfs_trans_res*,int ,int ) ;

int
FUNC_4(
 struct xfs_trans **VAR_2)
{
 struct xfs_trans *VAR_3 = *VAR_2;
 struct xfs_trans_res VAR_4;
 int VAR_5;

 FUNC_1(VAR_3, VAR_1);




 VAR_4.tr_logres = VAR_3->t_log_res;
 VAR_4.tr_logcount = VAR_3->t_log_count;

 *VAR_2 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_3, 1);
 if (VAR_5)
  return VAR_5;
 VAR_4.tr_logflags = VAR_0;
 return FUNC_3(*VAR_2, &VAR_4, 0, 0);
}

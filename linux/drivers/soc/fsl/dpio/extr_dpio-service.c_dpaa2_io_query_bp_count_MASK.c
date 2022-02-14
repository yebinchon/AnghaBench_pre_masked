
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qbman_swp {int dummy; } ;
struct qbman_bp_query_rslt {int dummy; } ;
struct dpaa2_io {int lock_mgmt_cmd; struct qbman_swp* swp; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_bp_query_rslt*) ;
 int FUNC_1 (struct qbman_swp*,int ,struct qbman_bp_query_rslt*) ;
 struct dpaa2_io* FUNC_2 (struct dpaa2_io*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct dpaa2_io *VAR_1, u16 VAR_2, u32 *VAR_3)
{
 struct qbman_bp_query_rslt VAR_4;
 struct qbman_swp *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_1 = FUNC_2(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 VAR_5 = VAR_1->swp;
 FUNC_3(&VAR_1->lock_mgmt_cmd, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_2, &VAR_4);
 FUNC_4(&VAR_1->lock_mgmt_cmd, VAR_6);
 if (VAR_7)
  return VAR_7;
 *VAR_3 = FUNC_0(&VAR_4);
 return 0;
}

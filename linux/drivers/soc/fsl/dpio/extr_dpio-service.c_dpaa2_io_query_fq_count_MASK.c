
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qbman_swp {int dummy; } ;
struct qbman_fq_query_np_rslt {int dummy; } ;
struct dpaa2_io {int lock_mgmt_cmd; struct qbman_swp* swp; } ;


 int VAR_0 ;
 int FUNC_0 (struct qbman_swp*,int ,struct qbman_fq_query_np_rslt*) ;
 int FUNC_1 (struct qbman_fq_query_np_rslt*) ;
 int FUNC_2 (struct qbman_fq_query_np_rslt*) ;
 struct dpaa2_io* FUNC_3 (struct dpaa2_io*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct dpaa2_io *VAR_1, u32 VAR_2,
       u32 *VAR_3, u32 *VAR_4)
{
 struct qbman_fq_query_np_rslt VAR_5;
 struct qbman_swp *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_1 = FUNC_3(VAR_1);
 if (!VAR_1)
  return -VAR_0;

 VAR_6 = VAR_1->swp;
 FUNC_4(&VAR_1->lock_mgmt_cmd, VAR_7);
 VAR_8 = FUNC_0(VAR_6, VAR_2, &VAR_5);
 FUNC_5(&VAR_1->lock_mgmt_cmd, VAR_7);
 if (VAR_8)
  return VAR_8;
 *VAR_3 = FUNC_2(&VAR_5);
 *VAR_4 = FUNC_1(&VAR_5);

 return 0;
}

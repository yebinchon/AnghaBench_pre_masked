
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct qed_rdma_info {int lock; int cid_map; int real_cid_map; int proto; } ;
struct qed_hwfn {struct qed_rdma_info* p_rdma_info; } ;


 int FUNC_0 (struct qed_hwfn*,int *,int) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int *,int) ;
 int FUNC_2 (struct qed_hwfn*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_0, u16 VAR_1)
{
 struct qed_rdma_info *VAR_2 = VAR_0->p_rdma_info;
 u32 VAR_3, VAR_4, VAR_5;






 VAR_3 = FUNC_2(VAR_0, VAR_2->proto);
 VAR_4 = VAR_1 - VAR_3;
 VAR_5 = VAR_4 ^ 1;

 FUNC_3(&VAR_2->lock);

 FUNC_0(VAR_0, &VAR_2->real_cid_map, VAR_4);
 if (FUNC_1(VAR_0, &VAR_2->real_cid_map, VAR_5) == 0) {
  FUNC_0(VAR_0, &VAR_2->cid_map, VAR_4);
  FUNC_0(VAR_0, &VAR_2->cid_map, VAR_5);
 }

 FUNC_4(&VAR_0->p_rdma_info->lock);
}

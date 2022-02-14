
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_info {int lock; } ;
struct qed_hwfn {struct qed_rdma_info* p_rdma_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qed_rdma_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct qed_hwfn *VAR_2)
{
 struct qed_rdma_info *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);

 VAR_2->p_rdma_info = VAR_3;
 return 0;
}

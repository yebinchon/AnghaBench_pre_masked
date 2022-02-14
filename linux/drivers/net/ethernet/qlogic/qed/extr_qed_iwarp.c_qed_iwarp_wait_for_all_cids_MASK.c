
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int cid_map; int tcp_cid_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int *,int) ;
 int FUNC_1 (struct qed_hwfn*,int *) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1,
         &VAR_1->p_rdma_info->tcp_cid_map);
 if (VAR_2)
  return VAR_2;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_1->p_rdma_info->cid_map, VAR_3);


 return FUNC_1(VAR_1,
           &VAR_1->p_rdma_info->cid_map);
}

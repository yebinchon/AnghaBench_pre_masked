
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {int proto; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int ) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_1)
{
 FUNC_0(VAR_1, VAR_0, "Freeing RDMA\n");

 FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_1->p_rdma_info->proto);
 FUNC_3(VAR_1);
}

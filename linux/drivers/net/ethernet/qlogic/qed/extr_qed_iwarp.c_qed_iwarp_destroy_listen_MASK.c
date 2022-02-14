
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_iwarp_listener {int list_entry; } ;
struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int iw_lock; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,void*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_iwarp_listener*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(void *VAR_1, void *VAR_2)
{
 struct qed_iwarp_listener *VAR_3 = VAR_2;
 struct qed_hwfn *VAR_4 = VAR_1;

 FUNC_0(VAR_4, VAR_0, "handle=%p\n", VAR_2);

 FUNC_3(&VAR_4->p_rdma_info->iwarp.iw_lock);
 FUNC_2(&VAR_3->list_entry);
 FUNC_4(&VAR_4->p_rdma_info->iwarp.iw_lock);

 FUNC_1(VAR_3);

 return 0;
}

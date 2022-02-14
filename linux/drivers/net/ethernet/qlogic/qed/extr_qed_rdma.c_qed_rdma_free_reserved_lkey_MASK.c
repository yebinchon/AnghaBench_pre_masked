
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qed_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int reserved_lkey; } ;


 int FUNC_0 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0)
{
 FUNC_0(VAR_0, VAR_0->p_rdma_info->dev->reserved_lkey);
}

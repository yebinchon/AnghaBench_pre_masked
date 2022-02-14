
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_qp_init_attr {int rq_count; } ;
struct ehea_qp {int hw_rqueue3; int hw_rqueue2; int hw_rqueue1; int hw_squeue; int fw_handle; TYPE_1__* adapter; struct ehea_qp_init_attr init_attr; } ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ehea_qp*) ;

__attribute__((used)) static u64 FUNC_4(struct ehea_qp *VAR_1, u64 VAR_2)
{
 u64 VAR_3;
 struct ehea_qp_init_attr *VAR_4 = &VAR_1->init_attr;


 FUNC_0(VAR_1->adapter->handle, VAR_1->fw_handle);
 VAR_3 = FUNC_1(VAR_1->adapter->handle, VAR_1->fw_handle, VAR_2);
 if (VAR_3 != VAR_0)
  return VAR_3;

 FUNC_2(&VAR_1->hw_squeue);
 FUNC_2(&VAR_1->hw_rqueue1);

 if (VAR_4->rq_count > 1)
  FUNC_2(&VAR_1->hw_rqueue2);
 if (VAR_4->rq_count > 2)
  FUNC_2(&VAR_1->hw_rqueue3);
 FUNC_3(VAR_1);

 return VAR_3;
}

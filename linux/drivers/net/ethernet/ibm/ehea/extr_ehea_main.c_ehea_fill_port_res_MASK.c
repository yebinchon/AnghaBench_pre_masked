
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehea_qp_init_attr {scalar_t__ act_nr_rwqes_rq3; scalar_t__ act_nr_rwqes_rq2; } ;
struct TYPE_4__ {int len; } ;
struct ehea_port_res {TYPE_2__ rq1_skba; TYPE_1__* qp; } ;
struct TYPE_3__ {struct ehea_qp_init_attr init_attr; } ;


 int FUNC_0 (struct ehea_port_res*,int ) ;
 int FUNC_1 (struct ehea_port_res*,scalar_t__) ;
 int FUNC_2 (struct ehea_port_res*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ehea_port_res *VAR_0)
{
 int VAR_1;
 struct ehea_qp_init_attr *VAR_2 = &VAR_0->qp->init_attr;

 FUNC_0(VAR_0, VAR_0->rq1_skba.len);

 VAR_1 = FUNC_1(VAR_0, VAR_2->act_nr_rwqes_rq2 - 1);

 VAR_1 |= FUNC_2(VAR_0, VAR_2->act_nr_rwqes_rq3 - 1);

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsp_que {struct qla_hw_data* hw; } ;
struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct TYPE_2__ {int (* intr_handler ) (int ,struct rsp_que*) ;} ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (int ,struct rsp_que*) ;
 int FUNC_2 (int ,struct rsp_que*) ;

__attribute__((used)) static inline void
FUNC_3(struct rsp_que *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;

 if (FUNC_0(VAR_1))
  FUNC_1(0, VAR_0);
 else
  VAR_1->isp_ops->intr_handler(0, VAR_0);
}

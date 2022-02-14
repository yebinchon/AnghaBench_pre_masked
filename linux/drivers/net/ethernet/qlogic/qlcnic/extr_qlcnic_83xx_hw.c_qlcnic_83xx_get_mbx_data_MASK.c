
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int * arg; } ;
struct qlcnic_cmd_args {scalar_t__ op_type; TYPE_1__ rsp; } ;
struct qlcnic_adapter {int ahw; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct qlcnic_adapter *VAR_1,
         struct qlcnic_cmd_args *VAR_2)
{
 int VAR_3;

 if (VAR_2->op_type == VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->rsp.num; VAR_3++)
  VAR_2->rsp.arg[VAR_3] = FUNC_1(FUNC_0(VAR_1->ahw, VAR_3));
}

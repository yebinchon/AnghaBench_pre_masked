
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_cmd_args {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* mbx_cmd ) (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_1,
       struct qlcnic_cmd_args *VAR_2)
{
 if (VAR_1->ahw->hw_ops->mbx_cmd)
  return VAR_1->ahw->hw_ops->mbx_cmd(VAR_1, VAR_2);

 return -VAR_0;
}

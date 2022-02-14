
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* remove_sysfs ) (struct qlcnic_adapter*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 if (VAR_0->ahw->hw_ops->remove_sysfs)
  VAR_0->ahw->hw_ops->remove_sysfs(VAR_0);
}

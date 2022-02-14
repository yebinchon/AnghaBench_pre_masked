
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct TYPE_2__ {int (* cancel_idc_work ) (struct qlcnic_adapter*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 if (VAR_0->nic_ops->cancel_idc_work)
  VAR_0->nic_ops->cancel_idc_work(VAR_0);
}

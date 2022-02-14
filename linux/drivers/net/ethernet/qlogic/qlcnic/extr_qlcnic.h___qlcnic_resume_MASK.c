
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
struct TYPE_2__ {int (* resume ) (struct qlcnic_adapter*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0)
{
 return VAR_0->nic_ops->resume(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {TYPE_1__* nic_ops; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* config_ipaddr ) (struct qlcnic_adapter*,int ,int) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0,
     __be32 VAR_1, int VAR_2)
{
 VAR_0->nic_ops->config_ipaddr(VAR_0, VAR_1, VAR_2);
}

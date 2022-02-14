
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* enable_sds_intr ) (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0,
       struct qlcnic_host_sds_ring *VAR_1)
{
 if (VAR_0->ahw->hw_ops->enable_sds_intr)
  VAR_0->ahw->hw_ops->enable_sds_intr(VAR_0, VAR_1);
}

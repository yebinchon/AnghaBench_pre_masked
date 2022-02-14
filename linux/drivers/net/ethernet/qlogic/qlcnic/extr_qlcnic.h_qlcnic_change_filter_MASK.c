
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct qlcnic_host_tx_ring {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* change_l2_filter ) (struct qlcnic_adapter*,int *,int ,struct qlcnic_host_tx_ring*) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,int *,int ,struct qlcnic_host_tx_ring*) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0,
     u64 *VAR_1, u16 VAR_2,
     struct qlcnic_host_tx_ring *VAR_3)
{
 VAR_0->ahw->hw_ops->change_l2_filter(VAR_0, VAR_1, VAR_2, VAR_3);
}

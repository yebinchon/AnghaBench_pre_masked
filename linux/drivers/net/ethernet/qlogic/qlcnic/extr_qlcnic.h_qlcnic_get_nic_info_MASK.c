
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_info {int dummy; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* get_nic_info ) (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_info*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0,
          struct qlcnic_info *VAR_1, u8 VAR_2)
{
 return VAR_0->ahw->hw_ops->get_nic_info(VAR_0, VAR_1, VAR_2);
}

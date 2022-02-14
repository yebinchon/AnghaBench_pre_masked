
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* hw_ops; } ;
struct TYPE_3__ {int (* config_loopback ) (struct qlcnic_adapter*,int ) ;} ;


 int FUNC_0 (struct qlcnic_adapter*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct qlcnic_adapter *VAR_0, u8 VAR_1)
{
 return VAR_0->ahw->hw_ops->config_loopback(VAR_0, VAR_1);
}

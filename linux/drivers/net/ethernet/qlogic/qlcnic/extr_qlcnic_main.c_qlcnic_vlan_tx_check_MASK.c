
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_hardware_context {int capabilities; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;

 if (VAR_2->pdev->device == VAR_0)
  return VAR_3->capabilities & VAR_1;
 else
  return 1;
}

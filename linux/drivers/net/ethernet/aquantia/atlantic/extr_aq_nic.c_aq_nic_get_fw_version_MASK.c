
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct aq_nic_s {int aq_hw; TYPE_1__* aq_hw_ops; } ;
struct TYPE_2__ {int (* hw_get_fw_version ) (int ,unsigned int*) ;} ;


 int FUNC_0 (int ,unsigned int*) ;

u32 FUNC_1(struct aq_nic_s *VAR_0)
{
 u32 VAR_1 = 0U;

 VAR_0->aq_hw_ops->hw_get_fw_version(VAR_0->aq_hw, &VAR_1);

 return VAR_1;
}

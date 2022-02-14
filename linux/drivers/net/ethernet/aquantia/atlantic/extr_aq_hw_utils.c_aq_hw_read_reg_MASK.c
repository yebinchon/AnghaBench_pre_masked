
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct aq_hw_s {unsigned int mmio; int flags; TYPE_2__* aq_nic_cfg; } ;
struct TYPE_4__ {TYPE_1__* aq_hw_caps; } ;
struct TYPE_3__ {unsigned int hw_alive_check_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 unsigned int FUNC_1 (unsigned int) ;

u32 FUNC_2(struct aq_hw_s *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_1->mmio + VAR_2);

 if ((~0U) == VAR_3 &&
     (~0U) == FUNC_1(VAR_1->mmio +
      VAR_1->aq_nic_cfg->aq_hw_caps->hw_alive_check_addr))
  FUNC_0(&VAR_1->flags, VAR_0);

 return VAR_3;
}

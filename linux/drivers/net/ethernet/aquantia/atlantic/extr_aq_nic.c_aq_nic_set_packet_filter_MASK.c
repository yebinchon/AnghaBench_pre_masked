
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aq_nic_s {unsigned int packet_filter; int aq_hw; TYPE_1__* aq_hw_ops; } ;
struct TYPE_2__ {int (* hw_packet_filter_set ) (int ,unsigned int) ;} ;


 int FUNC_0 (int ,unsigned int) ;

int FUNC_1(struct aq_nic_s *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = VAR_0->aq_hw_ops->hw_packet_filter_set(VAR_0->aq_hw, VAR_1);
 if (VAR_2 < 0)
  goto err_exit;

 VAR_0->packet_filter = VAR_1;

err_exit:
 return VAR_2;
}

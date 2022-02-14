
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int net_dev; } ;
struct TYPE_2__ {scalar_t__ core_index; } ;
struct efx_channel {TYPE_1__ rx_queue; scalar_t__ irq_moderation_us; struct efx_nic* efx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,struct efx_channel*) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct efx_channel *VAR_2)
{
 struct efx_nic *VAR_3 = VAR_2->efx;
 int VAR_4;

 VAR_2->irq_moderation_us = 0;
 VAR_2->rx_queue.core_index = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);





 if (VAR_4 && VAR_4 != -VAR_0)
  FUNC_1(VAR_3, VAR_1, VAR_3->net_dev,
      "Failed to probe PTP, rc=%d\n", VAR_4);
 return 0;
}

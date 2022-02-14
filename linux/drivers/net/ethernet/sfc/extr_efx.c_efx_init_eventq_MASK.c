
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; } ;
struct efx_channel {int eventq_init; scalar_t__ eventq_read_ptr; int channel; struct efx_nic* efx; } ;
struct TYPE_2__ {int (* push_irq_moderation ) (struct efx_channel*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_channel*) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_3 (struct efx_channel*) ;

__attribute__((used)) static int FUNC_4(struct efx_channel *VAR_1)
{
 struct efx_nic *VAR_2 = VAR_1->efx;
 int VAR_3;

 FUNC_0(VAR_1->eventq_init);

 FUNC_2(VAR_2, VAR_0, VAR_2->net_dev,
    "chan %d init event queue\n", VAR_1->channel);

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == 0) {
  VAR_2->type->push_irq_moderation(VAR_1);
  VAR_1->eventq_read_ptr = 0;
  VAR_1->eventq_init = 1;
 }
 return VAR_3;
}

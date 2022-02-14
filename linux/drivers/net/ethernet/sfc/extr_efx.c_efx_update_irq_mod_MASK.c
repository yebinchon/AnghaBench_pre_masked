
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {int irq_mod_step_us; int irq_rx_moderation_us; TYPE_1__* type; } ;
struct efx_channel {scalar_t__ irq_mod_score; int irq_moderation_us; scalar_t__ irq_count; } ;
struct TYPE_2__ {int (* push_irq_moderation ) (struct efx_channel*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efx_channel*) ;
 int FUNC_1 (struct efx_channel*) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_2, struct efx_channel *VAR_3)
{
 int VAR_4 = VAR_2->irq_mod_step_us;

 if (VAR_3->irq_mod_score < VAR_1) {
  if (VAR_3->irq_moderation_us > VAR_4) {
   VAR_3->irq_moderation_us -= VAR_4;
   VAR_2->type->push_irq_moderation(VAR_3);
  }
 } else if (VAR_3->irq_mod_score > VAR_0) {
  if (VAR_3->irq_moderation_us <
      VAR_2->irq_rx_moderation_us) {
   VAR_3->irq_moderation_us += VAR_4;
   VAR_2->type->push_irq_moderation(VAR_3);
  }
 }

 VAR_3->irq_count = 0;
 VAR_3->irq_mod_score = 0;
}

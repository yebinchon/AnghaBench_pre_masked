
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pnp_dev {struct pnp_card_link* card_link; } ;
struct TYPE_6__ {scalar_t__ event; } ;
struct pnp_card_link {TYPE_1__* driver; TYPE_2__ pm_state; } ;
typedef TYPE_2__ pm_message_t ;
struct TYPE_5__ {int (* suspend ) (struct pnp_card_link*,TYPE_2__) ;} ;


 int FUNC_0 (struct pnp_card_link*,TYPE_2__) ;

__attribute__((used)) static int FUNC_1(struct pnp_dev *VAR_0, pm_message_t VAR_1)
{
 struct pnp_card_link *VAR_2 = VAR_0->card_link;

 if (VAR_2->pm_state.event == VAR_1.event)
  return 0;
 VAR_2->pm_state = VAR_1;
 return VAR_2->driver->suspend(VAR_2, VAR_1);
}

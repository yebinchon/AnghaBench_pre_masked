
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {unsigned int csc_mask; } ;
struct bcm63xx_pcmcia_socket {unsigned int old_status; int timer; int socket; int lock; TYPE_1__ requested_state; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bcm63xx_pcmcia_socket*) ;
 struct bcm63xx_pcmcia_socket* FUNC_1 (struct bcm63xx_pcmcia_socket*,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct bcm63xx_pcmcia_socket *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_5(&VAR_4->lock);

 VAR_5 = FUNC_0(VAR_4);



 VAR_6 = (VAR_5 ^ VAR_4->old_status) & VAR_4->requested_state.csc_mask;
 VAR_4->old_status = VAR_5;
 FUNC_6(&VAR_4->lock);

 if (VAR_6)
  FUNC_4(&VAR_4->socket, VAR_6);

 FUNC_2(&VAR_4->timer,
    VAR_1 + FUNC_3(VAR_0));
}

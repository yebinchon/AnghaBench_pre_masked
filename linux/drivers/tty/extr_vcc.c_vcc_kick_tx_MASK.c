
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct vcc_port {TYPE_1__ tx_timer; int removed; int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct vcc_port *VAR_1)
{
 FUNC_1(&VAR_1->lock);

 if (!FUNC_2(&VAR_1->tx_timer) && !VAR_1->removed) {
  VAR_1->tx_timer.expires = (VAR_0 + 1);
  FUNC_0(&VAR_1->tx_timer);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edgeport_port {scalar_t__ ep_read_urb_state; int ep_lock; int shadow_mcr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct edgeport_port *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_3->ep_lock, VAR_4);

 if (VAR_3->ep_read_urb_state == VAR_0)
  VAR_3->ep_read_urb_state = VAR_1;
 VAR_3->shadow_mcr &= ~VAR_2;

 FUNC_1(&VAR_3->ep_lock, VAR_4);
}

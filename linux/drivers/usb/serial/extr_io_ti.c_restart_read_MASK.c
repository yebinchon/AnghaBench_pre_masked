
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct edgeport_port {scalar_t__ ep_read_urb_state; int ep_lock; int shadow_mcr; TYPE_1__* port; } ;
struct TYPE_2__ {struct urb* read_urb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct edgeport_port *VAR_4)
{
 struct urb *VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_0(&VAR_4->ep_lock, VAR_7);

 if (VAR_4->ep_read_urb_state == VAR_1) {
  VAR_5 = VAR_4->port->read_urb;
  VAR_6 = FUNC_2(VAR_5, VAR_2);
 }
 VAR_4->ep_read_urb_state = VAR_0;
 VAR_4->shadow_mcr |= VAR_3;

 FUNC_1(&VAR_4->ep_lock, VAR_7);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int irqpoll_complete; scalar_t__ usb_transport_fail; } ;
struct urb {scalar_t__ status; scalar_t__ context; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct vub300_mmc_host *VAR_1 = (struct vub300_mmc_host *)VAR_0->context;
 if (VAR_0->status)
  VAR_1->usb_transport_fail = VAR_0->status;
 FUNC_0(&VAR_1->irqpoll_complete);
}

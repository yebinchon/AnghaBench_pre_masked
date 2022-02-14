
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req; } ;
struct bcm63xx_udc {scalar_t__ ep0state; int dev; scalar_t__ ep0_reply; TYPE_1__ ep0_ctrl_req; int gadget; int * iudma; int * ep0_request; scalar_t__ ep0_req_completed; scalar_t__ ep0_req_shutdown; scalar_t__ ep0_req_set_iface; scalar_t__ ep0_req_set_cfg; scalar_t__ ep0_req_reset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_0 (struct bcm63xx_udc*) ;
 int FUNC_1 (struct bcm63xx_udc*,int ) ;
 scalar_t__ FUNC_2 (struct bcm63xx_udc*) ;
 scalar_t__ FUNC_3 (struct bcm63xx_udc*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct bcm63xx_udc*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct bcm63xx_udc *VAR_5)
{
 if (VAR_5->ep0_req_reset) {
  VAR_5->ep0_req_reset = 0;
 } else if (VAR_5->ep0_req_set_cfg) {
  VAR_5->ep0_req_set_cfg = 0;
  if (FUNC_2(VAR_5) >= 0)
   VAR_5->ep0state = VAR_2;
 } else if (VAR_5->ep0_req_set_iface) {
  VAR_5->ep0_req_set_iface = 0;
  if (FUNC_3(VAR_5) >= 0)
   VAR_5->ep0state = VAR_2;
 } else if (VAR_5->ep0_req_completed) {
  VAR_5->ep0state = FUNC_0(VAR_5);
  return VAR_5->ep0state == VAR_1 ? -VAR_0 : 0;
 } else if (VAR_5->ep0_req_shutdown) {
  VAR_5->ep0_req_shutdown = 0;
  VAR_5->ep0_req_completed = 0;
  VAR_5->ep0_request = ((void*)0);
  FUNC_5(VAR_5, &VAR_5->iudma[VAR_4]);
  FUNC_7(&VAR_5->gadget,
   &VAR_5->ep0_ctrl_req.req, 0);


  FUNC_6();
  VAR_5->ep0state = VAR_3;
 } else if (VAR_5->ep0_reply) {





  FUNC_4(VAR_5->dev, "nuking unexpected reply\n");
  FUNC_1(VAR_5, 0);
 } else {
  return -VAR_0;
 }

 return 0;
}

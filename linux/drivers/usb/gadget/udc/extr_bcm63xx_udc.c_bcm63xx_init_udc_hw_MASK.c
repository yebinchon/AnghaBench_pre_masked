
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ max_speed; int speed; TYPE_2__* ep0; int ep_list; } ;
struct bcm63xx_udc {TYPE_1__ gadget; void* usbh_clk; void* usbd_clk; int dev; int ep0state; struct bcm63xx_ep* bep; int ep0_ctrl_buf; } ;
struct TYPE_5__ {int ep_list; int * desc; int * ops; int caps; int name; } ;
struct bcm63xx_ep {int ep_num; TYPE_2__ ep; int queue; struct bcm63xx_udc* udc; scalar_t__ halted; } ;
struct TYPE_6__ {int caps; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 TYPE_3__* VAR_25 ;
 int FUNC_3 (struct bcm63xx_udc*,int) ;
 int VAR_26 ;
 int FUNC_4 (struct bcm63xx_udc*) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_8 (struct bcm63xx_udc*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct bcm63xx_udc*,int) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (struct bcm63xx_udc*,int,int ) ;

__attribute__((used)) static int FUNC_14(struct bcm63xx_udc *VAR_28)
{
 int VAR_29, VAR_30 = 0;
 u32 VAR_31;

 VAR_28->ep0_ctrl_buf = FUNC_7(VAR_28->dev, VAR_0,
      VAR_7);
 if (!VAR_28->ep0_ctrl_buf)
  return -VAR_5;

 FUNC_0(&VAR_28->gadget.ep_list);
 for (VAR_29 = 0; VAR_29 < VAR_1; VAR_29++) {
  struct bcm63xx_ep *VAR_32 = &VAR_28->bep[VAR_29];

  VAR_32->ep.name = VAR_25[VAR_29].name;
  VAR_32->ep.caps = VAR_25[VAR_29].caps;
  VAR_32->ep_num = VAR_29;
  VAR_32->ep.ops = &VAR_26;
  FUNC_9(&VAR_32->ep.ep_list, &VAR_28->gadget.ep_list);
  VAR_32->halted = 0;
  FUNC_12(&VAR_32->ep, VAR_0);
  VAR_32->udc = VAR_28;
  VAR_32->ep.desc = ((void*)0);
  FUNC_0(&VAR_32->queue);
 }

 VAR_28->gadget.ep0 = &VAR_28->bep[0].ep;
 FUNC_10(&VAR_28->bep[0].ep.ep_list);

 VAR_28->gadget.speed = VAR_24;
 VAR_28->ep0state = VAR_6;

 VAR_28->usbh_clk = FUNC_5(VAR_28->dev, "usbh");
 if (FUNC_1(VAR_28->usbh_clk))
  return -VAR_4;

 VAR_28->usbd_clk = FUNC_5(VAR_28->dev, "usbd");
 if (FUNC_1(VAR_28->usbd_clk)) {
  FUNC_6(VAR_28->usbh_clk);
  return -VAR_4;
 }

 FUNC_11(VAR_28, 1);

 VAR_31 = VAR_8 |
       VAR_9 |
       (VAR_27 ? VAR_11 : 0);
 FUNC_13(VAR_28, VAR_31, VAR_10);

 VAR_31 = VAR_20 |
       VAR_18 |
       VAR_17 |
       VAR_16 |
       VAR_19;

 if (VAR_28->gadget.max_speed == VAR_23)
  VAR_31 |= (VAR_3 << VAR_22);
 else
  VAR_31 |= (VAR_2 << VAR_22);
 FUNC_13(VAR_28, VAR_31, VAR_21);

 FUNC_3(VAR_28, 0);

 FUNC_13(VAR_28, 0, VAR_13);

 VAR_31 = FUNC_2(VAR_14) |
       FUNC_2(VAR_15);
 FUNC_13(VAR_28, VAR_31, VAR_12);

 VAR_30 = FUNC_8(VAR_28);
 FUNC_11(VAR_28, 0);
 if (VAR_30)
  FUNC_4(VAR_28);

 return 0;
}

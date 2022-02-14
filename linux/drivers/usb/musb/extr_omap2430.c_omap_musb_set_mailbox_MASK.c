
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_musb_board_data {int interface_type; } ;
struct omap2430_glue {int status; int control_otghs; } ;
struct musb_hdrc_platform_data {struct omap_musb_board_data* board_data; } ;
struct musb {TYPE_1__* xceiv; int controller; int gadget_driver; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int last_event; int notifier; TYPE_2__* otg; } ;




 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,char*) ;
 struct musb_hdrc_platform_data* FUNC_2 (int ) ;
 struct musb* FUNC_3 (struct omap2430_glue*) ;
 int FUNC_4 (struct musb*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct omap2430_glue *VAR_9)
{
 struct musb *VAR_10 = FUNC_3(VAR_9);
 struct musb_hdrc_platform_data *VAR_11 =
  FUNC_2(VAR_10->controller);
 struct omap_musb_board_data *VAR_12 = VAR_11->board_data;

 FUNC_7(VAR_10->controller);
 switch (VAR_9->status) {
 case 130:
  FUNC_1(VAR_10->controller, "ID GND\n");

  VAR_10->xceiv->otg->state = VAR_1;
  VAR_10->xceiv->last_event = VAR_3;
  if (VAR_10->gadget_driver) {
   FUNC_5(VAR_9->control_otghs,
    VAR_8);
   FUNC_4(VAR_10, 1);
  }
  break;

 case 128:
  FUNC_1(VAR_10->controller, "VBUS Connect\n");

  VAR_10->xceiv->otg->state = VAR_2;
  VAR_10->xceiv->last_event = VAR_5;
  FUNC_5(VAR_9->control_otghs, VAR_6);
  break;

 case 131:
 case 129:
  FUNC_1(VAR_10->controller, "VBUS Disconnect\n");

  VAR_10->xceiv->last_event = VAR_4;
  if (VAR_10->gadget_driver)
   FUNC_4(VAR_10, 0);

  if (VAR_12->interface_type == VAR_0)
   FUNC_6(VAR_10->xceiv->otg, 0);

  FUNC_5(VAR_9->control_otghs,
   VAR_7);
  break;
 default:
  FUNC_1(VAR_10->controller, "ID float\n");
 }
 FUNC_8(VAR_10->controller);
 FUNC_9(VAR_10->controller);
 FUNC_0(&VAR_10->xceiv->notifier,
   VAR_10->xceiv->last_event, ((void*)0));
}

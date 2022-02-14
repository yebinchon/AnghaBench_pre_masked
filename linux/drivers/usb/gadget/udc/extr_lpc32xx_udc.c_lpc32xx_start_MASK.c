
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_gadget_driver {scalar_t__ max_speed; int setup; } ;
struct usb_gadget {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_5__ {int is_selfpowered; TYPE_1__ dev; } ;
struct lpc32xx_udc {int enabled; int isp1301_i2c_client; scalar_t__ vbus; scalar_t__ last_vbus; TYPE_2__ gadget; TYPE_3__* dev; struct usb_gadget_driver* driver; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 struct lpc32xx_udc* FUNC_2 (struct usb_gadget*) ;
 int FUNC_3 (struct lpc32xx_udc*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_7,
    struct usb_gadget_driver *VAR_8)
{
 struct lpc32xx_udc *VAR_9 = FUNC_2(VAR_7);

 if (!VAR_8 || VAR_8->max_speed < VAR_6 || !VAR_8->setup) {
  FUNC_0(VAR_9->dev, "bad parameter.\n");
  return -VAR_1;
 }

 if (VAR_9->driver) {
  FUNC_0(VAR_9->dev, "UDC already has a gadget driver\n");
  return -VAR_0;
 }

 VAR_9->driver = VAR_8;
 VAR_9->gadget.dev.of_node = VAR_9->dev->of_node;
 VAR_9->enabled = 1;
 VAR_9->gadget.is_selfpowered = 1;
 VAR_9->vbus = 0;


 VAR_9->last_vbus = VAR_9->vbus = 0;
 FUNC_3(VAR_9);


 FUNC_1(VAR_9->isp1301_i2c_client,
  VAR_4, VAR_2 | VAR_3);
 FUNC_1(VAR_9->isp1301_i2c_client,
  VAR_5, VAR_2 | VAR_3);

 return 0;
}

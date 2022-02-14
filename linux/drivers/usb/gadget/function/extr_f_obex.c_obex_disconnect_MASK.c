
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_composite_dev {TYPE_2__* gadget; } ;
struct TYPE_6__ {TYPE_1__* config; } ;
struct gserial {TYPE_3__ func; } ;
struct f_obex {int port_num; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 struct f_obex* FUNC_1 (struct gserial*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(struct gserial *VAR_0)
{
 struct f_obex *VAR_1 = FUNC_1(VAR_0);
 struct usb_composite_dev *VAR_2 = VAR_0->func.config->cdev;
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_0->func);
 if (VAR_3)
  FUNC_0(&VAR_2->gadget->dev,
   "obex ttyGS%d function deactivate --> %d\n",
   VAR_1->port_num, VAR_3);
}

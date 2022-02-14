
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_role_switch_desc {int fwnode; int get; scalar_t__ set; int udc; int usb3_port; int usb2_port; int allow_userspace_control; } ;
struct TYPE_4__ {int * type; int class; int fwnode; struct device* parent; } ;
struct usb_role_switch {TYPE_1__ dev; int get; scalar_t__ set; int udc; int usb3_port; int usb2_port; int allow_userspace_control; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_role_switch* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct usb_role_switch* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;

struct usb_role_switch *
FUNC_7(struct device *VAR_5,
    const struct usb_role_switch_desc *VAR_6)
{
 struct usb_role_switch *VAR_7;
 int VAR_8;

 if (!VAR_6 || !VAR_6->set)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_7->lock);

 VAR_7->allow_userspace_control = VAR_6->allow_userspace_control;
 VAR_7->usb2_port = VAR_6->usb2_port;
 VAR_7->usb3_port = VAR_6->usb3_port;
 VAR_7->udc = VAR_6->udc;
 VAR_7->set = VAR_6->set;
 VAR_7->get = VAR_6->get;

 VAR_7->dev.parent = VAR_5;
 VAR_7->dev.fwnode = VAR_6->fwnode;
 VAR_7->dev.class = VAR_3;
 VAR_7->dev.type = &VAR_4;
 FUNC_2(&VAR_7->dev, "%s-role-switch", FUNC_1(VAR_5));

 VAR_8 = FUNC_3(&VAR_7->dev);
 if (VAR_8) {
  FUNC_6(&VAR_7->dev);
  return FUNC_0(VAR_8);
 }



 return VAR_7;
}

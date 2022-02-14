
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int has_tt; } ;
struct gbphy_device_id {int dummy; } ;
struct device {int dummy; } ;
struct gbphy_device {TYPE_1__* cport_desc; int bundle; struct device dev; } ;
struct gb_usb_device {struct gbphy_device* gbphy_dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct gb_connection* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*) ;
 int FUNC_7 (struct gb_connection*) ;
 int FUNC_8 (struct gb_connection*,struct gb_usb_device*) ;
 int FUNC_9 (struct gbphy_device*,struct gb_usb_device*) ;
 int FUNC_10 (int ) ;
 struct gb_usb_device* FUNC_11 (struct usb_hcd*) ;
 int FUNC_12 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_13 (int *,struct device*,int ) ;
 int VAR_2 ;
 int FUNC_14 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_15(struct gbphy_device *VAR_3,
   const struct gbphy_device_id *VAR_4)
{
 struct gb_connection *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;
 struct gb_usb_device *VAR_7;
 struct usb_hcd *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_13(&VAR_2, VAR_6, FUNC_2(VAR_6));
 if (!VAR_8)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3->bundle,
       FUNC_10(VAR_3->cport_desc->id),
       ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_9 = FUNC_1(VAR_5);
  goto exit_usb_put;
 }

 VAR_7 = FUNC_11(VAR_8);
 VAR_7->connection = VAR_5;
 FUNC_8(VAR_5, VAR_7);
 VAR_7->gbphy_dev = VAR_3;
 FUNC_9(VAR_3, VAR_7);

 VAR_8->has_tt = 1;

 VAR_9 = FUNC_7(VAR_5);
 if (VAR_9)
  goto exit_connection_destroy;







 if (1) {
  FUNC_3(VAR_6, "USB protocol disabled\n");
  VAR_9 = -VAR_1;
  goto exit_connection_disable;
 }

 VAR_9 = FUNC_12(VAR_8, 0, 0);
 if (VAR_9)
  goto exit_connection_disable;

 return 0;

exit_connection_disable:
 FUNC_6(VAR_5);
exit_connection_destroy:
 FUNC_5(VAR_5);
exit_usb_put:
 FUNC_14(VAR_8);

 return VAR_9;
}

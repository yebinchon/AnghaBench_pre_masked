
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int state; } ;
struct usb_bus {scalar_t__ root_hub; } ;
struct gb_usb_device {TYPE_1__* gbphy_dev; int connection; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int ) ;
 struct usb_bus* FUNC_2 (struct usb_hcd*) ;
 struct gb_usb_device* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_2)
{
 struct usb_bus *VAR_3 = FUNC_2(VAR_2);
 struct gb_usb_device *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->connection, VAR_0,
    ((void*)0), 0, ((void*)0), 0);
 if (VAR_5) {
  FUNC_0(&VAR_4->gbphy_dev->dev, "HCD start failed '%d'\n", VAR_5);
  return VAR_5;
 }

 VAR_2->state = VAR_1;
 if (VAR_3->root_hub)
  FUNC_4(VAR_2);
 return 0;
}

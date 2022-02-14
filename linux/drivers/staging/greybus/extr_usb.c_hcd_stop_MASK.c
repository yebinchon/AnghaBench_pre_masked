
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct gb_usb_device {TYPE_1__* gbphy_dev; int connection; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int ) ;
 struct gb_usb_device* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_3(struct usb_hcd *VAR_1)
{
 struct gb_usb_device *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->connection, VAR_0,
    ((void*)0), 0, ((void*)0), 0);
 if (VAR_3)
  FUNC_0(&VAR_2->gbphy_dev->dev, "HCD stop failed '%d'\n", VAR_3);
}

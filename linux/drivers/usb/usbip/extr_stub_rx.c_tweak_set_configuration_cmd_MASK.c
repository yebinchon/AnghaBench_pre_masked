
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int wValue; } ;
struct urb {scalar_t__ setup_packet; scalar_t__ context; } ;
struct stub_priv {struct stub_device* sdev; } ;
struct stub_device {TYPE_1__* udev; } ;
typedef int __u16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct urb *VAR_1)
{
 struct stub_priv *VAR_2 = (struct stub_priv *) VAR_1->context;
 struct stub_device *VAR_3 = VAR_2->sdev;
 struct usb_ctrlrequest *VAR_4;
 __u16 VAR_5;
 int VAR_6;

 VAR_4 = (struct usb_ctrlrequest *) VAR_1->setup_packet;
 VAR_5 = FUNC_1(VAR_4->wValue);

 VAR_6 = FUNC_2(VAR_3->udev, VAR_5);
 if (VAR_6 && VAR_6 != -VAR_0)
  FUNC_0(&VAR_3->udev->dev, "can't set config #%d, error %d\n",
   VAR_5, VAR_6);
 return 0;
}

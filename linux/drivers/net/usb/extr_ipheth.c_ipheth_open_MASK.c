
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ipheth_device {int carrier_work; struct usb_device* udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ipheth_device*) ;
 int FUNC_1 (struct ipheth_device*,int ) ;
 struct ipheth_device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4)
{
 struct ipheth_device *VAR_5 = FUNC_2(VAR_4);
 struct usb_device *VAR_6 = VAR_5->udev;
 int VAR_7 = 0;

 FUNC_4(VAR_6, VAR_3, VAR_1);

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_5->carrier_work, VAR_2);
 return VAR_7;
}

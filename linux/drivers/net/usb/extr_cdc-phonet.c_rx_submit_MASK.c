
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbpn_dev {int rx_pipe; int usb; struct net_device* dev; } ;
struct urb {scalar_t__ transfer_flags; } ;
struct page {int dummy; } ;
struct net_device {int dev; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct urb*,int ,int ,int ,int ,int ,struct net_device*) ;
 int FUNC_6 (struct urb*,int) ;

__attribute__((used)) static int FUNC_7(struct usbpn_dev *VAR_4, struct urb *VAR_5, gfp_t VAR_6)
{
 struct net_device *VAR_7 = VAR_4->dev;
 struct page *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_6 | VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_5(VAR_5, VAR_4->usb, VAR_4->rx_pipe, FUNC_2(VAR_8),
    VAR_1, VAR_3, VAR_7);
 VAR_5->transfer_flags = 0;
 VAR_9 = FUNC_6(VAR_5, VAR_6);
 if (FUNC_4(VAR_9)) {
  FUNC_1(&VAR_7->dev, "RX submit error (%d)\n", VAR_9);
  FUNC_3(VAR_8);
 }
 return VAR_9;
}

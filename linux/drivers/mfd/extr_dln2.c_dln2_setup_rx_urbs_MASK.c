
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_interface {int dummy; } ;
struct dln2_dev {int * rx_buf; int ep_in; int usb_dev; int * rx_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int const,int ,struct dln2_dev*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct dln2_dev *VAR_5,
         struct usb_host_interface *VAR_6)
{
 int VAR_7;
 const int VAR_8 = VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5->rx_buf[VAR_7] = FUNC_0(VAR_8, VAR_3);
  if (!VAR_5->rx_buf[VAR_7])
   return -VAR_2;

  VAR_5->rx_urb[VAR_7] = FUNC_1(0, VAR_3);
  if (!VAR_5->rx_urb[VAR_7])
   return -VAR_2;

  FUNC_2(VAR_5->rx_urb[VAR_7], VAR_5->usb_dev,
      FUNC_3(VAR_5->usb_dev, VAR_5->ep_in),
      VAR_5->rx_buf[VAR_7], VAR_8, VAR_4, VAR_5);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct tty_struct {int dummy; } ;
struct acm {int disconnected; int rx_buflimit; int port; struct usb_interface* control; struct usb_interface* data; int combined_interfaces; int notification_buffer; int ctrl_dma; int ctrl_buffer; int ctrlsize; int dev; int * read_urbs; TYPE_1__* wb; int ctrlurb; int minor; int work; int mutex; int wioctl; scalar_t__ country_codes; } ;
struct TYPE_2__ {int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acm*) ;
 int FUNC_1 (struct acm*) ;
 int VAR_2 ;
 int FUNC_2 (struct acm*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (int *) ;
 struct tty_struct* FUNC_10 (int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct tty_struct*) ;
 int FUNC_13 (int *,struct usb_interface*) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 struct acm* FUNC_16 (struct usb_interface*) ;
 int FUNC_17 (struct usb_interface*,int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct usb_interface *VAR_6)
{
 struct acm *VAR_7 = FUNC_16(VAR_6);
 struct tty_struct *VAR_8;
 int VAR_9;


 if (!VAR_7)
  return;

 FUNC_6(&VAR_7->mutex);
 VAR_7->disconnected = 1;
 if (VAR_7->country_codes) {
  FUNC_4(&VAR_7->control->dev,
    &VAR_5);
  FUNC_4(&VAR_7->control->dev,
    &VAR_4);
 }
 FUNC_18(&VAR_7->wioctl);
 FUNC_4(&VAR_7->control->dev, &VAR_3);
 FUNC_17(VAR_7->control, ((void*)0));
 FUNC_17(VAR_7->data, ((void*)0));
 FUNC_7(&VAR_7->mutex);

 VAR_8 = FUNC_10(&VAR_7->port);
 if (VAR_8) {
  FUNC_12(VAR_8);
  FUNC_8(VAR_8);
 }

 FUNC_0(VAR_7);
 FUNC_3(&VAR_7->work);

 FUNC_11(VAR_2, VAR_7->minor);

 FUNC_15(VAR_7->ctrlurb);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  FUNC_15(VAR_7->wb[VAR_9].urb);
 for (VAR_9 = 0; VAR_9 < VAR_7->rx_buflimit; VAR_9++)
  FUNC_15(VAR_7->read_urbs[VAR_9]);
 FUNC_2(VAR_7);
 FUNC_14(VAR_7->dev, VAR_7->ctrlsize, VAR_7->ctrl_buffer, VAR_7->ctrl_dma);
 FUNC_1(VAR_7);

 FUNC_5(VAR_7->notification_buffer);

 if (!VAR_7->combined_interfaces)
  FUNC_13(&VAR_1, VAR_6 == VAR_7->control ?
     VAR_7->data : VAR_7->control);

 FUNC_9(&VAR_7->port);
}

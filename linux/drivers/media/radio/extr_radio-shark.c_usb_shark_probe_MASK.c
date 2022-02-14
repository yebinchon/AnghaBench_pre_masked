
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int release; } ;
struct TYPE_7__ {int radio_nr; int cannot_mute; int has_am; int bus_info; int card; int * ops; struct shark_device* private_data; TYPE_1__* v4l2_dev; } ;
struct shark_device {struct shark_device* transfer_buffer; TYPE_1__ v4l2_dev; TYPE_5__ tea; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct shark_device*) ;
 struct shark_device* FUNC_2 (int ,int ) ;
 struct shark_device* FUNC_3 (int,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct shark_device*,int *) ;
 int VAR_6 ;
 int FUNC_5 (struct shark_device*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_8,
      const struct usb_device_id *VAR_9)
{
 struct shark_device *VAR_10;
 int VAR_11 = -VAR_1;

 VAR_10 = FUNC_3(sizeof(struct shark_device), VAR_2);
 if (!VAR_10)
  return VAR_11;

 VAR_10->transfer_buffer = FUNC_2(VAR_3, VAR_2);
 if (!VAR_10->transfer_buffer)
  goto err_alloc_buffer;

 FUNC_10(&VAR_10->v4l2_dev, VAR_0, &VAR_5);

 VAR_11 = FUNC_4(VAR_10, &VAR_8->dev);
 if (VAR_11)
  goto err_reg_leds;

 VAR_10->v4l2_dev.release = VAR_7;
 VAR_11 = FUNC_9(&VAR_8->dev, &VAR_10->v4l2_dev);
 if (VAR_11) {
  FUNC_12(&VAR_10->v4l2_dev, "couldn't register v4l2_device\n");
  goto err_reg_dev;
 }

 VAR_10->usbdev = FUNC_0(VAR_8);
 VAR_10->tea.v4l2_dev = &VAR_10->v4l2_dev;
 VAR_10->tea.private_data = VAR_10;
 VAR_10->tea.radio_nr = -1;
 VAR_10->tea.ops = &VAR_6;
 VAR_10->tea.cannot_mute = 1;
 VAR_10->tea.has_am = 1;
 FUNC_7(VAR_10->tea.card, "Griffin radioSHARK",
  sizeof(VAR_10->tea.card));
 FUNC_8(VAR_10->usbdev, VAR_10->tea.bus_info,
  sizeof(VAR_10->tea.bus_info));

 VAR_11 = FUNC_6(&VAR_10->tea, VAR_4);
 if (VAR_11) {
  FUNC_12(&VAR_10->v4l2_dev, "couldn't init tea5757\n");
  goto err_init_tea;
 }

 return 0;

err_init_tea:
 FUNC_11(&VAR_10->v4l2_dev);
err_reg_dev:
 FUNC_5(VAR_10);
err_reg_leds:
 FUNC_1(VAR_10->transfer_buffer);
err_alloc_buffer:
 FUNC_1(VAR_10);

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_7__ {int version; scalar_t__ nets; } ;
struct TYPE_6__ {scalar_t__ drv_version; scalar_t__ flags; scalar_t__ rsvd; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_8__ {TYPE_3__ version_reply; TYPE_2__ version; TYPE_1__ hdr; } ;
struct esd_usb2_msg {int net_count; TYPE_4__ msg; int version; int rx_submitted; int udev; } ;
struct esd_usb2 {int net_count; TYPE_4__ msg; int version; int rx_submitted; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct usb_interface*,int) ;
 int FUNC_3 (struct esd_usb2_msg*,struct esd_usb2_msg*) ;
 int FUNC_4 (struct esd_usb2_msg*,struct esd_usb2_msg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct esd_usb2_msg*) ;
 struct esd_usb2_msg* FUNC_8 (int,int ) ;
 struct esd_usb2_msg* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct usb_interface*,struct esd_usb2_msg*) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_6,
    const struct usb_device_id *VAR_7)
{
 struct esd_usb2 *VAR_8;
 struct esd_usb2_msg *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_11 = -VAR_1;
  goto done;
 }

 VAR_8->udev = FUNC_6(VAR_6);

 FUNC_5(&VAR_8->rx_submitted);

 FUNC_11(VAR_6, VAR_8);

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_11 = -VAR_1;
  goto free_msg;
 }


 VAR_9->msg.hdr.cmd = VAR_0;
 VAR_9->msg.hdr.len = 2;
 VAR_9->msg.version.rsvd = 0;
 VAR_9->msg.version.flags = 0;
 VAR_9->msg.version.drv_version = 0;

 VAR_11 = FUNC_3(VAR_8, VAR_9);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->dev, "sending version message failed\n");
  goto free_msg;
 }

 VAR_11 = FUNC_4(VAR_8, VAR_9);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->dev, "no version message answer\n");
  goto free_msg;
 }

 VAR_8->net_count = (int)VAR_9->msg.version_reply.nets;
 VAR_8->version = FUNC_10(VAR_9->msg.version_reply.version);

 if (FUNC_1(&VAR_6->dev, &VAR_3))
  FUNC_0(&VAR_6->dev,
   "Couldn't create device file for firmware\n");

 if (FUNC_1(&VAR_6->dev, &VAR_4))
  FUNC_0(&VAR_6->dev,
   "Couldn't create device file for hardware\n");

 if (FUNC_1(&VAR_6->dev, &VAR_5))
  FUNC_0(&VAR_6->dev,
   "Couldn't create device file for nets\n");


 for (VAR_10 = 0; VAR_10 < VAR_8->net_count; VAR_10++)
  FUNC_2(VAR_6, VAR_10);

free_msg:
 FUNC_7(VAR_9);
 if (VAR_11)
  FUNC_7(VAR_8);
done:
 return VAR_11;
}

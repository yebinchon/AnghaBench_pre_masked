
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbtv {int iso_size; int udev; int v4l2_dev; struct device* dev; } ;
struct device {int dummy; } ;
struct usb_interface {int num_altsetting; TYPE_2__* altsetting; struct device dev; } ;
struct usb_host_endpoint {int desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct TYPE_4__ {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usbtv*) ;
 struct usbtv* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,struct usbtv*) ;
 int FUNC_9 (struct usbtv*) ;
 int FUNC_10 (struct usbtv*) ;
 int FUNC_11 (struct usbtv*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_3,
 const struct usb_device_id *VAR_4)
{
 int VAR_5;
 int VAR_6;
 struct device *VAR_7 = &VAR_3->dev;
 struct usbtv *VAR_8;
 struct usb_host_endpoint *VAR_9;


 if (VAR_3->num_altsetting != 2)
  return -VAR_0;
 if (VAR_3->altsetting[1].desc.bNumEndpoints != 4)
  return -VAR_0;

 VAR_9 = &VAR_3->altsetting[1].endpoint[0];



 VAR_6 = FUNC_4(&VAR_9->desc);
 VAR_6 = VAR_6 * FUNC_5(&VAR_9->desc);


 VAR_8 = FUNC_3(sizeof(struct usbtv), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 VAR_8->dev = VAR_7;
 VAR_8->udev = FUNC_6(FUNC_1(VAR_3));

 VAR_8->iso_size = VAR_6;

 FUNC_8(VAR_3, VAR_8);

 VAR_5 = FUNC_11(VAR_8);
 if (VAR_5 < 0)
  goto usbtv_video_fail;

 VAR_5 = FUNC_9(VAR_8);
 if (VAR_5 < 0)
  goto usbtv_audio_fail;


 FUNC_12(&VAR_8->v4l2_dev);

 FUNC_0(VAR_7, "Fushicai USBTV007 Audio-Video Grabber\n");
 return 0;

usbtv_audio_fail:

 FUNC_6(VAR_8->udev);
 FUNC_10(VAR_8);

usbtv_video_fail:
 FUNC_8(VAR_3, ((void*)0));
 FUNC_7(VAR_8->udev);
 FUNC_2(VAR_8);

 return VAR_5;
}

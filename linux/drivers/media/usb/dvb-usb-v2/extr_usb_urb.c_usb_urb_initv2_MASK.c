
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_data_stream_properties {int dummy; } ;
struct TYPE_7__ {int framesize; int framesperurb; } ;
struct TYPE_6__ {int buffersize; } ;
struct TYPE_8__ {TYPE_2__ isoc; TYPE_1__ bulk; } ;
struct TYPE_10__ {int type; TYPE_3__ u; int count; } ;
struct usb_data_stream {TYPE_4__* udev; TYPE_5__ props; int complete; } ;
struct TYPE_9__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (TYPE_5__*,struct usb_data_stream_properties const*,int) ;
 int FUNC_2 (struct usb_data_stream*,int ,int) ;
 int FUNC_3 (struct usb_data_stream*) ;
 int FUNC_4 (struct usb_data_stream*) ;

int FUNC_5(struct usb_data_stream *VAR_2,
  const struct usb_data_stream_properties *VAR_3)
{
 int VAR_4;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_2->props, VAR_3, sizeof(*VAR_3));

 if (!VAR_2->complete) {
  FUNC_0(&VAR_2->udev->dev,
    "%s: there is no data callback - this doesn't make sense\n",
    VAR_1);
  return -VAR_0;
 }

 switch (VAR_2->props.type) {
 case 129:
  VAR_4 = FUNC_2(VAR_2, VAR_2->props.count,
    VAR_2->props.u.bulk.buffersize);
  if (VAR_4 < 0)
   return VAR_4;

  return FUNC_3(VAR_2);
 case 128:
  VAR_4 = FUNC_2(VAR_2, VAR_2->props.count,
    VAR_2->props.u.isoc.framesize *
    VAR_2->props.u.isoc.framesperurb);
  if (VAR_4 < 0)
   return VAR_4;

  return FUNC_4(VAR_2);
 default:
  FUNC_0(&VAR_2->udev->dev,
    "%s: unknown urb-type for data transfer\n",
    VAR_1);
  return -VAR_0;
 }
}

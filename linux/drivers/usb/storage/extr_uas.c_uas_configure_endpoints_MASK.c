
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {int desc; } ;
struct usb_device {scalar_t__ speed; } ;
struct uas_dev_info {int qdepth; int use_streams; TYPE_1__* intf; void* data_out_pipe; void* data_in_pipe; void* status_pipe; void* cmd_pipe; struct usb_device* udev; } ;
struct TYPE_2__ {int cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct usb_host_endpoint**) ;
 int FUNC_1 (TYPE_1__*,struct usb_host_endpoint**,int,int ,int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct usb_device*,int ) ;
 void* FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct uas_dev_info *VAR_3)
{
 struct usb_host_endpoint *VAR_4[4] = { };
 struct usb_device *VAR_5 = VAR_3->udev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3->intf->cur_altsetting, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_3->cmd_pipe = FUNC_4(VAR_5,
         FUNC_2(&VAR_4[0]->desc));
 VAR_3->status_pipe = FUNC_3(VAR_5,
         FUNC_2(&VAR_4[1]->desc));
 VAR_3->data_in_pipe = FUNC_3(VAR_5,
         FUNC_2(&VAR_4[2]->desc));
 VAR_3->data_out_pipe = FUNC_4(VAR_5,
         FUNC_2(&VAR_4[3]->desc));

 if (VAR_5->speed < VAR_2) {
  VAR_3->qdepth = 32;
  VAR_3->use_streams = 0;
 } else {
  VAR_3->qdepth = FUNC_1(VAR_3->intf, VAR_4 + 1,
          3, VAR_1, VAR_0);
  if (VAR_3->qdepth < 0)
   return VAR_3->qdepth;
  VAR_3->use_streams = 1;
 }

 return 0;
}

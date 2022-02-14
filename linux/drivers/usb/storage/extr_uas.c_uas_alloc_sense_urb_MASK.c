
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {int transfer_flags; int stream_id; } ;
struct uas_dev_info {scalar_t__ use_streams; int status_pipe; struct usb_device* udev; } ;
struct uas_cmd_info {int uas_tag; } ;
struct sense_iu {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; int SCp; } ;
typedef int gfp_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct sense_iu* FUNC_0 (int,int ) ;
 int VAR_1 ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct urb*,struct usb_device*,int ,struct sense_iu*,int,int ,int ) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static struct urb *FUNC_4(struct uas_dev_info *VAR_2, gfp_t VAR_3,
           struct scsi_cmnd *VAR_4)
{
 struct usb_device *VAR_5 = VAR_2->udev;
 struct uas_cmd_info *VAR_6 = (void *)&VAR_4->SCp;
 struct urb *VAR_7 = FUNC_1(0, VAR_3);
 struct sense_iu *VAR_8;

 if (!VAR_7)
  goto out;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  goto free;

 FUNC_2(VAR_7, VAR_5, VAR_2->status_pipe, VAR_8, sizeof(*VAR_8),
     VAR_1, VAR_4->device->host);
 if (VAR_2->use_streams)
  VAR_7->stream_id = VAR_6->uas_tag;
 VAR_7->transfer_flags |= VAR_0;
 out:
 return VAR_7;
 free:
 FUNC_3(VAR_7);
 return ((void*)0);
}

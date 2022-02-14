
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int capability; int readbuffers; } ;
struct TYPE_6__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct TYPE_7__ {int min_buffers_needed; } ;
struct gspca_dev {int usb_err; TYPE_4__* sd_desc; TYPE_3__ queue; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int (* get_streamparm ) (struct gspca_dev*,struct v4l2_streamparm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,struct v4l2_streamparm*) ;
 struct gspca_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
   struct v4l2_streamparm *VAR_3)
{
 struct gspca_dev *VAR_4 = FUNC_1(VAR_1);

 VAR_3->parm.capture.readbuffers = VAR_4->queue.min_buffers_needed;

 if (!VAR_4->sd_desc->get_streamparm)
  return 0;

 VAR_3->parm.capture.capability = VAR_0;
 VAR_4->usb_err = 0;
 VAR_4->sd_desc->get_streamparm(VAR_4, VAR_3);
 return VAR_4->usb_err;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fract {int dummy; } ;
struct v4l2_cropcap {int type; struct v4l2_fract pixelaspect; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_hdw*,struct v4l2_cropcap*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
         int VAR_4, struct v4l2_fract *VAR_5)
{
 struct pvr2_v4l2_fh *VAR_6 = VAR_2->private_data;
 struct pvr2_hdw *VAR_7 = VAR_6->channel.mc_head->hdw;
 struct v4l2_cropcap VAR_8 = { .type = VAR_4 };
 int VAR_9;

 if (VAR_4 != VAR_1)
  return -VAR_0;
 VAR_9 = FUNC_0(VAR_7, &VAR_8);
 if (!VAR_9)
  *VAR_5 = VAR_8.pixelaspect;
 return VAR_9;
}

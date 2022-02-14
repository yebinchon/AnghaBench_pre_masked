
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct TYPE_8__ {TYPE_3__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_4__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_7__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvr2_ctrl*,int ) ;
 int FUNC_1 (struct pvr2_hdw*) ;
 struct pvr2_ctrl* FUNC_2 (struct pvr2_hdw*,int ) ;
 int FUNC_3 (struct file*,struct pvr2_v4l2_fh*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct pvr2_v4l2_fh *VAR_5 = VAR_2->private_data;
 struct pvr2_hdw *VAR_6 = VAR_5->channel.mc_head->hdw;
 struct pvr2_ctrl *VAR_7, *VAR_8;
 int VAR_9 = FUNC_3(VAR_2, VAR_5, VAR_4);

 if (VAR_9)
  return VAR_9;
 VAR_7 = FUNC_2(VAR_6, VAR_0);
 VAR_8 = FUNC_2(VAR_6, VAR_1);
 FUNC_0(VAR_7, VAR_4->fmt.pix.width);
 FUNC_0(VAR_8, VAR_4->fmt.pix.height);
 FUNC_1(VAR_6);
 return 0;
}

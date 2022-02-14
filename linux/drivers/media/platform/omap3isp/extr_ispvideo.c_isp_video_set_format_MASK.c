
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int dummy; } ;
struct TYPE_9__ {int field; } ;
struct TYPE_8__ {TYPE_4__ pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_3__ fmt; } ;
struct isp_video_fh {struct v4l2_format format; } ;
struct isp_video {scalar_t__ type; int mutex; TYPE_2__* isp; } ;
struct file {int dummy; } ;
struct TYPE_6__ {struct isp_video video_out; } ;
struct TYPE_7__ {TYPE_1__ isp_ccdc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct isp_video*,struct v4l2_mbus_framefmt*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct v4l2_mbus_framefmt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct isp_video_fh* FUNC_4 (void*) ;
 struct isp_video* FUNC_5 (struct file*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct isp_video_fh *VAR_5 = FUNC_4(VAR_3);
 struct isp_video *VAR_6 = FUNC_5(VAR_2);
 struct v4l2_mbus_framefmt VAR_7;

 if (VAR_4->type != VAR_6->type)
  return -VAR_0;


 switch (VAR_4->fmt.pix.field) {
 case 131:

  break;
 case 136:

  if (VAR_6->type == VAR_1)
   VAR_4->fmt.pix.field = 131;
  break;
 case 134:




  VAR_4->fmt.pix.field = 132;

 case 132:
 case 133:

  if (VAR_6 != &VAR_6->isp->isp_ccdc.video_out)
   VAR_4->fmt.pix.field = 131;
  break;
 case 128:
 case 135:
 case 129:
 case 130:
 default:



  VAR_4->fmt.pix.field = 131;
  break;
 }




 FUNC_1(&VAR_4->fmt.pix, &VAR_7);
 FUNC_0(VAR_6, &VAR_7, &VAR_4->fmt.pix);

 FUNC_2(&VAR_6->mutex);
 VAR_5->format = *VAR_4;
 FUNC_3(&VAR_6->mutex);

 return 0;
}

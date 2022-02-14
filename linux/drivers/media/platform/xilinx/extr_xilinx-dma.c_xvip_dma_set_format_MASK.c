
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvip_video_format {int dummy; } ;
struct xvip_dma {struct xvip_video_format const* fmtinfo; int format; int queue; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct xvip_dma*,int *,struct xvip_video_format const**) ;
 struct xvip_dma* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct xvip_dma *VAR_5 = FUNC_1(VAR_4->vdev);
 const struct xvip_video_format *VAR_6;

 FUNC_0(VAR_5, &VAR_3->fmt.pix, &VAR_6);

 if (FUNC_2(&VAR_5->queue))
  return -VAR_0;

 VAR_5->format = VAR_3->fmt.pix;
 VAR_5->fmtinfo = VAR_6;

 return 0;
}

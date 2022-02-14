
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pixelformat; } ;
struct xvip_dma {TYPE_1__ format; } ;
struct v4l2_fmtdesc {scalar_t__ index; int pixelformat; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 int VAR_0 ;
 struct xvip_dma* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_fmtdesc *VAR_3)
{
 struct v4l2_fh *VAR_4 = VAR_1->private_data;
 struct xvip_dma *VAR_5 = FUNC_0(VAR_4->vdev);

 if (VAR_3->index > 0)
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->format.pixelformat;

 return 0;
}

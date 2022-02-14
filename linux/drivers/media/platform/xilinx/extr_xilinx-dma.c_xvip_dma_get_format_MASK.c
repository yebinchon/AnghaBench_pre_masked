
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvip_dma {int format; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 struct xvip_dma* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct v4l2_fh *VAR_3 = VAR_0->private_data;
 struct xvip_dma *VAR_4 = FUNC_0(VAR_3->vdev);

 VAR_2->fmt.pix = VAR_4->format;

 return 0;
}

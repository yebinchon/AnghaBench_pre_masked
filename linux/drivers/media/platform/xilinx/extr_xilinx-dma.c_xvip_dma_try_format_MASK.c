
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvip_dma {int dummy; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_fh {int vdev; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (struct xvip_dma*,int *,int *) ;
 struct xvip_dma* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_format *VAR_2)
{
 struct v4l2_fh *VAR_3 = VAR_0->private_data;
 struct xvip_dma *VAR_4 = FUNC_1(VAR_3->vdev);

 FUNC_0(VAR_4, &VAR_2->fmt.pix, ((void*)0));
 return 0;
}

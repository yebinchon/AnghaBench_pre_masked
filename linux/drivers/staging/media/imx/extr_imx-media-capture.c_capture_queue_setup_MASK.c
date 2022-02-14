
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {scalar_t__ type; unsigned int num_buffers; } ;
struct v4l2_pix_format {unsigned int sizeimage; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct capture_priv {TYPE_3__ vdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,int,unsigned int) ;
 struct capture_priv* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_4,
          unsigned int *VAR_5,
          unsigned int *VAR_6,
          unsigned int VAR_7[],
          struct device *VAR_8[])
{
 struct capture_priv *VAR_9 = FUNC_1(VAR_4);
 struct v4l2_pix_format *VAR_10 = &VAR_9->vdev.fmt.fmt.pix;
 unsigned int VAR_11 = *VAR_5;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 if (*VAR_6) {
  if (*VAR_6 != 1 || VAR_7[0] < VAR_10->sizeimage)
   return -VAR_0;
  VAR_11 += VAR_4->num_buffers;
 }

 VAR_11 = FUNC_0(VAR_3, VAR_2 / VAR_10->sizeimage, VAR_11);

 if (*VAR_6)
  *VAR_5 = (VAR_11 < VAR_4->num_buffers) ? 0 :
   VAR_11 - VAR_4->num_buffers;
 else
  *VAR_5 = VAR_11;

 *VAR_6 = 1;
 VAR_7[0] = VAR_10->sizeimage;

 return 0;
}

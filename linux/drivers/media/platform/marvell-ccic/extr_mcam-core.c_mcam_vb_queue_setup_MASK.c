
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;
struct mcam_camera {scalar_t__ buffer_mode; TYPE_1__ pix_format; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mcam_camera* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_2,
  unsigned int *VAR_3,
  unsigned int *VAR_4, unsigned int VAR_5[],
  struct device *VAR_6[])
{
 struct mcam_camera *VAR_7 = FUNC_0(VAR_2);
 int VAR_8 = (VAR_7->buffer_mode == VAR_0) ? 3 : 2;
 unsigned VAR_9 = VAR_7->pix_format.sizeimage;

 if (*VAR_3 < VAR_8)
  *VAR_3 = VAR_8;

 if (*VAR_4)
  return VAR_5[0] < VAR_9 ? -VAR_1 : 0;
 VAR_5[0] = VAR_9;
 *VAR_4 = 1;
 return 0;
}

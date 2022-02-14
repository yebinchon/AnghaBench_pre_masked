
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {scalar_t__ num_buffers; } ;
struct TYPE_2__ {int sizeimage; } ;
struct omap_vout_device {TYPE_1__ pix; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct omap_vout_device*) ;
 struct omap_vout_device* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2,
         unsigned int *VAR_3,
         unsigned int *VAR_4, unsigned int VAR_5[],
         struct device *VAR_6[])
{
 struct omap_vout_device *VAR_7 = FUNC_1(VAR_2);
 int VAR_8 = VAR_7->pix.sizeimage;

 if (FUNC_0(VAR_7) && VAR_2->num_buffers + *VAR_3 > VAR_1) {
  *VAR_3 = VAR_1 - VAR_2->num_buffers;
  if (*VAR_3 == 0)
   return -VAR_0;
 }

 if (*VAR_4)
  return VAR_5[0] < VAR_8 ? -VAR_0 : 0;

 *VAR_4 = 1;
 VAR_5[0] = VAR_8;
 return 0;
}

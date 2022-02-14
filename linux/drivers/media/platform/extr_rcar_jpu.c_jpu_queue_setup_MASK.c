
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct TYPE_4__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct jpu_q_data {TYPE_2__ format; } ;
struct jpu_ctx {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 struct jpu_q_data* FUNC_0 (struct jpu_ctx*,int ) ;
 struct jpu_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct jpu_ctx *VAR_6 = FUNC_1(VAR_1);
 struct jpu_q_data *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_1->type);

 if (*VAR_3) {
  if (*VAR_3 != VAR_7->format.num_planes)
   return -VAR_0;

  for (VAR_8 = 0; VAR_8 < *VAR_3; VAR_8++) {
   unsigned int VAR_9 = VAR_7->format.plane_fmt[VAR_8].sizeimage;

   if (VAR_4[VAR_8] < VAR_9)
    return -VAR_0;
  }
  return 0;
 }

 *VAR_3 = VAR_7->format.num_planes;

 for (VAR_8 = 0; VAR_8 < *VAR_3; VAR_8++)
  VAR_4[VAR_8] = VAR_7->format.plane_fmt[VAR_8].sizeimage;

 return 0;
}

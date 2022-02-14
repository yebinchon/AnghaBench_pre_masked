
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; } ;
struct TYPE_4__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct fdp1_q_data {TYPE_2__ format; } ;
struct fdp1_ctx {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct fdp1_q_data* FUNC_0 (struct fdp1_ctx*,int ) ;
 struct fdp1_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_2,
    unsigned int *VAR_3, unsigned int *VAR_4,
    unsigned int VAR_5[],
    struct device *VAR_6[])
{
 struct fdp1_ctx *VAR_7 = FUNC_1(VAR_2);
 struct fdp1_q_data *VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_0(VAR_7, VAR_2->type);

 if (*VAR_4) {
  if (*VAR_4 > VAR_1)
   return -VAR_0;

  return 0;
 }

 *VAR_4 = VAR_8->format.num_planes;

 for (VAR_9 = 0; VAR_9 < *VAR_4; VAR_9++)
  VAR_5[VAR_9] = VAR_8->format.plane_fmt[VAR_9].sizeimage;

 return 0;
}

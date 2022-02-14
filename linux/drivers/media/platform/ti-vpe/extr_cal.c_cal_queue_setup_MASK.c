
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {unsigned int num_buffers; } ;
struct device {int dummy; } ;
struct TYPE_6__ {unsigned int sizeimage; } ;
struct TYPE_5__ {TYPE_3__ pix; } ;
struct TYPE_4__ {TYPE_2__ fmt; } ;
struct cal_ctx {TYPE_1__ v_fmt; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct cal_ctx*,char*,unsigned int,unsigned int) ;
 struct cal_ctx* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
      unsigned int *VAR_2, unsigned int *VAR_3,
      unsigned int VAR_4[], struct device *VAR_5[])
{
 struct cal_ctx *VAR_6 = FUNC_1(VAR_1);
 unsigned VAR_7 = VAR_6->v_fmt.fmt.pix.sizeimage;

 if (VAR_1->num_buffers + *VAR_2 < 3)
  *VAR_2 = 3 - VAR_1->num_buffers;

 if (*VAR_3) {
  if (VAR_4[0] < VAR_7)
   return -VAR_0;
  VAR_7 = VAR_4[0];
 }

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;

 FUNC_0(3, VAR_6, "nbuffers=%d, size=%d\n", *VAR_2, VAR_4[0]);

 return 0;
}

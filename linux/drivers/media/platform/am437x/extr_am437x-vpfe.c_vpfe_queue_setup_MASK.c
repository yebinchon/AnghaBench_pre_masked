
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int sizeimage; } ;
struct TYPE_4__ {TYPE_3__ pix; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
struct vpfe_device {TYPE_2__ fmt; } ;
struct vb2_queue {unsigned int num_buffers; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vpfe_device* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (struct vpfe_device*) ;
 int FUNC_2 (int,struct vpfe_device*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4[], struct device *VAR_5[])
{
 struct vpfe_device *VAR_6 = FUNC_0(VAR_1);
 unsigned VAR_7 = VAR_6->fmt.fmt.pix.sizeimage;

 if (VAR_1->num_buffers + *VAR_2 < 3)
  *VAR_2 = 3 - VAR_1->num_buffers;

 if (*VAR_3) {
  if (VAR_4[0] < VAR_7)
   return -VAR_0;
  VAR_7 = VAR_4[0];
 }

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;

 FUNC_2(1, VAR_6,
  "nbuffers=%d, size=%u\n", *VAR_2, VAR_4[0]);


 FUNC_1(VAR_6);

 return 0;
}

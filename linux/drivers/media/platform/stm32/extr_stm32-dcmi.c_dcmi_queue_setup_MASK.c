
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {unsigned int sizeimage; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct stm32_dcmi {int dev; TYPE_3__ fmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 struct stm32_dcmi* FUNC_1 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3,
       unsigned int VAR_4[],
       struct device *VAR_5[])
{
 struct stm32_dcmi *VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7;

 VAR_7 = VAR_6->fmt.fmt.pix.sizeimage;


 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;

 FUNC_0(VAR_6->dev, "Setup queue, count=%d, size=%d\n",
  *VAR_2, VAR_7);

 return 0;
}

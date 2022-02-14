
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sizeimage; } ;
struct vimc_cap_device {TYPE_1__ format; } ;
struct vb2_queue {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vimc_cap_device* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1, unsigned int *VAR_2,
    unsigned int *VAR_3, unsigned int VAR_4[],
    struct device *VAR_5[])
{
 struct vimc_cap_device *VAR_6 = FUNC_0(VAR_1);

 if (*VAR_3)
  return VAR_4[0] < VAR_6->format.sizeimage ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_6->format.sizeimage;

 return 0;
}


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
struct isc_device {TYPE_3__ fmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct isc_device* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
       unsigned int *VAR_2, unsigned int *VAR_3,
       unsigned int VAR_4[], struct device *VAR_5[])
{
 struct isc_device *VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7 = VAR_6->fmt.fmt.pix.sizeimage;

 if (*VAR_3)
  return VAR_4[0] < VAR_7 ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_7;

 return 0;
}

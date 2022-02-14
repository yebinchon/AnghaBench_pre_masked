
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {struct cx8800_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx8800_dev {TYPE_1__* core; } ;
struct TYPE_2__ {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_4,
         unsigned int *VAR_5, unsigned int *VAR_6,
         unsigned int VAR_7[], struct device *VAR_8[])
{
 struct cx8800_dev *VAR_9 = VAR_4->drv_priv;

 *VAR_6 = 1;
 if (VAR_9->core->tvnorm & VAR_0)
  VAR_7[0] = VAR_2 * VAR_1 * 2;
 else
  VAR_7[0] = VAR_3 * VAR_1 * 2;
 return 0;
}

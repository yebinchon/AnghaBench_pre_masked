
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct cx23885_dev* drv_priv; } ;
struct device {int dummy; } ;
struct cx23885_dev {int tvnorm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct vb2_queue *VAR_4,
      unsigned int *VAR_5, unsigned int *VAR_6,
      unsigned int VAR_7[], struct device *VAR_8[])
{
 struct cx23885_dev *VAR_9 = VAR_4->drv_priv;
 unsigned VAR_10 = VAR_3;

 if (VAR_9->tvnorm & VAR_0)
  VAR_10 = VAR_2;
 *VAR_6 = 1;
 VAR_7[0] = VAR_10 * VAR_1 * 2;
 return 0;
}

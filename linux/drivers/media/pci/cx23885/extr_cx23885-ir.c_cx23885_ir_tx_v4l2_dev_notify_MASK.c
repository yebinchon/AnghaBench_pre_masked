
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int v4l2_dev; } ;
struct cx23885_dev {unsigned long ir_tx_notifications; int ir_tx_work; struct v4l2_subdev* sd_cx25840; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long*) ;
 struct cx23885_dev* FUNC_3 (int ) ;

void FUNC_4(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct cx23885_dev *VAR_4 = FUNC_3(VAR_2->v4l2_dev);
 unsigned long *VAR_5 = &VAR_4->ir_tx_notifications;

 if (VAR_3 & VAR_1)
  FUNC_2(VAR_0, VAR_5);





 if (VAR_2 == VAR_4->sd_cx25840)
  FUNC_0(&VAR_4->ir_tx_work);
 else
  FUNC_1(&VAR_4->ir_tx_work);
}

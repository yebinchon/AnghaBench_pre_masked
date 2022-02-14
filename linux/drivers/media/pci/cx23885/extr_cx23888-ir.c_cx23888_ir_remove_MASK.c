
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {int rx_kfifo; } ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cx23888_ir_state*) ;
 struct cx23888_ir_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;

int FUNC_7(struct cx23885_dev *VAR_2)
{
 struct v4l2_subdev *VAR_3;
 struct cx23888_ir_state *VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  return -VAR_1;

 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_3(&VAR_4->rx_kfifo);
 FUNC_4(VAR_4);

 return 0;
}

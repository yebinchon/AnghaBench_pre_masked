
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int shutdown; int enable; int interrupt_enable; } ;
struct cx23885_dev {int ir_tx_work; int ir_rx_work; int cx25840_work; int * sd_ir; int ir_input_stopping; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,struct v4l2_subdev_ir_parameters*) ;

__attribute__((used)) static void FUNC_3(struct cx23885_dev *VAR_3)
{
 struct v4l2_subdev_ir_parameters VAR_4;

 if (VAR_3->sd_ir == ((void*)0))
  return;
 FUNC_0(&VAR_3->ir_input_stopping, 1);
 FUNC_2(VAR_3->sd_ir, VAR_0, VAR_1, &VAR_4);
 while (VAR_4.shutdown == 0) {
  VAR_4.enable = 0;
  VAR_4.interrupt_enable = 0;
  VAR_4.shutdown = 1;
  FUNC_2(VAR_3->sd_ir, VAR_0, VAR_2, &VAR_4);
  FUNC_2(VAR_3->sd_ir, VAR_0, VAR_1, &VAR_4);
 }
 FUNC_1(&VAR_3->cx25840_work);
 FUNC_1(&VAR_3->ir_rx_work);
 FUNC_1(&VAR_3->ir_tx_work);
}

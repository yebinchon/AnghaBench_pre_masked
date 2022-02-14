
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev_ir_parameters {int enable; void* shutdown; } ;
struct cx23885_dev {int board; int * sd_ir; int ir_input_stopping; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct cx23885_dev*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ,struct v4l2_subdev_ir_parameters*) ;

void FUNC_3(struct cx23885_dev *VAR_7, u32 VAR_8)
{
 struct v4l2_subdev_ir_parameters VAR_9;
 int VAR_10, VAR_11;

 if (VAR_7->sd_ir == ((void*)0) || VAR_8 == 0)
  return;

 switch (VAR_7->board) {
 case 136:
 case 134:
 case 135:
 case 130:
 case 129:
 case 138:
 case 133:
 case 132:
 case 131:
 case 141:
 case 140:
 case 143:
 case 128:
 case 144:
 case 142:
 case 139:
 case 137:




  break;
 default:
  return;
 }

 VAR_10 = VAR_8 & (VAR_3 |
       VAR_2);

 VAR_11 = VAR_8 & (VAR_0 |
       VAR_1);

 if (VAR_10) {

  FUNC_2(VAR_7->sd_ir, VAR_4, VAR_5, &VAR_9);
  VAR_9.enable = 0;

  VAR_9.shutdown = FUNC_0(&VAR_7->ir_input_stopping);
  FUNC_2(VAR_7->sd_ir, VAR_4, VAR_6, &VAR_9);
 }

 if (VAR_11)
  FUNC_1(VAR_7, VAR_10);

 if (VAR_10) {

  VAR_9.enable = 1;

  VAR_9.shutdown = FUNC_0(&VAR_7->ir_input_stopping);
  FUNC_2(VAR_7->sd_ir, VAR_4, VAR_6, &VAR_9);
 }
}

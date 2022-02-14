
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int enable; int interrupt_enable; int shutdown; int modulation; int max_pulse_width; int noise_filter_min_width; int invert_level; int carrier_freq; int carrier_range_lower; int carrier_range_upper; int duty_cycle; void* mode; } ;
struct cx23885_dev {int board; int * sd_ir; int ir_input_stopping; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ,struct v4l2_subdev_ir_parameters*) ;

__attribute__((used)) static int FUNC_2(struct cx23885_dev *VAR_5)
{
 struct v4l2_subdev_ir_parameters VAR_6;

 if (VAR_5->sd_ir == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_5->ir_input_stopping, 0);

 FUNC_1(VAR_5->sd_ir, VAR_2, VAR_3, &VAR_6);
 switch (VAR_5->board) {
 case 136:
 case 134:
 case 135:
 case 138:
 case 133:
 case 141:
 case 140:
 case 143:
 case 128:
 case 144:
 case 142:
 case 139:
 case 137:




  VAR_6.mode = VAR_1;
  VAR_6.enable = 1;
  VAR_6.interrupt_enable = 1;
  VAR_6.shutdown = 0;


  VAR_6.modulation = 0;


  VAR_6.max_pulse_width = 3333333;


  VAR_6.noise_filter_min_width = 333333;





  VAR_6.invert_level = 1;
  break;
 case 130:
 case 129:
 case 132:
 case 131:




  VAR_6.mode = VAR_1;
  VAR_6.enable = 1;
  VAR_6.interrupt_enable = 1;
  VAR_6.shutdown = 0;


  VAR_6.carrier_freq = 37917;
  VAR_6.carrier_range_lower = 33000;
  VAR_6.carrier_range_upper = 43000;
  VAR_6.duty_cycle = 33;





  VAR_6.max_pulse_width = 12378022;





  VAR_6.noise_filter_min_width = 351648;

  VAR_6.modulation = 0;
  VAR_6.invert_level = 1;
  break;
 }
 FUNC_1(VAR_5->sd_ir, VAR_2, VAR_4, &VAR_6);
 return 0;
}

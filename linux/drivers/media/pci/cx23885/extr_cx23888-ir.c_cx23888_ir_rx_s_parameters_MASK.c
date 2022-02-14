
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cx23888_ir_fifo_rec {int dummy; } cx23888_ir_fifo_rec ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct v4l2_subdev_ir_parameters {scalar_t__ mode; int bytes_per_data_element; int duty_cycle; int enable; scalar_t__ interrupt_enable; int invert_level; int resolution; int noise_filter_min_width; scalar_t__ max_pulse_width; int carrier_range_upper; int carrier_range_lower; int carrier_freq; int modulation; scalar_t__ shutdown; } ;
struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {int rx_params_lock; int rx_kfifo_lock; int rx_kfifo; int rx_invert; int rxclk_divider; struct v4l2_subdev_ir_parameters rx_params; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cx23885_dev*,int ) ;
 int FUNC_3 (struct cx23885_dev*,int) ;
 int FUNC_4 (struct cx23885_dev*,int ) ;
 int FUNC_5 (struct cx23885_dev*,int ,int *,int *) ;
 int FUNC_6 (struct cx23885_dev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct cx23885_dev*,int ) ;
 int FUNC_9 (struct cx23885_dev*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (struct cx23885_dev*,int ,int *) ;
 scalar_t__ FUNC_15 (struct cx23885_dev*,scalar_t__,int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 struct cx23888_ir_state* FUNC_18 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_19(struct v4l2_subdev *VAR_8,
          struct v4l2_subdev_ir_parameters *VAR_9)
{
 struct cx23888_ir_state *VAR_10 = FUNC_18(VAR_8);
 struct cx23885_dev *VAR_11 = VAR_10->dev;
 struct v4l2_subdev_ir_parameters *VAR_12 = &VAR_10->rx_params;
 u16 VAR_13;

 if (VAR_9->shutdown)
  return FUNC_7(VAR_8);

 if (VAR_9->mode != VAR_7)
  return -VAR_1;

 FUNC_11(&VAR_10->rx_params_lock);

 VAR_12->shutdown = VAR_9->shutdown;

 VAR_12->mode = VAR_9->mode = VAR_7;

 VAR_12->bytes_per_data_element = VAR_9->bytes_per_data_element
      = sizeof(union cx23888_ir_fifo_rec);


 FUNC_9(VAR_11, 0);
 FUNC_3(VAR_11, 0);

 FUNC_2(VAR_11, VAR_9->modulation);
 VAR_12->modulation = VAR_9->modulation;

 if (VAR_9->modulation) {
  VAR_9->carrier_freq = FUNC_14(VAR_11, VAR_9->carrier_freq,
           &VAR_13);

  VAR_12->carrier_freq = VAR_9->carrier_freq;

  VAR_12->duty_cycle = VAR_9->duty_cycle = 50;

  FUNC_5(VAR_11, VAR_9->carrier_freq,
         &VAR_9->carrier_range_lower,
         &VAR_9->carrier_range_upper);
  VAR_12->carrier_range_lower = VAR_9->carrier_range_lower;
  VAR_12->carrier_range_upper = VAR_9->carrier_range_upper;

  VAR_9->max_pulse_width =
   (u32) FUNC_13(VAR_2, VAR_13);
 } else {
  VAR_9->max_pulse_width =
       FUNC_15(VAR_11, VAR_9->max_pulse_width,
             &VAR_13);
 }
 VAR_12->max_pulse_width = VAR_9->max_pulse_width;
 FUNC_0(&VAR_10->rxclk_divider, VAR_13);

 VAR_9->noise_filter_min_width =
     FUNC_8(VAR_11, VAR_9->noise_filter_min_width);
 VAR_12->noise_filter_min_width = VAR_9->noise_filter_min_width;

 VAR_9->resolution = FUNC_1(VAR_13);
 VAR_12->resolution = VAR_9->resolution;


 FUNC_4(VAR_11, VAR_6);

 FUNC_6(VAR_11, VAR_0);

 VAR_12->invert_level = VAR_9->invert_level;
 FUNC_0(&VAR_10->rx_invert, VAR_9->invert_level);

 VAR_12->interrupt_enable = VAR_9->interrupt_enable;
 VAR_12->enable = VAR_9->enable;
 if (VAR_9->enable) {
  unsigned long VAR_14;

  FUNC_16(&VAR_10->rx_kfifo_lock, VAR_14);
  FUNC_10(&VAR_10->rx_kfifo);

  FUNC_17(&VAR_10->rx_kfifo_lock, VAR_14);
  if (VAR_9->interrupt_enable)
   FUNC_9(VAR_11, VAR_4 | VAR_5 | VAR_3);
  FUNC_3(VAR_11, VAR_9->enable);
 }

 FUNC_12(&VAR_10->rx_params_lock);
 return 0;
}

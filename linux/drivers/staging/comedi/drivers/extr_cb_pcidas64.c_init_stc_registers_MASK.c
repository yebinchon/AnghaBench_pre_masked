
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pcidas64_private {int adc_control1_bits; int hw_config_bits; int intr_enable_bits; scalar_t__ main_iobase; int dac_control1_bits; int fifo_size_bits; } ;
struct pcidas64_board {scalar_t__ layout; TYPE_1__* ai_fifo; } ;
struct comedi_device {int spinlock; struct pcidas64_private* private; struct pcidas64_board* board_ptr; } ;
struct TYPE_2__ {int max_segment_length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_15)
{
 const struct pcidas64_board *VAR_16 = VAR_15->board_ptr;
 struct pcidas64_private *VAR_17 = VAR_15->private;
 u16 VAR_18;
 unsigned long VAR_19;

 FUNC_2(&VAR_15->spinlock, VAR_19);





 if (1)
  VAR_17->adc_control1_bits |= VAR_1;
 FUNC_4(VAR_17->adc_control1_bits,
        VAR_17->main_iobase + VAR_0);


 FUNC_4(0xff, VAR_17->main_iobase + VAR_2);

 VAR_18 = VAR_14 | VAR_7;
 if (VAR_16->layout == VAR_13)
  VAR_18 |= VAR_11;
 VAR_17->hw_config_bits |= VAR_18;
 FUNC_4(VAR_17->hw_config_bits,
        VAR_17->main_iobase + VAR_10);

 FUNC_4(0, VAR_17->main_iobase + VAR_6);
 FUNC_4(0, VAR_17->main_iobase + VAR_3);

 FUNC_3(&VAR_15->spinlock, VAR_19);


 VAR_17->fifo_size_bits |= VAR_4;
 FUNC_1(VAR_15, VAR_16->ai_fifo->max_segment_length);

 VAR_17->dac_control1_bits = VAR_5;
 VAR_17->intr_enable_bits =

  VAR_8 | VAR_9;
 FUNC_4(VAR_17->intr_enable_bits,
        VAR_17->main_iobase + VAR_12);

 FUNC_0(VAR_15);
}

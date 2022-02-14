
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct das16m1_private {int adc_count; int initial_hw_count; int ai_buffer; int counter; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {int class_dev; int iobase; struct comedi_subdevice* read_subdev; struct das16m1_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; int stop_arg; int chanlist_len; } ;
struct comedi_async {int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct comedi_subdevice*,int ,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_5, unsigned int VAR_6)
{
 struct das16m1_private *VAR_7 = VAR_5->private;
 struct comedi_subdevice *VAR_8 = VAR_5->read_subdev;
 struct comedi_async *VAR_9 = VAR_8->async;
 struct comedi_cmd *VAR_10 = &VAR_9->cmd;
 u16 VAR_11;
 u16 VAR_12;


 VAR_12 = FUNC_0(VAR_7->counter, 1);




 if (VAR_7->adc_count == 0 &&
     VAR_12 == VAR_7->initial_hw_count) {
  VAR_11 = 0;
 } else {
  VAR_11 = -VAR_12 - VAR_7->adc_count;
 }

 if (VAR_10->stop_src == VAR_4) {
  if (VAR_11 > VAR_10->stop_arg * VAR_10->chanlist_len)
   VAR_11 = VAR_10->stop_arg * VAR_10->chanlist_len;
 }

 if (VAR_11 > VAR_2)
  VAR_11 = VAR_2;
 FUNC_4(VAR_5->iobase, VAR_7->ai_buffer, VAR_11);
 FUNC_1(VAR_8, VAR_7->ai_buffer, VAR_11);
 VAR_7->adc_count += VAR_11;

 if (VAR_10->stop_src == VAR_4) {
  if (VAR_7->adc_count >= VAR_10->stop_arg * VAR_10->chanlist_len) {

   VAR_9->events |= VAR_0;
  }
 }





 if (VAR_6 & VAR_3) {
  VAR_9->events |= VAR_1;
  FUNC_3(VAR_5->class_dev, "fifo overflow\n");
 }

 FUNC_2(VAR_5, VAR_8);
}

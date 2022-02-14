
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16m1_private {unsigned int intr_ctrl; int counter; int initial_hw_count; scalar_t__ adc_count; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct das16m1_private* private; } ;
struct comedi_cmd {scalar_t__ convert_src; scalar_t__ start_src; int chanlist_len; int chanlist; } ;
struct comedi_async {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct comedi_device*,int ,int ) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_12,
     struct comedi_subdevice *VAR_13)
{
 struct das16m1_private *VAR_14 = VAR_12->private;
 struct comedi_async *VAR_15 = VAR_13->async;
 struct comedi_cmd *VAR_16 = &VAR_15->cmd;
 unsigned int VAR_17;


 VAR_14->adc_count = 0;






 FUNC_2(VAR_14->counter, 1, VAR_9 | VAR_8);
 FUNC_4(VAR_14->counter, 1, 0);





 VAR_14->initial_hw_count = FUNC_1(VAR_14->counter, 1);

 FUNC_5(VAR_12, VAR_16->chanlist, VAR_16->chanlist_len);


 VAR_14->intr_ctrl &= ~VAR_6;
 if (VAR_16->convert_src == VAR_11) {
  FUNC_3(VAR_12->pacer);
  FUNC_0(VAR_12->pacer, 1, 2, 1);
  VAR_14->intr_ctrl |= VAR_5;
 } else {
  VAR_14->intr_ctrl |= VAR_4;
 }


 VAR_17 = 0;




 if (VAR_16->start_src == VAR_10 && VAR_16->convert_src != VAR_10)
  VAR_17 |= VAR_1;

 FUNC_6(VAR_17, VAR_12->iobase + VAR_2);


 FUNC_6(0, VAR_12->iobase + VAR_0);

 VAR_14->intr_ctrl |= VAR_3;
 FUNC_6(VAR_14->intr_ctrl, VAR_12->iobase + VAR_7);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct me4000_private {unsigned int ai_init_ticks; int ai_scan_ticks; int ai_chan_ticks; unsigned int ai_ctrl_mode; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct me4000_private* private; } ;
struct comedi_cmd {scalar_t__ stop_src; unsigned int chanlist_len; unsigned int stop_arg; scalar_t__ scan_end_src; unsigned int scan_end_arg; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_cmd*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_15,
       struct comedi_subdevice *VAR_16)
{
 struct me4000_private *VAR_17 = VAR_15->private;
 struct comedi_cmd *VAR_18 = &VAR_16->async->cmd;
 unsigned int VAR_19;


 FUNC_2(VAR_17->ai_init_ticks - 1,
      VAR_15->iobase + VAR_9);
 FUNC_2(0x0, VAR_15->iobase + VAR_8);

 if (VAR_17->ai_scan_ticks) {
  FUNC_2(VAR_17->ai_scan_ticks - 1,
       VAR_15->iobase + VAR_11);
  FUNC_2(0x0, VAR_15->iobase + VAR_10);
 }

 FUNC_2(VAR_17->ai_chan_ticks - 1,
      VAR_15->iobase + VAR_0);
 FUNC_2(VAR_17->ai_chan_ticks - 1,
      VAR_15->iobase + VAR_1);


 VAR_19 = VAR_17->ai_ctrl_mode |
        VAR_2 |
        VAR_3;


 if (VAR_18->stop_src == VAR_13) {
  FUNC_2(VAR_18->chanlist_len * VAR_18->stop_arg,
       VAR_15->iobase + VAR_7);
  VAR_19 |= VAR_6;
 } else if (VAR_18->stop_src == VAR_14 &&
     VAR_18->scan_end_src == VAR_13) {
  FUNC_2(VAR_18->scan_end_arg,
       VAR_15->iobase + VAR_7);
  VAR_19 |= VAR_6;
 }
 VAR_19 |= VAR_4;


 FUNC_2(VAR_19, VAR_15->iobase + VAR_5);


 FUNC_1(VAR_15, VAR_16, VAR_18);


 FUNC_0(VAR_15->iobase + VAR_12);

 return 0;
}

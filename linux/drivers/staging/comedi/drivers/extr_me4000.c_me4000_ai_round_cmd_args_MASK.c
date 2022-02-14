
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct me4000_private {int ai_init_ticks; int ai_scan_ticks; int ai_chan_ticks; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct me4000_private* private; } ;
struct comedi_cmd {int start_arg; int flags; int scan_begin_arg; int convert_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_3,
         struct comedi_subdevice *VAR_4,
         struct comedi_cmd *VAR_5)
{
 struct me4000_private *VAR_6 = VAR_3->private;
 int VAR_7;

 VAR_6->ai_init_ticks = 0;
 VAR_6->ai_scan_ticks = 0;
 VAR_6->ai_chan_ticks = 0;

 if (VAR_5->start_arg) {
  VAR_6->ai_init_ticks = (VAR_5->start_arg * 33) / 1000;
  VAR_7 = (VAR_5->start_arg * 33) % 1000;

  if ((VAR_5->flags & VAR_0) == VAR_1) {
   if (VAR_7 > 33)
    VAR_6->ai_init_ticks++;
  } else if ((VAR_5->flags & VAR_0) == VAR_2) {
   if (VAR_7)
    VAR_6->ai_init_ticks++;
  }
 }

 if (VAR_5->scan_begin_arg) {
  VAR_6->ai_scan_ticks = (VAR_5->scan_begin_arg * 33) / 1000;
  VAR_7 = (VAR_5->scan_begin_arg * 33) % 1000;

  if ((VAR_5->flags & VAR_0) == VAR_1) {
   if (VAR_7 > 33)
    VAR_6->ai_scan_ticks++;
  } else if ((VAR_5->flags & VAR_0) == VAR_2) {
   if (VAR_7)
    VAR_6->ai_scan_ticks++;
  }
 }

 if (VAR_5->convert_arg) {
  VAR_6->ai_chan_ticks = (VAR_5->convert_arg * 33) / 1000;
  VAR_7 = (VAR_5->convert_arg * 33) % 1000;

  if ((VAR_5->flags & VAR_0) == VAR_1) {
   if (VAR_7 > 33)
    VAR_6->ai_chan_ticks++;
  } else if ((VAR_5->flags & VAR_0) == VAR_2) {
   if (VAR_7)
    VAR_6->ai_chan_ticks++;
  }
 }
}

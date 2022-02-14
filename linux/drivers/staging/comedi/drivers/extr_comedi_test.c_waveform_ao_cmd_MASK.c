
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waveform_private {int ao_scan_period; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; struct waveform_private* private; } ;
struct comedi_cmd {int flags; int scan_begin_arg; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4)
{
 struct waveform_private *VAR_5 = VAR_3->private;
 struct comedi_cmd *VAR_6 = &VAR_4->async->cmd;

 if (VAR_6->flags & VAR_0) {
  FUNC_0(VAR_3->class_dev,
   "commands at RT priority not supported in this driver\n");
  return -1;
 }

 VAR_5->ao_scan_period = VAR_6->scan_begin_arg / VAR_1;
 VAR_4->async->inttrig = VAR_2;
 return 0;
}

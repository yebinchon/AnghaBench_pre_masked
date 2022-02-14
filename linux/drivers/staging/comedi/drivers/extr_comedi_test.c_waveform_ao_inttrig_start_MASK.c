
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct waveform_private {TYPE_1__ ao_timer; int ao_scan_period; int ao_last_scan_time; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct waveform_private* private; } ;
struct comedi_cmd {unsigned int start_arg; } ;
struct comedi_async {int * inttrig; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         unsigned int VAR_4)
{
 struct waveform_private *VAR_5 = VAR_2->private;
 struct comedi_async *VAR_6 = VAR_3->async;
 struct comedi_cmd *VAR_7 = &VAR_6->cmd;

 if (VAR_4 != VAR_7->start_arg)
  return -VAR_0;

 VAR_6->inttrig = ((void*)0);

 VAR_5->ao_last_scan_time = FUNC_2(FUNC_1());
 VAR_5->ao_timer.expires =
  VAR_1 + FUNC_3(VAR_5->ao_scan_period);
 FUNC_0(&VAR_5->ao_timer);

 return 1;
}

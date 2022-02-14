
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct waveform_private {scalar_t__ ai_convert_time; unsigned int wf_current; unsigned int ai_convert_period; int ai_scan_period; unsigned int wf_period; int ai_timer; struct comedi_device* dev; } ;
struct timer_list {int dummy; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* read_subdev; } ;
struct comedi_cmd {unsigned int* chanlist; int scan_end_arg; scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {size_t cur_chan; scalar_t__ scan_progress; scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;
 unsigned int FUNC_4 (struct comedi_subdevice*,int ) ;
 struct waveform_private* VAR_4 ;
 unsigned short FUNC_5 (struct comedi_device*,int ,int ,unsigned int) ;
 struct waveform_private* FUNC_6 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned int) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_6)
{
 struct waveform_private *VAR_7 = FUNC_6(VAR_7, VAR_6, VAR_3);
 struct comedi_device *VAR_8 = VAR_7->dev;
 struct comedi_subdevice *VAR_9 = VAR_8->read_subdev;
 struct comedi_async *VAR_10 = VAR_9->async;
 struct comedi_cmd *VAR_11 = &VAR_10->cmd;
 u64 VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;

 VAR_12 = FUNC_8(FUNC_7());
 VAR_13 = FUNC_4(VAR_9, VAR_2);

 while (VAR_13 && VAR_7->ai_convert_time < VAR_12) {
  unsigned int VAR_15 = VAR_11->chanlist[VAR_10->cur_chan];
  unsigned short VAR_16;

  VAR_16 = FUNC_5(VAR_8, FUNC_0(VAR_15),
           FUNC_1(VAR_15), VAR_7->wf_current);
  if (FUNC_2(VAR_9, &VAR_16, 1) == 0)
   goto overrun;
  VAR_14 = VAR_7->ai_convert_period;
  if (VAR_10->scan_progress == 0) {

   VAR_14 += VAR_7->ai_scan_period -
       VAR_7->ai_convert_period *
       VAR_11->scan_end_arg;
  }
  VAR_7->wf_current += VAR_14;
  if (VAR_7->wf_current >= VAR_7->wf_period)
   VAR_7->wf_current %= VAR_7->wf_period;
  VAR_7->ai_convert_time += VAR_14;
  VAR_13--;
 }

 if (VAR_11->stop_src == VAR_1 && VAR_10->scans_done >= VAR_11->stop_arg) {
  VAR_10->events |= VAR_0;
 } else {
  if (VAR_7->ai_convert_time > VAR_12)
   VAR_14 = VAR_7->ai_convert_time - VAR_12;
  else
   VAR_14 = 1;
  FUNC_9(&VAR_7->ai_timer,
     VAR_5 + FUNC_10(VAR_14));
 }

overrun:
 FUNC_3(VAR_8, VAR_9);
}

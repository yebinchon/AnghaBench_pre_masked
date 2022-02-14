
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct waveform_private {int ao_last_scan_time; int ao_scan_period; unsigned short* ao_loopbacks; int ao_timer; struct comedi_device* dev; } ;
struct timer_list {int dummy; } ;
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_device {struct comedi_subdevice* write_subdev; } ;
struct comedi_cmd {unsigned int scan_end_arg; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_5 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_6 (struct comedi_subdevice*,int ) ;
 unsigned int FUNC_7 (struct comedi_subdevice*,unsigned int) ;
 struct waveform_private* VAR_4 ;
 int FUNC_8 (int,int) ;
 struct waveform_private* FUNC_9 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 scalar_t__ FUNC_13 (unsigned int) ;

__attribute__((used)) static void FUNC_14(struct timer_list *VAR_6)
{
 struct waveform_private *VAR_7 = FUNC_9(VAR_7, VAR_6, VAR_3);
 struct comedi_device *VAR_8 = VAR_7->dev;
 struct comedi_subdevice *VAR_9 = VAR_8->write_subdev;
 struct comedi_async *VAR_10 = VAR_9->async;
 struct comedi_cmd *VAR_11 = &VAR_10->cmd;
 u64 VAR_12;
 u64 VAR_13;
 unsigned int VAR_14 = 0;


 VAR_12 = FUNC_11(FUNC_10());
 VAR_13 = VAR_12 - VAR_7->ao_last_scan_time;
 FUNC_8(VAR_13, VAR_7->ao_scan_period);
 if (VAR_13) {
  unsigned int VAR_15;


  VAR_14 = FUNC_6(VAR_9, 0);
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;
  if (VAR_14) {

   if (VAR_14 > 1) {
    unsigned int VAR_16, VAR_17;

    VAR_16 =
    FUNC_7(VAR_9, VAR_11->scan_end_arg *
          (VAR_14 - 1));
    VAR_17 = FUNC_1(VAR_9, VAR_16);
    FUNC_2(VAR_9, VAR_17);
    FUNC_5(VAR_9, VAR_17);
    if (VAR_17 < VAR_16) {

     VAR_10->events |= VAR_1;
     goto underrun;
    }
   }

   for (VAR_15 = 0; VAR_15 < VAR_11->scan_end_arg; VAR_15++) {
    unsigned int VAR_18 = FUNC_0(VAR_11->chanlist[VAR_15]);
    unsigned short *VAR_19;

    VAR_19 = &VAR_7->ao_loopbacks[VAR_18];

    if (!FUNC_3(VAR_9, VAR_19, 1)) {

     VAR_10->events |= VAR_1;
     goto underrun;
    }
   }

   VAR_7->ao_last_scan_time +=
    (u64)VAR_14 * VAR_7->ao_scan_period;
  }
 }
 if (VAR_11->stop_src == VAR_2 && VAR_10->scans_done >= VAR_11->stop_arg) {
  VAR_10->events |= VAR_0;
 } else if (VAR_14 < VAR_13) {
  VAR_10->events |= VAR_1;
 } else {
  unsigned int VAR_20 = VAR_7->ao_last_scan_time +
     VAR_7->ao_scan_period - VAR_12;

  FUNC_12(&VAR_7->ao_timer,
     VAR_5 + FUNC_13(VAR_20));
 }

underrun:
 FUNC_4(VAR_8, VAR_9);
}

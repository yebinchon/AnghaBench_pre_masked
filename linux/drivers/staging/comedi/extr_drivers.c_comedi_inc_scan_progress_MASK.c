
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; struct comedi_async* async; } ;
struct comedi_cmd {int chanlist_len; } ;
struct comedi_async {unsigned int scan_progress; unsigned int scans_done; int events; int cur_chan; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_subdevice*) ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,unsigned int) ;

void FUNC_2(struct comedi_subdevice *VAR_3,
         unsigned int VAR_4)
{
 struct comedi_async *VAR_5 = VAR_3->async;
 struct comedi_cmd *VAR_6 = &VAR_5->cmd;
 unsigned int VAR_7 = FUNC_0(VAR_3);


 if (!(VAR_3->subdev_flags & VAR_1)) {
  VAR_5->cur_chan += FUNC_1(VAR_3, VAR_4);
  VAR_5->cur_chan %= VAR_6->chanlist_len;
 }

 VAR_5->scan_progress += VAR_4;
 if (VAR_5->scan_progress >= VAR_7) {
  unsigned int VAR_8 = VAR_5->scan_progress / VAR_7;

  if (VAR_5->scans_done < (VAR_2 - VAR_8))
   VAR_5->scans_done += VAR_8;
  else
   VAR_5->scans_done = VAR_2;

  VAR_5->scan_progress %= VAR_7;
  VAR_5->events |= VAR_0;
 }
}

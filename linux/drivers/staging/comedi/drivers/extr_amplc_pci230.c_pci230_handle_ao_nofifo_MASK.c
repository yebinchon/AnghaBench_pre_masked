
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned short* readback; struct comedi_async* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; int chanlist_len; int * chanlist; } ;
struct comedi_async {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_2 (struct comedi_device*,unsigned short,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4)
{
 struct comedi_async *VAR_5 = VAR_4->async;
 struct comedi_cmd *VAR_6 = &VAR_5->cmd;
 unsigned short VAR_7;
 int VAR_8;

 if (VAR_6->stop_src == VAR_2 && VAR_5->scans_done >= VAR_6->stop_arg)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_6->chanlist_len; VAR_8++) {
  unsigned int VAR_9 = FUNC_0(VAR_6->chanlist[VAR_8]);

  if (!FUNC_1(VAR_4, &VAR_7, 1)) {
   VAR_5->events |= VAR_1;
   return;
  }
  FUNC_2(VAR_3, VAR_7, VAR_9);
  VAR_4->readback[VAR_9] = VAR_7;
 }

 if (VAR_6->stop_src == VAR_2 && VAR_5->scans_done >= VAR_6->stop_arg)
  VAR_5->events |= VAR_0;
}

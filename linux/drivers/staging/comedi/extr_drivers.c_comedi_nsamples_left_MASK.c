
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_cmd {scalar_t__ stop_src; unsigned long long scan_end_arg; int stop_arg; } ;
struct comedi_async {int scan_progress; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (struct comedi_subdevice*,int ) ;
 unsigned long long FUNC_1 (struct comedi_subdevice*,int ) ;

unsigned int FUNC_2(struct comedi_subdevice *VAR_1,
      unsigned int VAR_2)
{
 struct comedi_async *VAR_3 = VAR_1->async;
 struct comedi_cmd *VAR_4 = &VAR_3->cmd;
 unsigned long long VAR_5;
 unsigned long long VAR_6;

 if (VAR_4->stop_src != VAR_0)
  return VAR_2;

 VAR_5 = FUNC_0(VAR_1, VAR_4->stop_arg);
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5 * VAR_4->scan_end_arg -
  FUNC_1(VAR_1, VAR_3->scan_progress);

 if (VAR_6 < VAR_2)
  return VAR_6;
 return VAR_2;
}

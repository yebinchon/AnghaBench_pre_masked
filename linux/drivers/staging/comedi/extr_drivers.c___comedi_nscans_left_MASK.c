
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct comedi_subdevice *VAR_1,
      unsigned int VAR_2)
{
 struct comedi_async *VAR_3 = VAR_1->async;
 struct comedi_cmd *VAR_4 = &VAR_3->cmd;

 if (VAR_4->stop_src == VAR_0) {
  unsigned int VAR_5 = 0;

  if (VAR_3->scans_done < VAR_4->stop_arg)
   VAR_5 = VAR_4->stop_arg - VAR_3->scans_done;

  if (VAR_2 > VAR_5)
   VAR_2 = VAR_5;
 }
 return VAR_2;
}

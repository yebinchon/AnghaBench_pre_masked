
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int dummy; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned short*,int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      unsigned int VAR_4)
{
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 unsigned short VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_5->chanlist_len; VAR_7++) {
  VAR_8 = FUNC_0(VAR_5->chanlist[VAR_7]);
  if (VAR_4 & (1U << VAR_8))
   VAR_6 |= (1U << VAR_7);
 }

 FUNC_1(VAR_3, &VAR_6, 1);

 if (VAR_5->stop_src == VAR_1 &&
     VAR_3->async->scans_done >= VAR_5->stop_arg)
  VAR_3->async->events |= VAR_0;
}

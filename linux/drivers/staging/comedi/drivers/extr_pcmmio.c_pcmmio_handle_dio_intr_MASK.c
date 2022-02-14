
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmmio_private {unsigned int enabled_mask; int spinlock; int active; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmmio_private* private; } ;
struct comedi_cmd {int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       unsigned int VAR_4)
{
 struct pcmmio_private *VAR_5 = VAR_2->private;
 struct comedi_cmd *VAR_6 = &VAR_3->async->cmd;
 unsigned int VAR_7 = 0;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_3(&VAR_5->spinlock, VAR_8);

 if (!VAR_5->active)
  goto done;

 if (!(VAR_4 & VAR_5->enabled_mask))
  goto done;

 for (VAR_9 = 0; VAR_9 < VAR_6->chanlist_len; VAR_9++) {
  unsigned int VAR_10 = FUNC_0(VAR_6->chanlist[VAR_9]);

  if (VAR_4 & (1 << VAR_10))
   VAR_7 |= (1 << VAR_9);
 }

 FUNC_1(VAR_3, &VAR_7, 1);

 if (VAR_6->stop_src == VAR_1 &&
     VAR_3->async->scans_done >= VAR_6->stop_arg)
  VAR_3->async->events |= VAR_0;

done:
 FUNC_4(&VAR_5->spinlock, VAR_8);

 FUNC_2(VAR_2, VAR_3);
}

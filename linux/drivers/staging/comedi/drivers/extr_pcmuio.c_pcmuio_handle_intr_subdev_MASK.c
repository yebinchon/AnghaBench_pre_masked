
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmuio_private {struct pcmuio_asic* asics; } ;
struct pcmuio_asic {unsigned int enabled_mask; int spinlock; int active; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcmuio_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; scalar_t__ stop_src; scalar_t__ stop_arg; int * chanlist; } ;
struct TYPE_2__ {scalar_t__ scans_done; int events; struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct comedi_subdevice*,unsigned int*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          unsigned int VAR_4)
{
 struct pcmuio_private *VAR_5 = VAR_2->private;
 int VAR_6 = FUNC_3(VAR_3);
 struct pcmuio_asic *VAR_7 = &VAR_5->asics[VAR_6];
 struct comedi_cmd *VAR_8 = &VAR_3->async->cmd;
 unsigned int VAR_9 = 0;
 unsigned long VAR_10;
 unsigned int VAR_11;

 FUNC_4(&VAR_7->spinlock, VAR_10);

 if (!VAR_7->active)
  goto done;

 if (!(VAR_4 & VAR_7->enabled_mask))
  goto done;

 for (VAR_11 = 0; VAR_11 < VAR_8->chanlist_len; VAR_11++) {
  unsigned int VAR_12 = FUNC_0(VAR_8->chanlist[VAR_11]);

  if (VAR_4 & (1 << VAR_12))
   VAR_9 |= (1 << VAR_11);
 }

 FUNC_1(VAR_3, &VAR_9, 1);

 if (VAR_8->stop_src == VAR_1 &&
     VAR_3->async->scans_done >= VAR_8->stop_arg)
  VAR_3->async->events |= VAR_0;

done:
 FUNC_5(&VAR_7->spinlock, VAR_10);

 FUNC_2(VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmmio_private {unsigned int enabled_mask; int active; } ;
struct comedi_subdevice {int n_chan; TYPE_1__* async; } ;
struct comedi_device {struct pcmmio_private* private; } ;
struct comedi_cmd {unsigned int* chanlist; int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3)
{
 struct pcmmio_private *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 int VAR_8;

 VAR_4->enabled_mask = 0;
 VAR_4->active = 1;
 if (VAR_5->chanlist) {
  for (VAR_8 = 0; VAR_8 < VAR_5->chanlist_len; VAR_8++) {
   unsigned int VAR_9 = VAR_5->chanlist[VAR_8];
   unsigned int VAR_10 = FUNC_1(VAR_9);
   unsigned int VAR_11 = FUNC_2(VAR_9);
   unsigned int VAR_12 = FUNC_0(VAR_9);

   VAR_6 |= (1 << VAR_10);
   VAR_7 |= (((VAR_12 || VAR_11) ? 1 : 0) << VAR_10);
  }
 }
 VAR_6 &= ((1 << VAR_3->n_chan) - 1);
 VAR_4->enabled_mask = VAR_6;


 FUNC_3(VAR_2, VAR_7, VAR_1, 0);
 FUNC_3(VAR_2, VAR_6, VAR_0, 0);
}

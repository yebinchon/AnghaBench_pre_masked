
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcl812_private {int ai_dma; int ai_eos; unsigned int mode_reg_int; scalar_t__ ai_poll_ptr; struct comedi_isadma* dma; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_isadma {scalar_t__ cur_dma; } ;
struct comedi_device {scalar_t__ iobase; int pacer; struct pcl812_private* private; } ;
struct comedi_cmd {scalar_t__* chanlist; unsigned int chanlist_len; int flags; int convert_src; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (struct comedi_device*,scalar_t__,int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4, struct comedi_subdevice *VAR_5)
{
 struct pcl812_private *VAR_6 = VAR_4->private;
 struct comedi_isadma *VAR_7 = VAR_6->dma;
 struct comedi_cmd *VAR_8 = &VAR_5->async->cmd;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 FUNC_3(VAR_4, VAR_8->chanlist[0], 1);

 if (VAR_7) {
  VAR_6->ai_dma = 1;
  for (VAR_10 = 1; VAR_10 < VAR_8->chanlist_len; VAR_10++)
   if (VAR_8->chanlist[0] != VAR_8->chanlist[VAR_10]) {

    VAR_6->ai_dma = 0;
    break;
   }
 } else {
  VAR_6->ai_dma = 0;
 }

 VAR_6->ai_poll_ptr = 0;


 if (VAR_8->flags & VAR_0) {
  VAR_6->ai_eos = 1;


  if (VAR_8->chanlist_len == 1)
   VAR_6->ai_dma = 0;
 }

 if (VAR_6->ai_dma) {

  VAR_7->cur_dma = 0;
  FUNC_4(VAR_4, VAR_5, 0);
 }

 switch (VAR_8->convert_src) {
 case 128:
  FUNC_1(VAR_4->pacer);
  FUNC_0(VAR_4->pacer, 1, 2, 1);
  break;
 }

 if (VAR_6->ai_dma)
  VAR_9 |= VAR_1;
 else
  VAR_9 |= VAR_2;
 FUNC_2(VAR_6->mode_reg_int | VAR_9, VAR_4->iobase + VAR_3);

 return 0;
}

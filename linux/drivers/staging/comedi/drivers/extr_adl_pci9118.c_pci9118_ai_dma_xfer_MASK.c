
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9118_private {unsigned int ai_add_front; unsigned int ai_add_back; unsigned int ai_act_dmapos; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pci9118_private* private; } ;
struct comedi_cmd {unsigned int chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 int FUNC_0 (struct comedi_subdevice*,unsigned short*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    unsigned short *VAR_2,
    unsigned int VAR_3)
{
 struct pci9118_private *VAR_4 = VAR_0->private;
 struct comedi_cmd *VAR_5 = &VAR_1->async->cmd;
 unsigned int VAR_6 = VAR_4->ai_add_front;
 unsigned int VAR_7 = VAR_6 + VAR_5->chanlist_len;
 unsigned int VAR_8 = VAR_7 + VAR_4->ai_add_back;
 unsigned int VAR_9 = VAR_4->ai_act_dmapos;
 unsigned int VAR_10;

 if (VAR_8 == VAR_5->chanlist_len) {

  FUNC_0(VAR_1, VAR_2, VAR_3);
  VAR_9 += VAR_3;
 } else {





  while (VAR_3) {
   if (VAR_9 < VAR_6) {

    VAR_10 = VAR_6 - VAR_9;
    if (VAR_10 > VAR_3)
     VAR_10 = VAR_3;
    VAR_9 += VAR_10;
    VAR_3 -= VAR_10;
    if (!VAR_3)
     break;
   }
   if (VAR_9 < VAR_7) {

    VAR_10 = VAR_7 - VAR_9;
    if (VAR_10 > VAR_3)
     VAR_10 = VAR_3;
    FUNC_0(VAR_1, VAR_2, VAR_10);
    VAR_9 += VAR_10;
    VAR_3 -= VAR_10;
   }

   VAR_6 += VAR_8;
   VAR_7 += VAR_8;
  }
 }

 VAR_4->ai_act_dmapos = VAR_9 % VAR_8;
}


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



__attribute__((used)) static unsigned int FUNC_0(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          unsigned int VAR_2)
{
 struct pci9118_private *VAR_3 = VAR_0->private;
 struct comedi_cmd *VAR_4 = &VAR_1->async->cmd;
 unsigned int VAR_5 = VAR_3->ai_add_front;
 unsigned int VAR_6 = VAR_5 + VAR_4->chanlist_len;
 unsigned int VAR_7 = VAR_6 + VAR_3->ai_add_back;
 unsigned int VAR_8 = VAR_3->ai_act_dmapos;
 unsigned int VAR_9, VAR_10, VAR_11;

 if (VAR_7 == VAR_4->chanlist_len)
  return VAR_2;
 VAR_9 = VAR_2 / VAR_7;
 VAR_10 = VAR_9 * VAR_4->chanlist_len;
 VAR_2 -= VAR_9 * VAR_7;




 while (VAR_2) {
  if (VAR_8 < VAR_5) {

   VAR_11 = VAR_5 - VAR_8;
   if (VAR_11 > VAR_2)
    VAR_11 = VAR_2;
   VAR_8 += VAR_11;
   VAR_2 -= VAR_11;
   if (!VAR_2)
    break;
  }
  if (VAR_8 < VAR_6) {

   VAR_11 = VAR_6 - VAR_8;
   if (VAR_11 > VAR_2)
    VAR_11 = VAR_2;
   VAR_10 += VAR_11;
   VAR_8 += VAR_11;
   VAR_2 -= VAR_11;
  }

  VAR_5 += VAR_7;
  VAR_6 += VAR_7;
 }
 return VAR_10;
}

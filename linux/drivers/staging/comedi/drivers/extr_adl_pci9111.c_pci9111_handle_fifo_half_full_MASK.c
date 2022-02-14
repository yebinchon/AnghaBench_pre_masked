
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci9111_private_data {unsigned short* ai_bounce_buffer; int scan_delay; scalar_t__ chunk_counter; unsigned int chunk_num_samples; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; struct pci9111_private_data* private; } ;
struct comedi_cmd {scalar_t__ chanlist_len; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,int ) ;
 int FUNC_2 (scalar_t__,unsigned short*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3)
{
 struct pci9111_private_data *VAR_4 = VAR_2->private;
 struct comedi_cmd *VAR_5 = &VAR_3->async->cmd;
 unsigned short *VAR_6 = VAR_4->ai_bounce_buffer;
 unsigned int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 FUNC_2(VAR_2->iobase + VAR_0, VAR_6, VAR_7);

 if (VAR_4->scan_delay < 1) {
  FUNC_0(VAR_3, VAR_6, VAR_7);
 } else {
  unsigned int VAR_8 = 0;
  unsigned int VAR_9;

  while (VAR_8 < VAR_7) {
   if (VAR_4->chunk_counter < VAR_5->chanlist_len) {
    VAR_9 = VAR_5->chanlist_len -
       VAR_4->chunk_counter;

    if (VAR_9 > VAR_7 - VAR_8)
     VAR_9 = VAR_7 - VAR_8;

    FUNC_0(VAR_3, VAR_6 + VAR_8, VAR_9);
   } else {
    VAR_9 = VAR_4->chunk_num_samples -
       VAR_4->chunk_counter;

    if (VAR_9 > VAR_7 - VAR_8)
     VAR_9 = VAR_7 - VAR_8;
   }

   VAR_8 += VAR_9;
   VAR_4->chunk_counter += VAR_9;

   if (VAR_4->chunk_counter >=
       VAR_4->chunk_num_samples)
    VAR_4->chunk_counter = 0;
  }
 }
}

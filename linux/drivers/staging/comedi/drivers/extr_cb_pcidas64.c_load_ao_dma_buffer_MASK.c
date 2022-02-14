
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidas64_private {unsigned int ao_dma_index; TYPE_1__* ao_dma_desc; int * ao_buffer; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* write_subdev; struct pcidas64_private* private; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {void* next; void* transfer_size; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 void* FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (void*) ;
 unsigned int FUNC_4 (struct comedi_device*) ;

__attribute__((used)) static unsigned int FUNC_5(struct comedi_device *VAR_3,
           const struct comedi_cmd *VAR_4)
{
 struct pcidas64_private *VAR_5 = VAR_3->private;
 struct comedi_subdevice *VAR_6 = VAR_3->write_subdev;
 unsigned int VAR_7 = VAR_5->ao_dma_index;
 unsigned int VAR_8 = FUNC_4(VAR_3);
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_9 = FUNC_0(VAR_3, VAR_6,
           VAR_5->ao_buffer[VAR_7],
           VAR_1);
 if (VAR_9 == 0)
  return 0;

 VAR_10 = FUNC_1(VAR_6, VAR_9);
 VAR_5->ao_dma_desc[VAR_7].transfer_size = FUNC_2(VAR_10);

 VAR_11 = FUNC_3(VAR_5->ao_dma_desc[VAR_7].next);
 VAR_11 |= VAR_2;
 VAR_5->ao_dma_desc[VAR_7].next = FUNC_2(VAR_11);




 VAR_11 = FUNC_3(VAR_5->ao_dma_desc[VAR_8].next);
 VAR_11 &= ~VAR_2;
 VAR_5->ao_dma_desc[VAR_8].next = FUNC_2(VAR_11);

 VAR_5->ao_dma_index = (VAR_7 + 1) % VAR_0;

 return VAR_10;
}

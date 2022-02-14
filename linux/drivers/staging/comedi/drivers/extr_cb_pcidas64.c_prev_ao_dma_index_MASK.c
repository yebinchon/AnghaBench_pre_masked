
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {int ao_dma_index; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct comedi_device *VAR_1)
{
 struct pcidas64_private *VAR_2 = VAR_1->private;
 unsigned int VAR_3;

 if (VAR_2->ao_dma_index == 0)
  VAR_3 = VAR_0 - 1;
 else
  VAR_3 = VAR_2->ao_dma_index - 1;
 return VAR_3;
}

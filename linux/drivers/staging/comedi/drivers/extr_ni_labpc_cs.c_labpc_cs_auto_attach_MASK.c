
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; int irq; TYPE_1__** resource; } ;
struct comedi_device {int iobase; int * board_ptr; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int *) ;
 struct pcmcia_device* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
    unsigned long VAR_7)
{
 struct pcmcia_device *VAR_8 = FUNC_1(VAR_6);
 int VAR_9;


 VAR_6->board_ptr = &VAR_5[0];

 VAR_8->config_flags |= VAR_0 |
         VAR_1 | VAR_2;
 VAR_9 = FUNC_0(VAR_6, ((void*)0));
 if (VAR_9)
  return VAR_9;
 VAR_6->iobase = VAR_8->resource[0]->start;

 if (!VAR_8->irq)
  return -VAR_3;

 return FUNC_2(VAR_6, VAR_8->irq, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; int config_flags; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; int iobase; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int *) ;
 struct pcmcia_device* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
        unsigned long VAR_2)
{
 struct pcmcia_device *VAR_3 = FUNC_2(VAR_1);
 struct comedi_subdevice *VAR_4;
 int VAR_5;

 VAR_3->config_flags |= VAR_0;
 VAR_5 = FUNC_1(VAR_1, ((void*)0));
 if (VAR_5)
  return VAR_5;
 VAR_1->iobase = VAR_3->resource[0]->start;

 VAR_5 = FUNC_0(VAR_1, 1);
 if (VAR_5)
  return VAR_5;


 VAR_4 = &VAR_1->subdevices[0];
 return FUNC_3(VAR_1, VAR_4, ((void*)0), 0x00);
}

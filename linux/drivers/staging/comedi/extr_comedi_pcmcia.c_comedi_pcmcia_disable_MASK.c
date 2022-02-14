
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct comedi_device {int dummy; } ;


 struct pcmcia_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;

void FUNC_2(struct comedi_device *VAR_0)
{
 struct pcmcia_device *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_1);
}

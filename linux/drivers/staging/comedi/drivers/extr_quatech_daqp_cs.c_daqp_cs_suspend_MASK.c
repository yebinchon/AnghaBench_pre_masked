
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct comedi_device* priv; } ;
struct daqp_private {int stop; } ;
struct comedi_device {struct daqp_private* private; } ;



__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_0)
{
 struct comedi_device *VAR_1 = VAR_0->priv;
 struct daqp_private *VAR_2 = VAR_1 ? VAR_1->private : ((void*)0);


 if (VAR_2)
  VAR_2->stop = 1;

 return 0;
}

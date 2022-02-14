
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct comedi_device {scalar_t__ hw_dev; } ;


 struct pcmcia_device* FUNC_0 (scalar_t__) ;

struct pcmcia_device *FUNC_1(struct comedi_device *VAR_0)
{
 return VAR_0->hw_dev ? FUNC_0(VAR_0->hw_dev) : ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,void*) ;
 struct pcmcia_device* FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*,int (*) (struct pcmcia_device*,void*),int *) ;

int FUNC_4(struct comedi_device *VAR_1,
    int (*VAR_2)(struct pcmcia_device *VAR_3,
        void *VAR_4))
{
 struct pcmcia_device *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 if (!VAR_2)
  VAR_2 = FUNC_0;

 VAR_6 = FUNC_3(VAR_5, VAR_2, ((void*)0));
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ config_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1,
        void *VAR_2)
{
 if (VAR_1->config_index == 0)
  return -VAR_0;

 return FUNC_0(VAR_1);
}

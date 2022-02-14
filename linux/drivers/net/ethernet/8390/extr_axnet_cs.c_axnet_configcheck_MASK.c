
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_index; TYPE_1__** resource; } ;
struct TYPE_2__ {int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2, void *VAR_3)
{
 if (VAR_2->config_index == 0)
  return -VAR_0;

 VAR_2->config_index = 0x05;
 if (VAR_2->resource[0]->end + VAR_2->resource[1]->end < 32)
  return -VAR_1;

 return FUNC_0(VAR_2);
}

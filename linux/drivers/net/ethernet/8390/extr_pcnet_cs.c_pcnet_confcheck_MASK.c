
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ config_index; int io_lines; TYPE_1__** resource; } ;
struct TYPE_2__ {int end; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1, void *VAR_2)
{
 int *VAR_3 = VAR_2;
 int VAR_4 = (*VAR_3 & 0x1);

 *VAR_3 &= (VAR_1->resource[2]->end >= 0x4000) ? 0x10 : ~0x10;

 if (VAR_1->config_index == 0)
  return -VAR_0;

 if (VAR_1->resource[0]->end + VAR_1->resource[1]->end < 32)
  return -VAR_0;

 if (VAR_4)
  VAR_1->io_lines = 16;
 return FUNC_0(VAR_1);
}

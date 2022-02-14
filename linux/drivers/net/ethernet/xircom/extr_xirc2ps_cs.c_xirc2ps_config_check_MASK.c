
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_index; int io_lines; TYPE_1__** resource; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int start; int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int
FUNC_1(struct pcmcia_device *VAR_4, void *VAR_5)
{
 int *VAR_6 = VAR_5;
 resource_size_t VAR_7 = VAR_4->resource[1]->start;

 VAR_7 += (*VAR_6 ? (VAR_4->config_index & 0x20 ? -24 : 8)
  : (VAR_4->config_index & 0x20 ? 8 : -24));

 if ((VAR_4->resource[0]->start & 0xf) == 8)
  return -VAR_0;

 VAR_4->resource[0]->end = 18;
 VAR_4->resource[1]->end = 8;
 VAR_4->resource[0]->flags &= ~VAR_1;
 VAR_4->resource[0]->flags |= VAR_2;
 VAR_4->resource[1]->flags &= ~VAR_1;
 VAR_4->resource[1]->flags |= VAR_3;
 VAR_4->io_lines = 10;

 VAR_4->resource[1]->start = VAR_4->resource[0]->start;
 VAR_4->resource[0]->start = VAR_7;
 return FUNC_0(VAR_4);
}

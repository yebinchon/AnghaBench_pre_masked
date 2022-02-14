
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int io_lines; TYPE_1__** resource; } ;
struct TYPE_2__ {int end; int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3, void *VAR_4)
{
 VAR_3->io_lines = 10;


 if ((VAR_3->resource[0]->end < 0x20) &&
  (VAR_3->resource[1]->end >= 0x20))
  VAR_3->resource[0]->start = VAR_3->resource[1]->start;

 if (VAR_3->resource[0]->start >= 0xffff)
  return -VAR_0;

 VAR_3->resource[1]->start = VAR_3->resource[1]->end = 0;
 VAR_3->resource[0]->end = 0x20;
 VAR_3->resource[0]->flags &= ~VAR_1;
 VAR_3->resource[0]->flags |= VAR_2;

 return FUNC_0(VAR_3);
}

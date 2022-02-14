
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int io_lines; TYPE_1__** resource; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2, void *VAR_3)
{
 VAR_2->resource[0]->flags &= ~VAR_0;
 VAR_2->resource[0]->flags |= VAR_1;
 VAR_2->io_lines = 10;


 return FUNC_0(VAR_2);
}

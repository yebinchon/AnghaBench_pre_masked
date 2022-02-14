
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {int end; int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3,
           void *VAR_4)
{
 int *VAR_5 = VAR_4;

 if (!VAR_3->resource[0]->end || !VAR_3->resource[1]->end ||
  VAR_3->resource[0]->start + 8 != VAR_3->resource[1]->start)
  return -VAR_0;

 VAR_3->resource[0]->end = VAR_3->resource[1]->end = 8;
 VAR_3->resource[0]->flags &= ~VAR_1;
 VAR_3->resource[0]->flags |= VAR_2;

 if (FUNC_0(VAR_3))
  return -VAR_0;

 *VAR_5 = VAR_3->resource[0]->start + 8;
 return 0;
}

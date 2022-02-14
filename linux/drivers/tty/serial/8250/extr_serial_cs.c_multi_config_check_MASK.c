
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_4, void *VAR_5)
{
 int *VAR_6 = VAR_5;

 if (VAR_4->resource[1]->end)
  return -VAR_0;





 if (VAR_4->resource[0]->end <= 8)
  return -VAR_0;

 VAR_4->resource[0]->flags &= ~VAR_2;
 VAR_4->resource[0]->flags |= VAR_3;
 VAR_4->resource[0]->end = *VAR_6 * 8;

 if (FUNC_0(VAR_4))
  return -VAR_1;
 return 0;
}

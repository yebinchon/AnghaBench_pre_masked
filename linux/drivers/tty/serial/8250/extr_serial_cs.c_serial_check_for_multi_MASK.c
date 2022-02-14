
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serial_info {int multi; } ;
struct pcmcia_device {TYPE_1__** resource; struct serial_info* priv; } ;
struct TYPE_2__ {int end; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_1, void *VAR_2)
{
 struct serial_info *VAR_3 = VAR_1->priv;

 if (!VAR_1->resource[0]->end)
  return -VAR_0;

 if ((!VAR_1->resource[1]->end) && (VAR_1->resource[0]->end % 8 == 0))
  VAR_3->multi = VAR_1->resource[0]->end >> 3;

 if ((VAR_1->resource[1]->end) && (VAR_1->resource[0]->end == 8)
  && (VAR_1->resource[1]->end == 8))
  VAR_3->multi = 2;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_index; TYPE_1__** resource; } ;
struct TYPE_2__ {unsigned int start; } ;


 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0)
{
    int VAR_1;
    unsigned int VAR_2;




    for (VAR_2 = 0x300; VAR_2 < 0x3e0; VAR_2 += 0x20) {
 VAR_0->resource[0]->start = VAR_2;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == 0) {

     VAR_0->config_index =
  ((VAR_0->resource[0]->start & 0x0f0) >> 3) | 0x22;
     return VAR_1;
 }
    }
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {unsigned int start; scalar_t__ end; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1)
{
    int VAR_2, VAR_3;
    static const unsigned int VAR_4[5] =
 { 0x3f8, 0x2f8, 0x3e8, 0x2e8, 0x0 };

    for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
 VAR_1->resource[1]->start = VAR_4[VAR_2];
 VAR_1->resource[1]->flags |= VAR_0;
 if (VAR_1->resource[1]->start == 0) {
     VAR_1->resource[1]->end = 0;
     FUNC_1("out of resource for serial\n");
 }
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == 0)
  return VAR_3;
    }
    return VAR_3;
}

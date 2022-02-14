
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int io_lines; TYPE_1__** resource; } ;
struct TYPE_2__ {int end; unsigned int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3,
     void *VAR_4)
{
 static const unsigned int VAR_5[5] = { 0x3f8, 0x2f8, 0x3e8, 0x2e8, 0x0 };
 int VAR_6;

 if (VAR_3->io_lines > 3)
  return -VAR_0;

 VAR_3->resource[0]->flags &= ~VAR_1;
 VAR_3->resource[0]->flags |= VAR_2;
 VAR_3->resource[0]->end = 8;

 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  VAR_3->resource[0]->start = VAR_5[VAR_6];
  VAR_3->io_lines = VAR_5[VAR_6] ? 16 : 3;
  if (!FUNC_0(VAR_3))
   return 0;
 }
 return -VAR_0;
}

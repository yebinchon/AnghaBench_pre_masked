
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
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_4)
{
    int VAR_5, VAR_6;
    VAR_4->resource[0]->flags &= ~VAR_0;
    VAR_4->resource[1]->flags &= ~VAR_0;
    if (VAR_4->resource[0]->end == 32) {
 VAR_4->resource[0]->flags |= VAR_3;

 if (VAR_4->resource[1]->end > 0)
     VAR_4->resource[1]->flags |= VAR_2;
    } else {

 VAR_4->resource[0]->flags |= VAR_2;
 VAR_4->resource[1]->flags |= VAR_1;
    }
    if (VAR_4->resource[0]->start == 0) {
 for (VAR_5 = 0; VAR_5 < 0x400; VAR_5 += 0x20) {
     VAR_4->resource[0]->start = VAR_5 ^ 0x300;
     VAR_4->resource[1]->start = (VAR_5 ^ 0x300) + 0x10;
     VAR_4->io_lines = 16;
     VAR_6 = FUNC_0(VAR_4);
     if (VAR_6 == 0)
      return VAR_6;
 }
 return VAR_6;
    } else {
 return FUNC_0(VAR_4);
    }
}

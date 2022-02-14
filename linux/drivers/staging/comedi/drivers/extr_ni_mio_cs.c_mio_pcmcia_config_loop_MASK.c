
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {int start; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_3->resource[0]->flags &= ~VAR_1;
 VAR_3->resource[0]->flags |= VAR_2;

 for (VAR_5 = 0x000; VAR_5 < 0x400; VAR_5 += 0x20) {
  VAR_3->resource[0]->start = VAR_5;
  VAR_6 = FUNC_0(VAR_3);
  if (!VAR_6)
   return 0;
 }
 return -VAR_0;
}

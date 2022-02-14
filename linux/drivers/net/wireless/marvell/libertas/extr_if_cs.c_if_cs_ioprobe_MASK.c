
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; } ;
struct TYPE_2__ {scalar_t__ end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_3, void *VAR_4)
{
 VAR_3->resource[0]->flags &= ~VAR_1;
 VAR_3->resource[0]->flags |= VAR_2;

 if (VAR_3->resource[1]->end) {
  FUNC_1("wrong CIS (check number of IO windows)\n");
  return -VAR_0;
 }


 return FUNC_0(VAR_3);
}

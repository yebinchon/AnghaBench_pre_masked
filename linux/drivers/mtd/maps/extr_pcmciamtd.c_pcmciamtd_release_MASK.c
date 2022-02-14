
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmciamtd_dev {int * win_base; } ;
struct pcmcia_device {TYPE_1__** resource; struct pcmciamtd_dev* priv; } ;
struct TYPE_2__ {scalar_t__ end; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (char*,struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
 struct pcmciamtd_dev *VAR_1 = VAR_0->priv;

 FUNC_2("link = 0x%p\n", VAR_0);

 if (VAR_0->resource[2]->end) {
  if(VAR_1->win_base) {
   FUNC_0(VAR_1->win_base);
   VAR_1->win_base = ((void*)0);
  }
 }
 FUNC_1(VAR_0);
}

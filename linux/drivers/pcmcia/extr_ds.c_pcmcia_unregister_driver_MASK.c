
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_driver {int drv; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcmcia_driver*) ;
 int FUNC_2 (struct pcmcia_driver*) ;
 int FUNC_3 (char*,int ) ;

void FUNC_4(struct pcmcia_driver *VAR_0)
{
 FUNC_3("unregistering driver %s\n", VAR_0->name);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->drv);
 FUNC_1(VAR_0);
}

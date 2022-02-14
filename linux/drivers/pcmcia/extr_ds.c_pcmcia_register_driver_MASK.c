
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int name; int owner; int * bus; } ;
struct TYPE_4__ {int list; int lock; } ;
struct pcmcia_driver {TYPE_2__ drv; int name; TYPE_1__ dynids; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct pcmcia_driver*) ;
 int FUNC_5 (struct pcmcia_driver*) ;
 int FUNC_6 (char*,int ) ;

int FUNC_7(struct pcmcia_driver *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 FUNC_4(VAR_2);


 VAR_2->drv.bus = &VAR_1;
 VAR_2->drv.owner = VAR_2->owner;
 VAR_2->drv.name = VAR_2->name;
 FUNC_3(&VAR_2->dynids.lock);
 FUNC_0(&VAR_2->dynids.list);

 FUNC_6("registering driver %s\n", VAR_2->name);

 VAR_3 = FUNC_1(&VAR_2->drv);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_2->drv);

 return VAR_3;
}

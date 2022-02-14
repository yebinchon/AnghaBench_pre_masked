
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_driver {int owner; int name; int (* remove ) (struct pcmcia_device*) ;} ;
struct pcmcia_device {scalar_t__ device_no; int _win; scalar_t__ _locked; scalar_t__ _io; scalar_t__ _irq; TYPE_1__* socket; } ;
struct device {int driver; } ;
struct TYPE_2__ {scalar_t__ device_count; scalar_t__ pcmcia_pfc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 struct pcmcia_device* FUNC_7 (struct device*) ;
 struct pcmcia_driver* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_1)
{
 struct pcmcia_device *VAR_2;
 struct pcmcia_driver *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_7(VAR_1);
 VAR_3 = FUNC_8(VAR_1->driver);

 FUNC_1(VAR_1, "removing device\n");





 if ((VAR_2->socket->pcmcia_pfc) &&
     (VAR_2->socket->device_count > 0) &&
     (VAR_2->device_no == 0))
  FUNC_4(VAR_2->socket, VAR_2);


 if (!VAR_3)
  return 0;

 if (VAR_3->remove)
  VAR_3->remove(VAR_2);


 if (VAR_2->_irq || VAR_2->_io || VAR_2->_locked)
  FUNC_2(VAR_1,
    "pcmcia: driver %s did not release config properly\n",
    VAR_3->name);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->_win & FUNC_0(VAR_4))
   FUNC_2(VAR_1,
     "pcmcia: driver %s did not release window properly\n",
     VAR_3->name);


 FUNC_5(VAR_2);
 FUNC_3(VAR_3->owner);

 return 0;
}

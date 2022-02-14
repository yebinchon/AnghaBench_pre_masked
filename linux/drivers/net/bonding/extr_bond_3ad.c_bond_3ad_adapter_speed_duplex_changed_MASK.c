
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int dev; TYPE_1__* bond; } ;
struct port {int actor_port_number; int slave; } ;
struct TYPE_4__ {struct port port; } ;
struct TYPE_3__ {int dev; int mode_lock; } ;


 TYPE_2__* FUNC_0 (struct slave*) ;
 int FUNC_1 (struct port*,int) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct slave *VAR_0)
{
 struct port *VAR_1;

 VAR_1 = &(FUNC_0(VAR_0)->port);


 if (!VAR_1->slave) {
  FUNC_3(VAR_0->bond->dev, VAR_0->dev,
      "speed/duplex changed for uninitialized port\n");
  return;
 }

 FUNC_4(&VAR_0->bond->mode_lock);
 FUNC_1(VAR_1, 0);
 FUNC_5(&VAR_0->bond->mode_lock);
 FUNC_2(VAR_0->bond->dev, VAR_0->dev, "Port %d changed speed/duplex\n",
    VAR_1->actor_port_number);
}

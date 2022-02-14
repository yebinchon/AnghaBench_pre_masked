
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {TYPE_1__* bond; int dev; } ;
struct port {int is_enabled; int actor_port_number; int slave; } ;
struct aggregator {int dummy; } ;
struct TYPE_4__ {struct port port; } ;
struct TYPE_3__ {int dev; int mode_lock; } ;


 char VAR_0 ;
 TYPE_2__* FUNC_0 (struct slave*) ;
 struct aggregator* FUNC_1 (struct port*) ;
 int FUNC_2 (struct aggregator*,int*) ;
 int FUNC_3 (struct port*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int ,char*,int ,char*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct slave *VAR_1, char VAR_2)
{
 struct aggregator *VAR_3;
 struct port *VAR_4;
 bool VAR_5;

 VAR_4 = &(FUNC_0(VAR_1)->port);


 if (!VAR_4->slave) {
  FUNC_6(VAR_1->bond->dev, VAR_1->dev, "link status changed for uninitialized port\n");
  return;
 }

 FUNC_7(&VAR_1->bond->mode_lock);







 if (VAR_2 == VAR_0) {
  VAR_4->is_enabled = 1;
  FUNC_3(VAR_4, 0);
 } else {

  VAR_4->is_enabled = 0;
  FUNC_3(VAR_4, 1);
 }
 VAR_3 = FUNC_1(VAR_4);
 FUNC_2(VAR_3, &VAR_5);

 FUNC_8(&VAR_1->bond->mode_lock);

 FUNC_5(VAR_1->bond->dev, VAR_1->dev, "Port %d changed link status to %s\n",
    VAR_4->actor_port_number,
    VAR_2 == VAR_0 ? "UP" : "DOWN");




 FUNC_4(VAR_1->bond, ((void*)0));
}

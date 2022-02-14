
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {scalar_t__ wol; } ;
struct sky2_hw {int ports; struct net_device** dev; int restart_work; int watchdog_timer; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sky2_hw* FUNC_2 (struct device*) ;
 struct sky2_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sky2_hw*) ;
 int FUNC_7 (struct sky2_hw*) ;
 int FUNC_8 (struct sky2_port*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0)
{
 struct sky2_hw *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (!VAR_1)
  return 0;

 FUNC_1(&VAR_1->watchdog_timer);
 FUNC_0(&VAR_1->restart_work);

 FUNC_4();

 FUNC_6(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->ports; VAR_2++) {
  struct net_device *VAR_3 = VAR_1->dev[VAR_2];
  struct sky2_port *VAR_4 = FUNC_3(VAR_3);

  if (VAR_4->wol)
   FUNC_8(VAR_4);
 }

 FUNC_7(VAR_1);
 FUNC_5();

 return 0;
}

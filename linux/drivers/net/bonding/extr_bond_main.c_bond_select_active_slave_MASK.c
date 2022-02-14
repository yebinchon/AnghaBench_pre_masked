
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int dummy; } ;
struct bonding {int dev; int curr_active_slave; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct bonding*,struct slave*) ;
 struct slave* FUNC_2 (struct bonding*) ;
 int FUNC_3 (struct bonding*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct slave* FUNC_6 (int ) ;

void FUNC_7(struct bonding *VAR_0)
{
 struct slave *VAR_1;
 int VAR_2;

 FUNC_0();

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 != FUNC_6(VAR_0->curr_active_slave)) {
  FUNC_1(VAR_0, VAR_1);
  VAR_2 = FUNC_3(VAR_0);
  if (!VAR_2)
   return;

  if (FUNC_5(VAR_0->dev))
   FUNC_4(VAR_0->dev, "active interface up!\n");
  else
   FUNC_4(VAR_0->dev, "now running without any active interface!\n");
 }
}

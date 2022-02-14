
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {scalar_t__ state; int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mii_bus *VAR_3)
{

 if (VAR_3->state == VAR_0) {
  FUNC_1(VAR_3);
  return;
 }

 FUNC_0(VAR_3->state != VAR_2);
 VAR_3->state = VAR_1;

 FUNC_2(&VAR_3->dev);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, bool VAR_2)
{
 if (VAR_1->reg_state == VAR_0) {
  if (VAR_2)
   FUNC_3(VAR_1);
  else
   FUNC_2(VAR_1);
 } else {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
}

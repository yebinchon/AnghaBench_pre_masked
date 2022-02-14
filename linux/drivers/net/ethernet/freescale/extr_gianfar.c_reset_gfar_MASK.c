
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gfar_private {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_2(VAR_1);

 while (FUNC_5(VAR_0, &VAR_2->state))
  FUNC_1();

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_0(VAR_0, &VAR_2->state);
}

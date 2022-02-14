
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct gfar_private {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct gfar_private*) ;
 int FUNC_1 (struct gfar_private*) ;
 int FUNC_2 (struct gfar_private*) ;
 struct gfar_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9(struct net_device *VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_1);

 FUNC_8();
 FUNC_6(VAR_0, &VAR_2->state);
 FUNC_7();

 FUNC_0(VAR_2);


 FUNC_2(VAR_2);

 FUNC_5(VAR_1->phydev);

 FUNC_1(VAR_2);
}

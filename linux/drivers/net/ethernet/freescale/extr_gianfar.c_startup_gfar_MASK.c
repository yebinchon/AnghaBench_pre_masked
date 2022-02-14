
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct gfar_private {int oldduplex; scalar_t__ oldspeed; scalar_t__ oldlink; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gfar_private*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct gfar_private*) ;
 int FUNC_4 (struct gfar_private*) ;
 int FUNC_5 (struct gfar_private*) ;
 struct gfar_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(struct net_device *VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 FUNC_4(VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_2);

 FUNC_10();
 FUNC_0(VAR_0, &VAR_2->state);
 FUNC_9();


 FUNC_5(VAR_2);


 VAR_2->oldlink = 0;
 VAR_2->oldspeed = 0;
 VAR_2->oldduplex = -1;

 FUNC_8(VAR_1->phydev);

 FUNC_1(VAR_2);

 FUNC_7(VAR_1);

 return 0;
}

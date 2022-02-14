
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int mtu; } ;
struct gfar_private {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, int VAR_3)
{
 struct gfar_private *VAR_4 = FUNC_2(VAR_2);

 while (FUNC_5(VAR_0, &VAR_4->state))
  FUNC_1();

 if (VAR_2->flags & VAR_1)
  FUNC_4(VAR_2);

 VAR_2->mtu = VAR_3;

 if (VAR_2->flags & VAR_1)
  FUNC_3(VAR_2);

 FUNC_0(VAR_0, &VAR_4->state);

 return 0;
}

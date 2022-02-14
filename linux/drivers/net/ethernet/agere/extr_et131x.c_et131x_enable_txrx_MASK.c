
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct et131x_adapter {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 struct et131x_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct et131x_adapter *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_2);

 FUNC_4(VAR_1);
}

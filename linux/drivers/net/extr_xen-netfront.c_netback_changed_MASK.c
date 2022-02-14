
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int const state; int dev; } ;
struct netfront_info {struct net_device* netdev; } ;
struct net_device {int dummy; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
 int FUNC_0 (int *,char*,int ) ;
 struct netfront_info* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xenbus_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct xenbus_device*,int) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct xenbus_device *VAR_1,
       enum xenbus_state VAR_2)
{
 struct netfront_info *VAR_3 = FUNC_1(&VAR_1->dev);
 struct net_device *VAR_4 = VAR_3->netdev;

 FUNC_0(&VAR_1->dev, "%s\n", FUNC_5(VAR_2));

 FUNC_3(&VAR_0);

 switch (VAR_2) {
 case 131:
 case 132:
 case 129:
 case 130:
 case 128:
  break;

 case 133:
  if (VAR_1->state != 131)
   break;
  if (FUNC_7(VAR_4) != 0)
   break;
  FUNC_6(VAR_1, 134);
  break;

 case 134:
  FUNC_2(VAR_4);
  break;

 case 136:
  if (VAR_1->state == 136)
   break;

 case 135:
  FUNC_4(VAR_1);
  break;
 }
}

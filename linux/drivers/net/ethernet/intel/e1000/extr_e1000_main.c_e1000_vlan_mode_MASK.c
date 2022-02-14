
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct e1000_adapter {int flags; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_adapter*,int ) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1,
       netdev_features_t VAR_2)
{
 struct e1000_adapter *VAR_3 = FUNC_3(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_3->flags))
  FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_2);

 if (!FUNC_4(VAR_0, &VAR_3->flags))
  FUNC_2(VAR_3);
}

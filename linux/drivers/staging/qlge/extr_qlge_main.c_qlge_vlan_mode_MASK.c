
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_4, netdev_features_t VAR_5)
{
 struct ql_adapter *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 & VAR_0) {
  FUNC_1(VAR_6, VAR_1, VAR_2 |
     VAR_3);
 } else {
  FUNC_1(VAR_6, VAR_1, VAR_2);
 }
}

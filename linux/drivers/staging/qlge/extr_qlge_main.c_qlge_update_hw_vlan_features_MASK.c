
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int ndev; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
     netdev_features_t VAR_2)
{
 struct ql_adapter *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = 0;
 bool VAR_5 = FUNC_2(VAR_1);

 if (VAR_5) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_3, VAR_0, VAR_3->ndev,
      "Failed to bring down the adapter\n");
   return VAR_4;
  }
 }


 VAR_1->features = VAR_2;

 if (VAR_5) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_3, VAR_0, VAR_3->ndev,
      "Failed to bring up the adapter\n");
   return VAR_4;
  }
 }

 return VAR_4;
}

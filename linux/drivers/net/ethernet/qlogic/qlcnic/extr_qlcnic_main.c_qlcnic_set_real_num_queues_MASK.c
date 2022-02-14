
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qlcnic_adapter {struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_0,
          u8 VAR_1, u8 VAR_2)
{
 struct net_device *VAR_3 = VAR_0->netdev;
 int VAR_4 = 0;

 if (VAR_1) {
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (VAR_4) {
   FUNC_0(VAR_3, "failed to set %d Tx queues\n",
       VAR_1);
   return VAR_4;
  }
 }

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  if (VAR_4)
   FUNC_0(VAR_3, "failed to set %d Rx queues\n",
       VAR_2);
 }

 return VAR_4;
}

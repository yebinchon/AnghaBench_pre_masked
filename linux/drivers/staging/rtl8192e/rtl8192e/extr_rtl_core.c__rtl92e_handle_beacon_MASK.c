
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_network {int dummy; } ;
struct rtllib_beacon {int dummy; } ;
struct r8192_priv {int update_beacon_wq; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct r8192_priv*,int,struct rtllib_network*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
     struct rtllib_beacon *VAR_1,
     struct rtllib_network *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, 1, VAR_2);

 FUNC_2(&VAR_3->update_beacon_wq, 0);
 return 0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fm10k_intfc {struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct fm10k_intfc*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct fm10k_intfc *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;


 if (!FUNC_1(VAR_2))
  return;

 FUNC_2(VAR_1, VAR_0, VAR_2, "NIC Link is down\n");

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
}

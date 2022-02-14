
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ath6kl_vif {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (int ,int *) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct ath6kl_vif *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_0(VAR_2);

 FUNC_1(VAR_0, &VAR_2->flags);

 return 0;
}

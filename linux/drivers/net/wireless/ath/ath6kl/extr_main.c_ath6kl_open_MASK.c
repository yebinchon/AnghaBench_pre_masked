
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ath6kl_vif {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath6kl_vif* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct ath6kl_vif *VAR_3 = FUNC_0(VAR_2);

 FUNC_4(VAR_1, &VAR_3->flags);

 if (FUNC_5(VAR_0, &VAR_3->flags)) {
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 } else {
  FUNC_1(VAR_2);
 }

 return 0;
}

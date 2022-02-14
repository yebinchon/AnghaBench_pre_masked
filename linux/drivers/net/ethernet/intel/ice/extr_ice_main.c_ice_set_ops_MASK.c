
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * netdev_ops; } ;
struct ice_pf {int dummy; } ;


 scalar_t__ FUNC_0 (struct ice_pf*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ice_pf* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct ice_pf *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3)) {
  VAR_2->netdev_ops = &VAR_1;
  FUNC_3(VAR_2);
  return;
 }

 VAR_2->netdev_ops = &VAR_0;
 FUNC_2(VAR_2);
}

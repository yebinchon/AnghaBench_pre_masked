
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_vsi {int num_queue_pairs; struct net_device* netdev; } ;


 scalar_t__ FUNC_0 (struct net_device*,int) ;

bool FUNC_1(struct i40e_vsi *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queue_pairs; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2))
   return 1;
 }

 return 0;
}

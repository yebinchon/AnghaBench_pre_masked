
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct enic {scalar_t__ flags; scalar_t__ uc_count; scalar_t__ mc_count; struct net_device* netdev; } ;


 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,int *) ;

void FUNC_2(struct enic *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;

 FUNC_1(VAR_1, ((void*)0));
 FUNC_0(VAR_1, ((void*)0));

 VAR_0->mc_count = 0;
 VAR_0->uc_count = 0;
 VAR_0->flags = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {scalar_t__ mc_count; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct be_adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct be_adapter *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;

 FUNC_0(VAR_3, ((void*)0));
 FUNC_1(VAR_2, VAR_0, VAR_1);
 VAR_2->mc_count = 0;
}

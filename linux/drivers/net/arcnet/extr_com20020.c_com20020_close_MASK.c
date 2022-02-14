
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct arcnet_local {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 struct arcnet_local* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct arcnet_local *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = VAR_2->base_addr;


 VAR_3->config &= ~VAR_1;
 FUNC_0(VAR_3->config, VAR_4, VAR_0);
}

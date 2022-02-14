
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;
struct arcnet_local {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,int ) ;
 struct arcnet_local* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 int VAR_3 = VAR_2->base_addr;
 struct arcnet_local *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_2);


 VAR_4->config &= ~VAR_1;
 FUNC_1(VAR_4->config, VAR_3, VAR_0);
 return 0;
}

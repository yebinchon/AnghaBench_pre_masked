
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int base_addr; int * dev_addr; } ;
struct arcnet_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct arcnet_local*,int,int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct arcnet_local* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 int VAR_4 = VAR_2->base_addr;
 struct arcnet_local *VAR_5 = FUNC_3(VAR_2);
 struct sockaddr *VAR_6 = VAR_3;

 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data, 1);
 FUNC_1(VAR_5, VAR_4, VAR_1);
 FUNC_0(VAR_2->dev_addr[0], VAR_4, VAR_0);

 return 0;
}

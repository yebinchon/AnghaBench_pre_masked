
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_local {int dummy; } ;
struct net_device {int dev_addr; int addr_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct net_local* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_local*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, void *VAR_2)
{
 struct net_local *VAR_3 = FUNC_1(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (FUNC_2(VAR_1))
  return -VAR_0;

 FUNC_0(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 FUNC_3(VAR_3, VAR_1->dev_addr);
 return 0;
}

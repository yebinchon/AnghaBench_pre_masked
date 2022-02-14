
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct jme_adapter {int macaddr_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct jme_adapter *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (FUNC_3(VAR_1))
  return -VAR_0;

 FUNC_4(&VAR_3->macaddr_lock);
 FUNC_1(VAR_1->dev_addr, VAR_4->sa_data, VAR_1->addr_len);
 FUNC_0(VAR_1);
 FUNC_5(&VAR_3->macaddr_lock);

 return 0;
}

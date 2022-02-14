
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct sgiseeq_private {int tx_lock; } ;
struct net_device {int addr_len; int dev_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int ) ;
 struct sgiseeq_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, void *VAR_1)
{
 struct sgiseeq_private *VAR_2 = FUNC_2(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;

 FUNC_1(VAR_0->dev_addr, VAR_3->sa_data, VAR_0->addr_len);

 FUNC_3(&VAR_2->tx_lock);
 FUNC_0(VAR_0);
 FUNC_4(&VAR_2->tx_lock);

 return 0;
}

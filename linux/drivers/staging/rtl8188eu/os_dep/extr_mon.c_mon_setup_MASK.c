
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int* dev_addr; int type; int priv_flags; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3)
{
 VAR_3->netdev_ops = &VAR_2;
 VAR_3->needs_free_netdev = 1;
 FUNC_1(VAR_3);
 VAR_3->priv_flags |= VAR_1;
 VAR_3->type = VAR_0;




 FUNC_0(VAR_3->dev_addr);
 VAR_3->dev_addr[0] = 0x12;
}

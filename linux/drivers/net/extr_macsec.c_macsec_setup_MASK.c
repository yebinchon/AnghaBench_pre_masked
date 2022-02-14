
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int needs_free_netdev; int broadcast; int priv_destructor; int * netdev_ops; int priv_flags; int max_mtu; scalar_t__ min_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5)
{
 FUNC_2(VAR_5);
 VAR_5->min_mtu = 0;
 VAR_5->max_mtu = VAR_0;
 VAR_5->priv_flags |= VAR_1;
 VAR_5->netdev_ops = &VAR_3;
 VAR_5->needs_free_netdev = 1;
 VAR_5->priv_destructor = VAR_2;
 FUNC_0(VAR_5, &VAR_4);

 FUNC_1(VAR_5->broadcast);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; } ;
struct net_device {int mtu; int flags; scalar_t__ hard_header_len; scalar_t__ max_mtu; int min_mtu; int priv_flags; int * netdev_ops; int type; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct tun_struct* FUNC_2 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_11)
{
 struct tun_struct *VAR_12 = FUNC_2(VAR_11);

 switch (VAR_12->flags & VAR_8) {
 case 128:
  VAR_11->netdev_ops = &VAR_10;


  VAR_11->hard_header_len = 0;
  VAR_11->addr_len = 0;
  VAR_11->mtu = 1500;


  VAR_11->type = VAR_0;
  VAR_11->flags = VAR_4 | VAR_3 | VAR_2;
  break;

 case 129:
  VAR_11->netdev_ops = &VAR_9;

  FUNC_1(VAR_11);
  VAR_11->priv_flags &= ~VAR_5;
  VAR_11->priv_flags |= VAR_1;

  FUNC_0(VAR_11);

  break;
 }

 VAR_11->min_mtu = VAR_7;
 VAR_11->max_mtu = VAR_6 - VAR_11->hard_header_len;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int set_features; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 struct tun_struct* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_1,
 netdev_features_t VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_0(VAR_1);

 return (VAR_2 & VAR_3->set_features) | (VAR_2 & ~VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int duplex; int speed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 struct virtnet_info *VAR_3 = FUNC_0(VAR_2);

 VAR_3->speed = VAR_1;
 VAR_3->duplex = VAR_0;
}

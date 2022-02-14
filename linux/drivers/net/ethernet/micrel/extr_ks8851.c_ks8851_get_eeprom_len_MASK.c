
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks8851_net {int rc_ccr; } ;


 int VAR_0 ;
 struct ks8851_net* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct ks8851_net *VAR_2 = FUNC_0(VAR_1);


 return VAR_2->rc_ccr & VAR_0 ? 128 : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct axienet_local {scalar_t__ rxmem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct axienet_local* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, int VAR_5)
{
 struct axienet_local *VAR_6 = FUNC_0(VAR_4);

 if (FUNC_1(VAR_4))
  return -VAR_0;

 if ((VAR_5 + VAR_2 +
  VAR_3) > VAR_6->rxmem)
  return -VAR_1;

 VAR_4->mtu = VAR_5;

 return 0;
}

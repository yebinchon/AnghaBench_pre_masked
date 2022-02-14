
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, int VAR_1)
{
 VAR_0->mtu = VAR_1;

 if (!FUNC_0(VAR_0))
  return 0;





 FUNC_2(VAR_0);
 return FUNC_1(VAR_0);
}

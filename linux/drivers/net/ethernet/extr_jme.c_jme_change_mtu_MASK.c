
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct jme_adapter {int dummy; } ;


 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 struct jme_adapter *VAR_2 = FUNC_2(VAR_0);

 VAR_0->mtu = VAR_1;
 FUNC_3(VAR_0);

 FUNC_1(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}

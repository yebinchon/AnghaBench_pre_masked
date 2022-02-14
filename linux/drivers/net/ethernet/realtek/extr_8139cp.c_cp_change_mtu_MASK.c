
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct cp_private {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct cp_private*) ;
 struct cp_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, int VAR_1)
{
 struct cp_private *VAR_2 = FUNC_3(VAR_0);


 if (!FUNC_4(VAR_0)) {
  VAR_0->mtu = VAR_1;
  FUNC_2(VAR_2);
  return 0;
 }


 FUNC_0(VAR_0);
 VAR_0->mtu = VAR_1;
 FUNC_2(VAR_2);
 return FUNC_1(VAR_0);
}

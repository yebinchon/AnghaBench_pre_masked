
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct enic {scalar_t__ port_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct enic*) ;
 scalar_t__ FUNC_2 (struct enic*) ;
 struct enic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct enic *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_1(VAR_3) || FUNC_2(VAR_3))
  return -VAR_0;

 if (VAR_1->mtu > VAR_3->port_mtu)
  FUNC_4(VAR_1,
       "interface MTU (%d) set higher than port MTU (%d)\n",
       VAR_1->mtu, VAR_3->port_mtu);

 return FUNC_0(VAR_1, VAR_2);
}

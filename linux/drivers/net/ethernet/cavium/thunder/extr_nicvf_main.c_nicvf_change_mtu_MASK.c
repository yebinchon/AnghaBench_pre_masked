
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {scalar_t__ xdp_prog; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct nicvf*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, int VAR_3)
{
 struct nicvf *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_2->mtu;




 if (VAR_4->xdp_prog && VAR_3 > VAR_1) {
  FUNC_1(VAR_2, "Jumbo frames not yet supported with XDP, current MTU %d.\n",
       VAR_2->mtu);
  return -VAR_0;
 }

 VAR_2->mtu = VAR_3;

 if (!FUNC_2(VAR_2))
  return 0;

 if (FUNC_3(VAR_4, VAR_3)) {
  VAR_2->mtu = VAR_5;
  return -VAR_0;
 }

 return 0;
}

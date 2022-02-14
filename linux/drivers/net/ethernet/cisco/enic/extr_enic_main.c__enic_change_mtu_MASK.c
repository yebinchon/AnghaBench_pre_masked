
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 bool VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = 0;

 FUNC_0();
 if (VAR_2) {
  VAR_3 = FUNC_2(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 VAR_0->mtu = VAR_1;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}

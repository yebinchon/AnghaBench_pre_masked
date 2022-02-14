
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1, "must be stopped to change its MTU\n");
  return -VAR_0;
 }

 VAR_1->mtu = VAR_2;
 FUNC_1(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_1->mtu = VAR_2;
 return 0;
}

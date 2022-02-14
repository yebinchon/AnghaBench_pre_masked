
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3) ? VAR_2 : VAR_1;

 if (VAR_4 > VAR_5)
  return -VAR_0;
 VAR_3->mtu = VAR_4;
 return 0;
}

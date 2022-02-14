
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ag71xx*,int ,int ) ;
 struct ag71xx* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2)
{
 struct ag71xx *VAR_3 = FUNC_2(VAR_1);

 VAR_1->mtu = VAR_2;
 FUNC_1(VAR_3, VAR_0,
    FUNC_0(VAR_1->mtu));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct m_can_classdev {int dummy; } ;


 int FUNC_0 (struct m_can_classdev*) ;
 int FUNC_1 (struct net_device*,int) ;
 struct m_can_classdev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct m_can_classdev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0, 1);

 FUNC_0(VAR_1);

 return 0;
}

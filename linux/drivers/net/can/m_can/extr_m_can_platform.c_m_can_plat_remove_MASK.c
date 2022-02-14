
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct m_can_classdev {int dummy; } ;


 int FUNC_0 (struct m_can_classdev*) ;
 struct m_can_classdev* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_2(VAR_0);
 struct m_can_classdev *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);

 FUNC_3(VAR_0, ((void*)0));

 return 0;
}

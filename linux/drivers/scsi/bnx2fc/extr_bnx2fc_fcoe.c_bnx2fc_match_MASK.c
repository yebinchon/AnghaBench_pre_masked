
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct net_device*) ;

__attribute__((used)) static bool FUNC_5(struct net_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1;

 FUNC_2(&VAR_0);
 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_2)) {
  FUNC_3(&VAR_0);
  return 1;
 }

 FUNC_3(&VAR_0);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct board_info {int in_suspend; int wake_state; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 struct board_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);
 struct board_info *VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_2(VAR_1);
  VAR_2->in_suspend = 1;

  if (!FUNC_4(VAR_1))
   return 0;

  FUNC_3(VAR_1);


  if (!VAR_2->wake_state)
   FUNC_1(VAR_1);
 }
 return 0;
}

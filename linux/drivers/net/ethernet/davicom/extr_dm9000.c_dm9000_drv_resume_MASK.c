
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct board_info {scalar_t__ in_suspend; int wake_state; } ;


 struct net_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct board_info*) ;
 struct board_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_0(VAR_0);
 struct board_info *VAR_2 = FUNC_3(VAR_1);

 if (VAR_1) {
  if (FUNC_5(VAR_1)) {


   if (!VAR_2->wake_state) {
    FUNC_1(VAR_1);
    FUNC_2(VAR_2);
   }

   FUNC_4(VAR_1);
  }

  VAR_2->in_suspend = 0;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 struct notifier_block VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct notifier_block*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_3)
{
 struct notifier_block *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_1;
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  FUNC_0(VAR_3,
   "Failed to unregister switchdev blocking notifier (%d)\n", VAR_5);

 VAR_5 = FUNC_3(&VAR_2);
 if (VAR_5)
  FUNC_0(VAR_3,
   "Failed to unregister switchdev notifier (%d)\n", VAR_5);

 VAR_5 = FUNC_1(&VAR_0);
 if (VAR_5)
  FUNC_0(VAR_3,
   "Failed to unregister netdev notifier (%d)\n", VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changeupper_info {int upper_dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_2, void *VAR_3)
{
 struct netdev_notifier_changeupper_info *VAR_4 = VAR_3;

 if (VAR_2 != VAR_1 && VAR_2 != VAR_0)
  return 0;
 return FUNC_0(VAR_4->upper_dev);
}

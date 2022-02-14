
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct act8945a_charger {int init_done; int work; } ;


 int FUNC_0 (int *) ;
 struct act8945a_charger* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct act8945a_charger *VAR_1 = FUNC_1(VAR_0);

 VAR_1->init_done = 0;
 FUNC_0(&VAR_1->work);

 return 0;
}

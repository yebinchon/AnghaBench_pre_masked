
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9062_thermal {int zone; int work; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct da9062_thermal*) ;
 struct da9062_thermal* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct da9062_thermal *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(&VAR_1->work);
 FUNC_3(VAR_1->zone);
 return 0;
}

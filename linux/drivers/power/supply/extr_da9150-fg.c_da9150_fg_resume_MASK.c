
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9150_fg {int work; scalar_t__ interval; } ;


 int FUNC_0 (int *) ;
 struct da9150_fg* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct da9150_fg *VAR_1 = FUNC_1(VAR_0);





 if (VAR_1->interval)
  FUNC_0(&VAR_1->work);

 return 0;
}

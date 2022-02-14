
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iss_device {int crashed; } ;


 int FUNC_0 (struct iss_device*) ;
 int FUNC_1 (struct iss_device*) ;
 int FUNC_2 (int *) ;
 struct iss_device* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct iss_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->crashed);
 FUNC_0(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_iodelay_device {scalar_t__ pctl; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct ti_iodelay_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct ti_iodelay_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ti_iodelay_device *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return 0;

 if (VAR_1->pctl)
  FUNC_0(VAR_1->pctl);

 FUNC_2(VAR_1);



 return 0;
}

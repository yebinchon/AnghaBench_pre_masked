
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_adsp {void* px_supply; int dev; void* cx_supply; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ,char*) ;
 int FUNC_4 (void*,int) ;

__attribute__((used)) static int FUNC_5(struct qcom_adsp *VAR_0)
{
 VAR_0->cx_supply = FUNC_3(VAR_0->dev, "cx");
 if (FUNC_0(VAR_0->cx_supply))
  return FUNC_1(VAR_0->cx_supply);

 FUNC_4(VAR_0->cx_supply, 100000);

 VAR_0->px_supply = FUNC_3(VAR_0->dev, "px");
 return FUNC_2(VAR_0->px_supply);
}

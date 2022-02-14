
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int ulpi; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct dwc3 *VAR_1)
{

 VAR_1->ulpi = FUNC_3(VAR_1->dev, &VAR_0);
 if (FUNC_0(VAR_1->ulpi)) {
  FUNC_2(VAR_1->dev, "failed to register ULPI interface");
  return FUNC_1(VAR_1->ulpi);
 }

 return 0;
}

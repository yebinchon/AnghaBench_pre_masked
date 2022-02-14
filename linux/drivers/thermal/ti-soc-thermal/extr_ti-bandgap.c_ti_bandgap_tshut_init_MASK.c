
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_bandgap {int tshut_gpio; int dev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,char*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct ti_bandgap *VAR_2,
     struct platform_device *VAR_3)
{
 int VAR_4 = VAR_2->tshut_gpio;
 int VAR_5;


 VAR_5 = FUNC_3(VAR_4, "tshut");
 if (VAR_5 < 0) {
  FUNC_0(VAR_2->dev, "Could not request for TSHUT GPIO:%i\n", 86);
  return VAR_5;
 }
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Cannot set input TSHUT GPIO %d\n", VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_5(FUNC_4(VAR_4), VAR_1,
        VAR_0, "tshut", ((void*)0));
 if (VAR_5) {
  FUNC_2(VAR_4);
  FUNC_0(VAR_2->dev, "request irq failed for TSHUT");
 }

 return 0;
}

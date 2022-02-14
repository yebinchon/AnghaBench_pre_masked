
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct amvdec_core {int esparser_reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int,int ,int ,char*,struct amvdec_core*) ;
 int FUNC_4 (struct device*,char*) ;
 int VAR_1 ;
 int FUNC_5 (struct platform_device*,char*) ;

int FUNC_6(struct platform_device *VAR_2, struct amvdec_core *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_2, "esparser");
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_1, VAR_0,
          "esparserirq", VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4, "Failed requesting ESPARSER IRQ\n");
  return VAR_5;
 }

 VAR_3->esparser_reset =
  FUNC_4(VAR_4, "esparser");
 if (FUNC_0(VAR_3->esparser_reset)) {
  FUNC_2(VAR_4, "Failed to get esparser_reset\n");
  return FUNC_1(VAR_3->esparser_reset);
 }

 return 0;
}

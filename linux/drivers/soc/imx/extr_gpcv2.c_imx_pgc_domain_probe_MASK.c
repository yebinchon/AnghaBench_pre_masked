
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; struct imx_pgc_domain* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct imx_pgc_domain {int genpd; TYPE_1__* dev; scalar_t__ voltage; int regulator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (struct imx_pgc_domain*) ;
 int FUNC_5 (struct imx_pgc_domain*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct imx_pgc_domain *VAR_3 = VAR_2->dev.platform_data;
 int VAR_4;

 VAR_3->dev = &VAR_2->dev;

 VAR_3->regulator = FUNC_3(VAR_3->dev, "power");
 if (FUNC_0(VAR_3->regulator)) {
  if (FUNC_1(VAR_3->regulator) != -VAR_0) {
   if (FUNC_1(VAR_3->regulator) != -VAR_1)
    FUNC_2(VAR_3->dev, "Failed to get domain's regulator\n");
   return FUNC_1(VAR_3->regulator);
  }
 } else if (VAR_3->voltage) {
  FUNC_9(VAR_3->regulator,
          VAR_3->voltage, VAR_3->voltage);
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  if (VAR_4 != -VAR_1)
   FUNC_2(VAR_3->dev, "Failed to get domain's clocks\n");
  return VAR_4;
 }

 VAR_4 = FUNC_7(&VAR_3->genpd, ((void*)0), 1);
 if (VAR_4) {
  FUNC_2(VAR_3->dev, "Failed to init power domain\n");
  FUNC_5(VAR_3);
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_3->dev->of_node,
        &VAR_3->genpd);
 if (VAR_4) {
  FUNC_2(VAR_3->dev, "Failed to add genpd provider\n");
  FUNC_8(&VAR_3->genpd);
  FUNC_5(VAR_3);
 }

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct anybuss_ops {int host_idx; scalar_t__ irq; int regmap; int reset; } ;
struct anybuss_host {int dummy; } ;


 int VAR_0 ;
 struct anybuss_host* FUNC_0 (int ) ;
 struct anybuss_host* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*,int) ;
 struct anybuss_host* FUNC_4 (int *,struct anybuss_ops*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct platform_device*,int) ;

__attribute__((used)) static struct anybuss_host *
FUNC_6(struct platform_device *VAR_3, int VAR_4)
{
 struct anybuss_ops VAR_5 = {};

 switch (VAR_4) {
 case 0:
  VAR_5.reset = VAR_1;
  break;
 case 1:
  VAR_5.reset = VAR_2;
  break;
 default:
  return FUNC_1(-VAR_0);
 }
 VAR_5.host_idx = VAR_4;
 VAR_5.regmap = FUNC_3(VAR_3, VAR_4);
 if (FUNC_2(VAR_5.regmap))
  return FUNC_0(VAR_5.regmap);
 VAR_5.irq = FUNC_5(VAR_3, VAR_4);
 if (VAR_5.irq <= 0)
  return FUNC_1(-VAR_0);
 return FUNC_4(&VAR_3->dev, &VAR_5);
}

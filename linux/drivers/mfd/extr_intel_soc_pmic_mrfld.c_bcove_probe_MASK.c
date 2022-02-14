
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct intel_soc_pmic {int regmap; struct device* dev; } ;
struct TYPE_5__ {int start; int end; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 struct intel_soc_pmic* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,TYPE_1__*,unsigned int,int *,int ,int *) ;
 int FUNC_5 (struct device*,int *,struct intel_soc_pmic*,int *) ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (struct platform_device*,unsigned int) ;
 int FUNC_7 (struct platform_device*,struct intel_soc_pmic*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct intel_soc_pmic *VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_8);
 VAR_8->dev = &VAR_6->dev;

 VAR_8->regmap = FUNC_5(VAR_7, ((void*)0), VAR_8, &VAR_4);
 if (FUNC_1(VAR_8->regmap))
  return FUNC_2(VAR_8->regmap);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  VAR_10 = FUNC_6(VAR_6, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_5[VAR_9].start = VAR_10;
  VAR_5[VAR_9].end = VAR_10;
 }

 return FUNC_4(VAR_7, VAR_2,
        VAR_3, FUNC_0(VAR_3),
        ((void*)0), 0, ((void*)0));
}

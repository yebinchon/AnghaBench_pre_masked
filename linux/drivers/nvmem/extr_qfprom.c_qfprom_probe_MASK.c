
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct qfprom_priv {int base; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct TYPE_3__ {struct qfprom_priv* priv; struct device* dev; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct qfprom_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct nvmem_device *VAR_7;
 struct qfprom_priv *VAR_8;

 VAR_8 = FUNC_4(VAR_5, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_8->base = FUNC_3(VAR_5, VAR_6);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_3.size = FUNC_7(VAR_6);
 VAR_3.dev = VAR_5;
 VAR_3.priv = VAR_8;

 VAR_7 = FUNC_5(VAR_5, &VAR_3);

 return FUNC_2(VAR_7);
}

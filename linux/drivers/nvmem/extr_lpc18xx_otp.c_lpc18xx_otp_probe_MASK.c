
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct nvmem_device {int dummy; } ;
struct lpc18xx_otp {int base; } ;
struct TYPE_3__ {struct lpc18xx_otp* priv; int * dev; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct lpc18xx_otp* FUNC_4 (int *,int,int ) ;
 struct nvmem_device* FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct nvmem_device *VAR_6;
 struct lpc18xx_otp *VAR_7;
 struct resource *VAR_8;

 VAR_7 = FUNC_4(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_5, VAR_2, 0);
 VAR_7->base = FUNC_3(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_4.size = VAR_3;
 VAR_4.dev = &VAR_5->dev;
 VAR_4.priv = VAR_7;

 VAR_6 = FUNC_5(&VAR_5->dev, &VAR_4);

 return FUNC_2(VAR_6);
}

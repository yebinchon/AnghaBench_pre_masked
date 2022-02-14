
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct meson_canvas {int lock; struct device* dev; int supports_endianness; int reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct meson_canvas*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct meson_canvas* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct resource *VAR_4;
 struct meson_canvas *VAR_5;
 struct device *VAR_6 = &VAR_3->dev;

 VAR_5 = FUNC_4(VAR_6, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_6(VAR_3, VAR_2, 0);
 VAR_5->reg_base = FUNC_3(VAR_6, VAR_4);
 if (FUNC_0(VAR_5->reg_base))
  return FUNC_1(VAR_5->reg_base);

 VAR_5->supports_endianness = FUNC_5(VAR_6);

 VAR_5->dev = VAR_6;
 FUNC_7(&VAR_5->lock);
 FUNC_2(VAR_6, VAR_5);

 return 0;
}

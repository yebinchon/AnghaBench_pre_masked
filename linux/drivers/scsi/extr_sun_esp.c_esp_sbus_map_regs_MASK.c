
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {struct resource* resource; } ;
struct esp {int regs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*,int ,int ,char*) ;
 struct platform_device* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct esp *VAR_2, int VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_2->dev);
 struct resource *VAR_5;




 if (VAR_3)
  VAR_5 = &VAR_4->resource[1];
 else
  VAR_5 = &VAR_4->resource[0];

 VAR_2->regs = FUNC_0(VAR_5, 0, VAR_1, "ESP");
 if (!VAR_2->regs)
  return -VAR_0;

 return 0;
}

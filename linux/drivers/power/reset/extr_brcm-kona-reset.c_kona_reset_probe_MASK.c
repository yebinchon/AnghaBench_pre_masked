
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct resource *VAR_4 = FUNC_3(VAR_3, VAR_0, 0);

 VAR_1 = FUNC_2(&VAR_3->dev, VAR_4);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 return FUNC_4(&VAR_2);
}

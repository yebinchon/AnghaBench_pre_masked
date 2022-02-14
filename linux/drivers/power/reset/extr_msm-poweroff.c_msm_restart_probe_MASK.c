
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct resource *VAR_7;

 VAR_7 = FUNC_3(VAR_5, VAR_0, 0);
 VAR_2 = FUNC_2(VAR_6, VAR_7);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_4(&VAR_4);

 VAR_3 = VAR_1;

 return 0;
}

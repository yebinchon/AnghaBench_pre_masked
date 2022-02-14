
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct platform_device*,int ,unsigned int) ;
 int FUNC_1 (struct resource*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static size_t FUNC_3(struct device *VAR_1,
       unsigned int VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_1);
 struct resource *VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_2);

 return FUNC_1(VAR_4) / 4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct resource* FUNC_0 (struct platform_device*) ;
 struct resource* FUNC_1 (struct platform_device*,int ,int) ;

__attribute__((used)) static inline struct resource *
FUNC_2(struct platform_device *VAR_1)
{
 struct resource *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1, VAR_0, 1);
}

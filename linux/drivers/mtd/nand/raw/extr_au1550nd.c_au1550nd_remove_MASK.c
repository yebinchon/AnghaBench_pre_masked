
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct au1550nd_ctx {int base; int chip; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct au1550nd_ctx*) ;
 int FUNC_2 (int *) ;
 struct au1550nd_ctx* FUNC_3 (struct platform_device*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct au1550nd_ctx *VAR_2 = FUNC_3(VAR_1);
 struct resource *VAR_3 = FUNC_4(VAR_1, VAR_0, 0);

 FUNC_2(&VAR_2->chip);
 FUNC_0(VAR_2->base);
 FUNC_5(VAR_3->start, 0x1000);
 FUNC_1(VAR_2);
 return 0;
}

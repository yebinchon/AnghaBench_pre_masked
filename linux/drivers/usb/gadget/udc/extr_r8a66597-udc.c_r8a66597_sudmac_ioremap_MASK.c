
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct r8a66597 {int sudmac_reg; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct resource*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_3(struct r8a66597 *VAR_1,
       struct platform_device *VAR_2)
{
 struct resource *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0, "sudmac");
 VAR_1->sudmac_reg = FUNC_1(&VAR_2->dev, VAR_3);
 return FUNC_0(VAR_1->sudmac_reg);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct mcp_sa11x0 {int mccr0; int base0; int base1; } ;
struct mcp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mcp*) ;
 int FUNC_3 (struct mcp*) ;
 struct mcp* FUNC_4 (struct platform_device*) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int) ;
 struct mcp_sa11x0* FUNC_6 (struct mcp*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct mcp *VAR_3 = FUNC_4(VAR_2);
 struct mcp_sa11x0 *VAR_4 = FUNC_6(VAR_3);
 struct resource *VAR_5, *VAR_6;

 if (VAR_4->mccr0 & VAR_1)
  FUNC_0(&VAR_2->dev,
    "device left active (missing disable call?)\n");

 VAR_5 = FUNC_5(VAR_2, VAR_0, 0);
 VAR_6 = FUNC_5(VAR_2, VAR_0, 1);

 FUNC_2(VAR_3);
 FUNC_1(VAR_4->base1);
 FUNC_1(VAR_4->base0);
 FUNC_3(VAR_3);
 FUNC_7(VAR_6->start, FUNC_8(VAR_6));
 FUNC_7(VAR_5->start, FUNC_8(VAR_5));

 return 0;
}

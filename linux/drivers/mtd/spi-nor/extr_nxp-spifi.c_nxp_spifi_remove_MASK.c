
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int mtd; } ;
struct nxp_spifi {int clk_reg; int clk_spifi; TYPE_1__ nor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct nxp_spifi* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct nxp_spifi *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->nor.mtd);
 FUNC_0(VAR_1->clk_spifi);
 FUNC_0(VAR_1->clk_reg);

 return 0;
}

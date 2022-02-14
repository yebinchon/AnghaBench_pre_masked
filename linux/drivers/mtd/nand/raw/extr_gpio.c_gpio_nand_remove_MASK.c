
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct gpiomtd {scalar_t__ nce; scalar_t__ nwp; int nand_chip; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 struct gpiomtd* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct gpiomtd *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->nand_chip);


 if (VAR_1->nwp && !FUNC_0(VAR_1->nwp))
  FUNC_1(VAR_1->nwp, 0);
 if (VAR_1->nce && !FUNC_0(VAR_1->nce))
  FUNC_1(VAR_1->nce, 0);

 return 0;
}

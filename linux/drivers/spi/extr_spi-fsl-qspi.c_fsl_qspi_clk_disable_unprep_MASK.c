
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_qspi {int clk_en; int clk; int pm_qos_req; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct fsl_qspi*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fsl_qspi *VAR_0)
{
 if (FUNC_1(VAR_0))
  FUNC_2(&VAR_0->pm_qos_req);

 FUNC_0(VAR_0->clk);
 FUNC_0(VAR_0->clk_en);
}

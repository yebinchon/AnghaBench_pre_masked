
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_qspi {int pm_qos_req; int clk_en; int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct fsl_qspi*) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fsl_qspi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_en);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2) {
  FUNC_0(VAR_1->clk_en);
  return VAR_2;
 }

 if (FUNC_2(VAR_1))
  FUNC_3(&VAR_1->pm_qos_req, VAR_0, 0);

 return 0;
}

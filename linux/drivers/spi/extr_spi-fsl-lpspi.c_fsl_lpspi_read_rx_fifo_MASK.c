
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_lpspi_data {int (* rx ) (struct fsl_lpspi_data*) ;scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct fsl_lpspi_data*) ;

__attribute__((used)) static void FUNC_2(struct fsl_lpspi_data *VAR_2)
{
 while (!(FUNC_0(VAR_2->base + VAR_0) & VAR_1))
  VAR_2->rx(VAR_2);
}

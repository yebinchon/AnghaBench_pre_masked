
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_ifc_ctrl {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fsl_ifc_ctrl*) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_2, void *VAR_3)
{
 struct fsl_ifc_ctrl *VAR_4 = VAR_3;

 if (FUNC_0(VAR_4))
  return VAR_0;

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ls_pcie {TYPE_1__* drvdata; scalar_t__ lut; } ;
struct dw_pcie {int dummy; } ;
struct TYPE_2__ {int ltssm_shift; scalar_t__ lut_dbg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ls_pcie* FUNC_1 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_2(struct dw_pcie *VAR_2)
{
 struct ls_pcie *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = (FUNC_0(VAR_3->lut + VAR_3->drvdata->lut_dbg) >>
   VAR_3->drvdata->ltssm_shift) &
   VAR_1;

 if (VAR_4 < VAR_0)
  return 0;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_pf {TYPE_1__* pdev; int hw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ice_pf *VAR_3)
{
 if (FUNC_1(&VAR_3->hw, VAR_0) & VAR_1)
  FUNC_0(&VAR_3->pdev->dev,
    "%d Byte cache line assumption is invalid, driver may have Tx timeouts!\n",
    VAR_2);
}
